/*
 * Copyright (C) 2010-2013 Groupement d'Intérêt Public pour l'Education Numérique en Afrique (GIP ENA)
 *
 * This file is part of Open-Sankoré.
 *
 * Open-Sankoré is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, version 3 of the License,
 * with a specific linking exception for the OpenSSL project's
 * "OpenSSL" library (or with modified versions of it that use the
 * same license as the "OpenSSL" library).
 *
 * Open-Sankoré is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Open-Sankoré.  If not, see <http://www.gnu.org/licenses/>.
 */



#include "UBBoardController.h"

#include <QtGui>
#include <QtWebKit>
#include <QDir>

#include "frameworks/UBFileSystemUtils.h"
#include "frameworks/UBPlatformUtils.h"

#include "core/UBApplication.h"
#include "core/UBSettings.h"
#include "core/UBSetting.h"
#include "core/UBPersistenceManager.h"
#include "core/UBApplicationController.h"
#include "core/UBDocumentManager.h"
#include "core/UBMimeData.h"
#include "core/UBDownloadManager.h"
#include "core/UBDisplayManager.h"

#include "network/UBHttpGet.h"

#include "gui/UBMessageWindow.h"
#include "gui/UBResources.h"
#include "gui/UBToolbarButtonGroup.h"
#include "gui/UBMainWindow.h"
#include "gui/UBToolWidget.h"
#include "gui/UBKeyboardPalette.h"
#include "gui/UBMagnifer.h"
#include "gui/UBDockPaletteWidget.h"
#include "gui/UBDockTeacherGuideWidget.h"
#include "gui/UBTeacherGuideWidget.h"

#include "domain/UBGraphicsPixmapItem.h"
#include "domain/UBGraphicsItemUndoCommand.h"
#include "domain/UBGraphicsProxyWidget.h"
#include "domain/UBGraphicsSvgItem.h"
#include "domain/UBGraphicsWidgetItem.h"
#include "domain/UBGraphicsMediaItem.h"
#include "domain/UBGraphicsPDFItem.h"
#include "domain/UBGraphicsTextItem.h"
#include "domain/UBPageSizeUndoCommand.h"
#include "domain/UBGraphicsGroupContainerItem.h"
#include "domain/UBItem.h"
#include "board/UBFeaturesController.h"
#include "domain/UBGraphicsStrokesGroup.h"

#include "gui/UBFeaturesWidget.h"

#include "tools/UBToolsManager.h"

#include "document/UBDocumentProxy.h"
#include "document/UBDocumentController.h"

#include "board/UBDrawingController.h"
#include "board/UBBoardView.h"

#include "podcast/UBPodcastController.h"

#include "adaptors/UBMetadataDcSubsetAdaptor.h"
#include "adaptors/UBSvgSubsetAdaptor.h"

#include "UBBoardPaletteManager.h"

#include "core/UBSettings.h"

#include "core/memcheck.h"

#include "web/UBWebController.h"

UBBoardController::UBBoardController(UBMainWindow* mainWindow)
    : UBDocumentContainer(mainWindow->centralWidget())
    , mMainWindow(mainWindow)
    , mActiveScene(0)
    , mActiveSceneIndex(-1)
    , mPaletteManager(0)
    , mSoftwareUpdateDialog(0)
    , mMessageWindow(0)
    , mControlView(0)
    , mDisplayView(0)
    , mControlContainer(0)
    , mControlLayout(0)
    , mZoomFactor(1.0)
    , mIsClosing(false)
    , mSystemScaleFactor(1.0)
    , mCleanupDone(false)
    , mCacheWidgetIsEnabled(false)
    , mDeletingSceneIndex(-1)
    , mMovingSceneIndex(-1)
    , mActionGroupText(tr("Group"))
    , mActionUngroupText(tr("Ungroup"))
{
    mZoomFactor = UBSettings::settings()->boardZoomFactor->get().toDouble();

    int penColorIndex = UBSettings::settings()->penColorIndex();
    int markerColorIndex = UBSettings::settings()->markerColorIndex();

    mPenColorOnDarkBackground = UBSettings::settings()->penColors(true).at(penColorIndex);
    mPenColorOnLightBackground = UBSettings::settings()->penColors(false).at(penColorIndex);
    mMarkerColorOnDarkBackground = UBSettings::settings()->markerColors(true).at(markerColorIndex);
    mMarkerColorOnLightBackground = UBSettings::settings()->markerColors(false).at(markerColorIndex);

    QDesktopWidget* desktop = UBApplication::desktop();
    int dpiCommon = (desktop->physicalDpiX() + desktop->physicalDpiY()) / 2;
    int sPixelsPerMillimeter = qRound(dpiCommon / UBGeometryUtils::inchSize);
    UBSettings::settings()->crossSize = 10*sPixelsPerMillimeter;
}


void UBBoardController::init()
{
    setupViews();
    setupToolbar();

    connect(UBApplication::undoStack, SIGNAL(canUndoChanged(bool))
            , this, SLOT(undoRedoStateChange(bool)));

    connect(UBApplication::undoStack, SIGNAL(canRedoChanged (bool))
            , this, SLOT(undoRedoStateChange(bool)));

    connect(UBDrawingController::drawingController(), SIGNAL(stylusToolChanged(int))
            , this, SLOT(setToolCursor(int)));

    connect(UBDrawingController::drawingController(), SIGNAL(stylusToolChanged(int))
            , this, SLOT(stylusToolChanged(int)));

    connect(UBApplication::app(), SIGNAL(lastWindowClosed())
            , this, SLOT(lastWindowClosed()));

    connect(UBDownloadManager::downloadManager(), SIGNAL(downloadModalFinished()), this, SLOT(onDownloadModalFinished()));
    connect(UBDownloadManager::downloadManager(), SIGNAL(addDownloadedFileToBoard(bool,QUrl,QUrl,QString,QByteArray,QPointF,QSize,bool,bool)), this, SLOT(downloadFinished(bool,QUrl,QUrl,QString,QByteArray,QPointF,QSize,bool,bool)));

    currentDocument = UBPersistenceManager::persistenceManager()->createNewDocument();
	setActiveDocumentScene(currentDocument);

    connect(UBApplication::mainWindow->actionGroupItems, SIGNAL(triggered()), this, SLOT(groupButtonClicked()));

    undoRedoStateChange(true);
}


UBBoardController::~UBBoardController()
{
    delete mDisplayView;
}


int UBBoardController::currentPage()
{
    if(UBSettings::settings()->teacherGuidePageZeroActivated->get().toBool())
        return mActiveSceneIndex;
    return mActiveSceneIndex + 1;
}

void UBBoardController::setupViews()
{
    mControlContainer = new QWidget(mMainWindow->centralWidget());

    mControlLayout = new QHBoxLayout(mControlContainer);
    mControlLayout->setContentsMargins(0, 0, 0, 0);

    mControlView = new UBBoardView(this, mControlContainer, true, false);
    mControlView->setInteractive(true);
    mControlView->setMouseTracking(true);

    mControlView->grabGesture(Qt::SwipeGesture);

    mControlView->setTransformationAnchor(QGraphicsView::NoAnchor);

    mControlLayout->addWidget(mControlView);
    mControlContainer->setObjectName("ubBoardControlContainer");
    mMainWindow->addBoardWidget(mControlContainer);

    connect(mControlView, SIGNAL(resized(QResizeEvent*)), this, SLOT(boardViewResized(QResizeEvent*)));

    // TODO UB 4.x Optimization do we have to create the display view even if their is
    // only 1 screen
    //
    mDisplayView = new UBBoardView(this, UBItemLayerType::FixedBackground, UBItemLayerType::Tool, 0);
    mDisplayView->setInteractive(false);
    mDisplayView->setTransformationAnchor(QGraphicsView::NoAnchor);

    mMessageWindow = new UBMessageWindow(mControlView);
    mMessageWindow->hide();

    mPaletteManager = new UBBoardPaletteManager(mControlContainer, this);
    connect(this, SIGNAL(activeSceneChanged()), mPaletteManager, SLOT(activeSceneChanged()));

}


void UBBoardController::setupLayout()
{
    if(mPaletteManager)
        mPaletteManager->setupLayout();
}


void UBBoardController::setBoxing(QRect displayRect)
{
    if (displayRect.isNull())
    {
        mControlLayout->setContentsMargins(0, 0, 0, 0);
        return;
    }

    int paletteWidth = paletteManager()->leftPalette()->width();
    
    qreal controlWidth = (qreal)mMainWindow->centralWidget()->width() - paletteWidth;
    qreal controlHeight = (qreal)mMainWindow->centralWidget()->height();
    qreal displayWidth = (qreal)displayRect.width();
    qreal displayHeight = (qreal)displayRect.height();

    qreal displayRatio = displayWidth / displayHeight;
    qreal controlRatio = controlWidth / controlHeight;

    if (displayRatio < controlRatio)
    {
        // Pillarboxing
        int boxWidth = (controlWidth - (displayWidth * (controlHeight / displayHeight))) / 2;
        mControlLayout->setContentsMargins(paletteWidth + boxWidth, 0, boxWidth, 0);
    }
    else if (displayRatio > controlRatio)
    {
        // Letterboxing
        int boxHeight = (controlHeight - (displayHeight * (controlWidth / displayWidth))) / 2;
        mControlLayout->setContentsMargins(paletteWidth, boxHeight, 0, boxHeight);
    }
    else
    {
        // No boxing
        mControlLayout->setContentsMargins(0, 0, 0, 0);
    }
}


QSize UBBoardController::displayViewport()
{
    return mDisplayView->geometry().size();
}


QSize UBBoardController::controlViewport()
{
    return mControlView->geometry().size();
}


QRectF UBBoardController::controlGeometry()
{
    return mControlView->geometry();
}


void UBBoardController::setupToolbar()
{
    UBSettings *settings = UBSettings::settings();

    // Setup color choice widget
    QList<QAction *> colorActions;
    colorActions.append(mMainWindow->actionColor0);
    colorActions.append(mMainWindow->actionColor1);
    colorActions.append(mMainWindow->actionColor2);
    colorActions.append(mMainWindow->actionColor3);

    UBToolbarButtonGroup *colorChoice =
            new UBToolbarButtonGroup(mMainWindow->boardToolBar, colorActions);

    mMainWindow->boardToolBar->insertWidget(mMainWindow->actionBackgrounds, colorChoice);

    connect(settings->appToolBarDisplayText, SIGNAL(changed(QVariant)), colorChoice, SLOT(displayText(QVariant)));
    connect(colorChoice, SIGNAL(activated(int)), this, SLOT(setColorIndex(int)));
    connect(UBDrawingController::drawingController(), SIGNAL(colorIndexChanged(int)), colorChoice, SLOT(setCurrentIndex(int)));
    connect(UBDrawingController::drawingController(), SIGNAL(colorPaletteChanged()), colorChoice, SLOT(colorPaletteChanged()));
    connect(UBDrawingController::drawingController(), SIGNAL(colorPaletteChanged()), this, SLOT(colorPaletteChanged()));

    colorChoice->displayText(QVariant(settings->appToolBarDisplayText->get().toBool()));
    colorChoice->colorPaletteChanged();

    // Setup line width choice widget
    QList<QAction *> lineWidthActions;
    lineWidthActions.append(mMainWindow->actionLineSmall);
    lineWidthActions.append(mMainWindow->actionLineMedium);
    lineWidthActions.append(mMainWindow->actionLineLarge);

    UBToolbarButtonGroup *lineWidthChoice =
            new UBToolbarButtonGroup(mMainWindow->boardToolBar, lineWidthActions);

    connect(settings->appToolBarDisplayText, SIGNAL(changed(QVariant)), lineWidthChoice, SLOT(displayText(QVariant)));

    connect(lineWidthChoice, SIGNAL(activated(int))
            , UBDrawingController::drawingController(), SLOT(setLineWidthIndex(int)));

    connect(UBDrawingController::drawingController(), SIGNAL(lineWidthIndexChanged(int))
            , lineWidthChoice, SLOT(setCurrentIndex(int)));

    lineWidthChoice->displayText(QVariant(settings->appToolBarDisplayText->get().toBool()));

    mMainWindow->boardToolBar->insertWidget(mMainWindow->actionBackgrounds, lineWidthChoice);

    //-----------------------------------------------------------//
    // Setup eraser width choice widget

    QList<QAction *> eraserWidthActions;
    eraserWidthActions.append(mMainWindow->actionEraserSmall);
    eraserWidthActions.append(mMainWindow->actionEraserMedium);
    eraserWidthActions.append(mMainWindow->actionEraserLarge);

    UBToolbarButtonGroup *eraserWidthChoice =
            new UBToolbarButtonGroup(mMainWindow->boardToolBar, eraserWidthActions);

    mMainWindow->boardToolBar->insertWidget(mMainWindow->actionBackgrounds, eraserWidthChoice);

    connect(settings->appToolBarDisplayText, SIGNAL(changed(QVariant)), eraserWidthChoice, SLOT(displayText(QVariant)));
    connect(eraserWidthChoice, SIGNAL(activated(int)), UBDrawingController::drawingController(), SLOT(setEraserWidthIndex(int)));

    eraserWidthChoice->displayText(QVariant(settings->appToolBarDisplayText->get().toBool()));
    eraserWidthChoice->setCurrentIndex(settings->eraserWidthIndex());

    mMainWindow->boardToolBar->insertSeparator(mMainWindow->actionBackgrounds);

    //-----------------------------------------------------------//

    UBApplication::app()->insertSpaceToToolbarBeforeAction(mMainWindow->boardToolBar, mMainWindow->actionBoard);
    UBApplication::app()->insertSpaceToToolbarBeforeAction(mMainWindow->tutorialToolBar, mMainWindow->actionBoard);

    UBApplication::app()->decorateActionMenu(mMainWindow->actionMenu);

    mMainWindow->actionBoard->setVisible(false);

    mMainWindow->webToolBar->hide();
    mMainWindow->documentToolBar->hide();
    mMainWindow->tutorialToolBar->hide();

    connectToolbar();
    initToolbarTexts();
}


void UBBoardController::setToolCursor(int tool)
{
    if (mActiveScene)
    {
        mActiveScene->setToolCursor(tool);
    }

    mControlView->setToolCursor(tool);
}



void UBBoardController::connectToolbar()
{
    connect(mMainWindow->actionAdd, SIGNAL(triggered()), this, SLOT(addItem()));
    connect(mMainWindow->actionNewPage, SIGNAL(triggered()), this, SLOT(addScene()));
    connect(mMainWindow->actionDuplicatePage, SIGNAL(triggered()), this, SLOT(duplicateScene()));

    connect(mMainWindow->actionClearPage, SIGNAL(triggered()), this, SLOT(clearScene()));
    connect(mMainWindow->actionEraseItems, SIGNAL(triggered()), this, SLOT(clearSceneItems()));
    connect(mMainWindow->actionEraseAnnotations, SIGNAL(triggered()), this, SLOT(clearSceneAnnotation()));
    connect(mMainWindow->actionEraseBackground,SIGNAL(triggered()),this,SLOT(clearSceneBackground()));

    connect(mMainWindow->actionUndo, SIGNAL(triggered()), UBApplication::undoStack, SLOT(undo()));
    connect(mMainWindow->actionRedo, SIGNAL(triggered()), UBApplication::undoStack, SLOT(redo()));
    connect(mMainWindow->actionRedo, SIGNAL(triggered()), this, SLOT(startScript()));
    connect(mMainWindow->actionBack, SIGNAL( triggered()), this, SLOT(previousScene()));
    connect(mMainWindow->actionForward, SIGNAL(triggered()), this, SLOT(nextScene()));
    connect(mMainWindow->actionSleep, SIGNAL(triggered()), this, SLOT(stopScript()));
    connect(mMainWindow->actionSleep, SIGNAL(triggered()), this, SLOT(blackout()));
	connect(mMainWindow->actionRestart, SIGNAL(triggered()), this, SLOT(restart()));
    connect(mMainWindow->actionVirtualKeyboard, SIGNAL(triggered(bool)), this, SLOT(showKeyboard(bool)));
    connect(mMainWindow->actionImportPage, SIGNAL(triggered()), this, SLOT(importPage()));
	connect(mMainWindow->actionPDF, SIGNAL(triggered()), this, SLOT(exportToPDF()));
}

void UBBoardController::restart(){

	if(mMainWindow->yesNoQuestion(tr("New lesson"), tr("The application will be restarted. Restart?")))
	{	// restart:
		//UBApplication::applicationController->restart();
		UBApplication::documentController->selectDocument(selectedDocument());
		UBApplication::documentController->createNewDocument();
		UBApplication::documentController->openSelectedItem();
	}
}

void UBBoardController::exportToPDF(){
	UBApplication::documentController->exportCurrentdocumentToPDF(currentDocument);
}

void UBBoardController::startScript()
{
    freezeW3CWidgets(false);
}

void UBBoardController::stopScript()
{
    freezeW3CWidgets(true);
}

void UBBoardController::initToolbarTexts()
{
    QList<QAction*> allToolbarActions;

    allToolbarActions << mMainWindow->boardToolBar->actions();
    allToolbarActions << mMainWindow->webToolBar->actions();
    allToolbarActions << mMainWindow->documentToolBar->actions();

    foreach(QAction* action, allToolbarActions)
    {
        QString nominalText = action->text();
        QString shortText = truncate(nominalText, 48);
        QPair<QString, QString> texts(nominalText, shortText);

        mActionTexts.insert(action, texts);
    }
}


void UBBoardController::setToolbarTexts()
{
    bool highResolution = mMainWindow->width() > 1024;
    QSize iconSize;

    if (highResolution)
        iconSize = QSize(48, 32);
    else
        iconSize = QSize(32, 32);

    mMainWindow->boardToolBar->setIconSize(iconSize);
    mMainWindow->webToolBar->setIconSize(iconSize);
    mMainWindow->documentToolBar->setIconSize(iconSize);

    foreach(QAction* action, mActionTexts.keys())
    {
        QPair<QString, QString> texts = mActionTexts.value(action);

        if (highResolution)
            action->setText(texts.first);
        else
        {
            action->setText(texts.second);
        }

        action->setToolTip(texts.first);
    }
}


QString UBBoardController::truncate(QString text, int maxWidth)
{
    QFontMetricsF fontMetrics(mMainWindow->font());
    return fontMetrics.elidedText(text, Qt::ElideRight, maxWidth);
}


void UBBoardController::stylusToolDoubleClicked(int tool)
{
    if (tool == UBStylusTool::ZoomIn || tool == UBStylusTool::ZoomOut)
    {
        zoomRestore();
    }
    else if (tool == UBStylusTool::Hand)
    {
        centerRestore();
    }
}

void UBBoardController::addScene()
{
    QApplication::setOverrideCursor(QCursor(Qt::WaitCursor));
    persistCurrentScene();

    UBDocumentContainer::addPage(mActiveSceneIndex + 1);

    selectedDocument()->setMetaData(UBSettings::documentUpdatedAt, UBStringUtils::toUtcIsoDateTime(QDateTime::currentDateTime()));

    setActiveDocumentScene(mActiveSceneIndex + 1);
    QApplication::restoreOverrideCursor();
}

void UBBoardController::addScene(UBGraphicsScene* scene, bool replaceActiveIfEmpty)
{
    if (scene)
    {
        if (scene->document() && (scene->document() != selectedDocument()))
        {
            foreach(QUrl relativeFile, scene->relativeDependencies())
            {
                QString source = scene->document()->persistencePath() + "/" + relativeFile.toString();
                QString target = selectedDocument()->persistencePath() + "/" + relativeFile.toString();

                QFileInfo fi(target);
                QDir d = fi.dir();

                d.mkpath(d.absolutePath());
                QFile::copy(source, target);
            }
        }

        if (replaceActiveIfEmpty && mActiveScene->isEmpty())
        {
            setActiveDocumentScene(mActiveSceneIndex);
        }
        else
        {
            persistCurrentScene();
            UBPersistenceManager::persistenceManager()->insertDocumentSceneAt(selectedDocument(), scene, mActiveSceneIndex + 1);
            setActiveDocumentScene(mActiveSceneIndex + 1);
        }

        selectedDocument()->setMetaData(UBSettings::documentUpdatedAt, UBStringUtils::toUtcIsoDateTime(QDateTime::currentDateTime()));
    }
}


void UBBoardController::addScene(UBDocumentProxy* proxy, int sceneIndex, bool replaceActiveIfEmpty)
{
    UBGraphicsScene* scene = UBPersistenceManager::persistenceManager()->loadDocumentScene(proxy, sceneIndex);

    if (scene)
    {
        addScene(scene, replaceActiveIfEmpty);
    }
}

void UBBoardController::duplicateScene(int nIndex)
{
    QApplication::setOverrideCursor(QCursor(Qt::WaitCursor));
    persistCurrentScene();

    QList<int> scIndexes;
    scIndexes << nIndex;
    duplicatePages(scIndexes);
    insertThumbPage(nIndex);
    emit documentThumbnailsUpdated(this);
    selectedDocument()->setMetaData(UBSettings::documentUpdatedAt, UBStringUtils::toUtcIsoDateTime(QDateTime::currentDateTime()));

    setActiveDocumentScene(nIndex + 1);
    QApplication::restoreOverrideCursor();

    emit pageChanged();
}

void UBBoardController::duplicateScene()
{
    if (UBApplication::applicationController->displayMode() != UBApplicationController::Board)
        return;
    duplicateScene(mActiveSceneIndex);
}

UBGraphicsItem *UBBoardController::duplicateItem(UBItem *item, bool bAsync)
{
    if (!item)
        return NULL;

    UBGraphicsItem *retItem = NULL;

    mLastCreatedItem = NULL;

    QUrl sourceUrl;
    QByteArray pData;

    //common parameters for any item
    QPointF itemPos;
    QSizeF itemSize;

    QGraphicsItem *commonItem = dynamic_cast<QGraphicsItem*>(item);
    if (commonItem)
    {
        qreal shifting = UBSettings::settings()->objectFrameWidth;
        itemPos = commonItem->pos() + QPointF(shifting,shifting);
        itemSize = commonItem->boundingRect().size();
        commonItem->setSelected(false);
    }

    UBMimeType::Enum itemMimeType;

    QString srcFile = item->sourceUrl().toLocalFile();
    if (srcFile.isEmpty())
        srcFile = item->sourceUrl().toString();

    QString contentTypeHeader;
    if (!srcFile.isEmpty())
        contentTypeHeader = UBFileSystemUtils::mimeTypeFromFileName(srcFile);

    if(NULL != qgraphicsitem_cast<UBGraphicsGroupContainerItem*>(commonItem))
        itemMimeType = UBMimeType::Group;
    else
        itemMimeType = UBFileSystemUtils::mimeTypeFromString(contentTypeHeader);

    switch(static_cast<int>(itemMimeType))
    {
    case UBMimeType::AppleWidget:
    case UBMimeType::W3CWidget:
        {
            UBGraphicsWidgetItem *witem = dynamic_cast<UBGraphicsWidgetItem*>(item);
            if (witem)
            {
                sourceUrl = witem->getOwnFolder();
            }
        }break;

    case UBMimeType::Video:
    case UBMimeType::Audio:
        {
            UBGraphicsMediaItem *mitem = dynamic_cast<UBGraphicsMediaItem*>(item);
            if (mitem)
            {
                sourceUrl = mitem->mediaFileUrl();
                if (bAsync)
                {
                    downloadURL(sourceUrl, srcFile, itemPos, QSize(itemSize.width(), itemSize.height()), false, false);
                    return NULL; // async operation
                }
            }
        }break;

    case UBMimeType::VectorImage:
        {
            UBGraphicsSvgItem *viitem = dynamic_cast<UBGraphicsSvgItem*>(item);
            if (viitem)
            {
                pData = viitem->fileData();
                sourceUrl = item->sourceUrl();
            }
        }break;

    case UBMimeType::RasterImage:
        {
            UBGraphicsPixmapItem *pixitem = dynamic_cast<UBGraphicsPixmapItem*>(item);
            if (pixitem)
            {
                 QBuffer buffer(&pData);
                 buffer.open(QIODevice::WriteOnly);
                 QString format = UBFileSystemUtils::extension(item->sourceUrl().toLocalFile());
                 pixitem->pixmap().save(&buffer, format.toLatin1());
            }
        }break;

    case UBMimeType::Group:
    {
        UBGraphicsGroupContainerItem* groupItem = dynamic_cast<UBGraphicsGroupContainerItem*>(item);
        UBGraphicsGroupContainerItem* duplicatedGroup = NULL;

        QList<QGraphicsItem*> duplicatedItems;
        QList<QGraphicsItem*> children = groupItem->childItems();

        mActiveScene->setURStackEnable(false);
        foreach(QGraphicsItem* pIt, children){
            UBItem* pItem = dynamic_cast<UBItem*>(pIt);
            if(pItem){ // we diong sync duplication of all childs.
                QGraphicsItem * itemToGroup = dynamic_cast<QGraphicsItem *>(duplicateItem(pItem, false));
                if (itemToGroup)
                    duplicatedItems.append(itemToGroup);
            }
        }
        duplicatedGroup = mActiveScene->createGroup(duplicatedItems);
        duplicatedGroup->setTransform(groupItem->transform());
        groupItem->setSelected(false);

        retItem = dynamic_cast<UBGraphicsItem *>(duplicatedGroup);

        QGraphicsItem * itemToAdd = dynamic_cast<QGraphicsItem *>(retItem);
        if (itemToAdd)
        {
            mActiveScene->addItem(itemToAdd);
            itemToAdd->setSelected(true);
        }
        mActiveScene->setURStackEnable(true);
    }break;

    case UBMimeType::UNKNOWN:
        {
            QGraphicsItem *gitem = dynamic_cast<QGraphicsItem*>(item->deepCopy());
            if (gitem)
            {
                mActiveScene->addItem(gitem);
                gitem->setPos(itemPos);
                mLastCreatedItem = gitem;
                gitem->setSelected(true);
            }
            retItem = dynamic_cast<UBGraphicsItem *>(gitem);
        }break;
    }

    if (retItem)
    {
        QGraphicsItem *graphicsRetItem = dynamic_cast<QGraphicsItem *>(retItem);
        if (mActiveScene->isURStackIsEnabled()) { //should be deleted after scene own undo stack implemented
             UBGraphicsItemUndoCommand* uc = new UBGraphicsItemUndoCommand(mActiveScene, 0, graphicsRetItem);
             UBApplication::undoStack->push(uc);
        }
        return retItem;
    }

    UBItem *createdItem = downloadFinished(true, sourceUrl, srcFile, contentTypeHeader, pData, itemPos, QSize(itemSize.width(), itemSize.height()));
    if (createdItem)
    {
        createdItem->setSourceUrl(item->sourceUrl());
        item->copyItemParameters(createdItem);

        QGraphicsItem *createdGitem = dynamic_cast<QGraphicsItem*>(createdItem);
        if (createdGitem)
            createdGitem->setPos(itemPos);
        mLastCreatedItem = dynamic_cast<QGraphicsItem*>(createdItem);
        mLastCreatedItem->setSelected(true);

        retItem = dynamic_cast<UBGraphicsItem *>(createdItem);
    }

    return retItem;
}

void UBBoardController::deleteScene(int nIndex)
{
    if (selectedDocument()->pageCount()>=2)
    {
        mDeletingSceneIndex = nIndex;
        QApplication::setOverrideCursor(QCursor(Qt::WaitCursor));
        persistCurrentScene();
        showMessage(tr("Delete page %1 from document").arg(nIndex+1), true);

        QList<int> scIndexes;
        scIndexes << nIndex;
        selectedDocument()->setMetaData(UBSettings::documentUpdatedAt, UBStringUtils::toUtcIsoDateTime(QDateTime::currentDateTime()));

        if (nIndex >= pageCount())
            nIndex = pageCount()-1;
        setActiveDocumentScene(nIndex-1);
        deletePages(scIndexes);
        showMessage(tr("Page %1 deleted").arg(nIndex));
        QApplication::restoreOverrideCursor();
        mDeletingSceneIndex = -1;
    }
}

void UBBoardController::regenerateThumbnails()
{
    mDocumentNavigator->generateThumbnails(this);
}

void UBBoardController::clearScene()
{
    if (mActiveScene)
    {
        freezeW3CWidgets(true);
        mActiveScene->clearContent(UBGraphicsScene::clearItemsAndAnnotations);
        updateActionStates();
    }
}


void UBBoardController::clearSceneItems()
{
    if (mActiveScene)
    {
        freezeW3CWidgets(true);
        mActiveScene->clearContent(UBGraphicsScene::clearItems);
        updateActionStates();
    }
}


void UBBoardController::clearSceneAnnotation()
{
    if (mActiveScene)
    {
        mActiveScene->clearContent(UBGraphicsScene::clearAnnotations);
        updateActionStates();
    }
}

void UBBoardController::clearSceneBackground()
{
    if (mActiveScene)
    {
        mActiveScene->clearContent(UBGraphicsScene::clearBackground);
        updateActionStates();
    }
}

void UBBoardController::showDocumentsDialog()
{
    if (selectedDocument())
        persistCurrentScene();

    UBApplication::mainWindow->actionLibrary->setChecked(false);

}

void UBBoardController::libraryDialogClosed(int ret)
{
    Q_UNUSED(ret);

    mMainWindow->actionLibrary->setChecked(false);
}


void UBBoardController::blackout()
{
    UBApplication::applicationController->blackout();
}


void UBBoardController::showKeyboard(bool show)
{
    if(show)
        UBDrawingController::drawingController()->setStylusTool(UBStylusTool::Selector);
    mPaletteManager->showVirtualKeyboard(show);
}


void UBBoardController::zoomIn(QPointF scenePoint)
{
    if (mControlView->transform().m11() > UB_MAX_ZOOM)
    {
        qApp->beep();
        return;
    }
    zoom(mZoomFactor, scenePoint);
}


void UBBoardController::zoomOut(QPointF scenePoint)
{
    if ((mControlView->horizontalScrollBar()->maximum() == 0) && (mControlView->verticalScrollBar()->maximum() == 0))
    {
        // Do not zoom out if we reached the maximum
        qApp->beep();
        return;
    }

    qreal newZoomFactor = 1 / mZoomFactor;

    zoom(newZoomFactor, scenePoint);
}


void UBBoardController::zoomRestore()
{
    QTransform tr;

    tr.scale(mSystemScaleFactor, mSystemScaleFactor);
    mControlView->setTransform(tr);

    centerRestore();

    foreach(QGraphicsItem *gi, mActiveScene->selectedItems ())
    {
        //force item to redraw the frame (for the anti scale calculation)
        gi->setSelected(false);
        gi->setSelected(true);
    }

    emit zoomChanged(1.0);
}


void UBBoardController::centerRestore()
{
    centerOn(QPointF(0,0));
}


void UBBoardController::centerOn(QPointF scenePoint)
{
    mControlView->centerOn(scenePoint);
    UBApplication::applicationController->adjustDisplayView();
}


void UBBoardController::zoom(const qreal ratio, QPointF scenePoint)
{

    QPointF viewCenter = mControlView->mapToScene(QRect(0, 0, mControlView->width(), mControlView->height()).center());
    QPointF offset = scenePoint - viewCenter;
    QPointF scalledOffset = offset / ratio;

    qreal currentZoom = ratio * mControlView->viewportTransform().m11() / mSystemScaleFactor;

    qreal usedRatio = ratio;
    if (currentZoom > UB_MAX_ZOOM)
    {
        currentZoom = UB_MAX_ZOOM;
        usedRatio = currentZoom * mSystemScaleFactor / mControlView->viewportTransform().m11();
    }

    mControlView->scale(usedRatio, usedRatio);

    QPointF newCenter = scenePoint - scalledOffset;

    mControlView->centerOn(newCenter);

    emit zoomChanged(currentZoom);
    UBApplication::applicationController->adjustDisplayView();

    emit controlViewportChanged();
    mActiveScene->setBackgroundZoomFactor(mControlView->transform().m11());
}


void UBBoardController::handScroll(qreal dx, qreal dy)
{
    mControlView->translate(dx, dy);

    UBApplication::applicationController->adjustDisplayView();

    emit controlViewportChanged();
}


void UBBoardController::previousScene()
{
    if (mActiveSceneIndex > 0)
    {
        QApplication::setOverrideCursor(QCursor(Qt::WaitCursor));
        persistCurrentScene();
        setActiveDocumentScene(mActiveSceneIndex - 1);
        QApplication::restoreOverrideCursor();
    }

    updateActionStates();
    emit pageChanged();
}


void UBBoardController::nextScene()
{
    if (mActiveSceneIndex < selectedDocument()->pageCount() - 1)
    {
        QApplication::setOverrideCursor(QCursor(Qt::WaitCursor));
        persistCurrentScene();
        setActiveDocumentScene(mActiveSceneIndex + 1);
        QApplication::restoreOverrideCursor();
    }

    updateActionStates();
    emit pageChanged();
}


void UBBoardController::firstScene()
{
    if (mActiveSceneIndex > 0)
    {
        QApplication::setOverrideCursor(QCursor(Qt::WaitCursor));
        persistCurrentScene();
        setActiveDocumentScene(0);
        QApplication::restoreOverrideCursor();
    }

    updateActionStates();
    emit pageChanged();
}


void UBBoardController::lastScene()
{
    if (mActiveSceneIndex < selectedDocument()->pageCount() - 1)
    {
        QApplication::setOverrideCursor(QCursor(Qt::WaitCursor));
        persistCurrentScene();
        setActiveDocumentScene(selectedDocument()->pageCount() - 1);
        QApplication::restoreOverrideCursor();
    }

    updateActionStates();
    emit pageChanged();
}

void UBBoardController::groupButtonClicked()
{
    QAction *groupAction = UBApplication::mainWindow->actionGroupItems;
    QList<QGraphicsItem*> selItems = activeScene()->selectedItems();
    if (!selItems.count()) {
        qDebug() << "Got grouping request when there is no any selected item on the scene";
        return;
    }

    if (groupAction->text() == mActionGroupText) { //The only way to get information from item, considering using smth else
        UBGraphicsGroupContainerItem *groupItem = activeScene()->createGroup(selItems);
        groupItem->setSelected(true);
        UBDrawingController::drawingController()->setStylusTool(UBStylusTool::Selector);

    }
    else if (groupAction->text() == mActionUngroupText) {
        //Considering one selected item and it's a group
        if (selItems.count() > 1)
        {
            qDebug() << "can't make sense of ungrouping more then one item. Grouping action should be performed for that purpose";
            return;
        }
        UBGraphicsGroupContainerItem *currentGroup = dynamic_cast<UBGraphicsGroupContainerItem*>(selItems.first());
        if (currentGroup) {
            currentGroup->Delegate()->setAction(0);
            currentGroup->destroy();
        }
    }
}

void UBBoardController::downloadURL(const QUrl& url, QString contentSourceUrl, const QPointF& pPos, const QSize& pSize, bool isBackground, bool internalData)
{
    qDebug() << "something has been dropped on the board! Url is: " << url.toString();
    QString sUrl = url.toString();

    QGraphicsItem *oldBackgroundObject = NULL;
    if (isBackground)
        oldBackgroundObject = mActiveScene->backgroundObject();

    if(sUrl.startsWith("uniboardTool://"))
    {
        downloadFinished(true, url, QUrl(), "application/vnd.mnemis-uniboard-tool", QByteArray(), pPos, pSize, isBackground);
    }
    else if (sUrl.startsWith("file://") || sUrl.startsWith("/"))
    {
        QUrl formedUrl = sUrl.startsWith("file://") ? url : QUrl::fromLocalFile(sUrl);
        QString fileName = formedUrl.toLocalFile();
        QString contentType = UBFileSystemUtils::mimeTypeFromFileName(fileName);

        bool shouldLoadFileData =
                contentType.startsWith("image")
                || contentType.startsWith("application/widget")
                || contentType.startsWith("application/vnd.apple-widget")
                || contentType.startsWith("internal/link");

        if (isBackground)
            mActiveScene->setURStackEnable(false);

        if (shouldLoadFileData)
        {
            QFile file(fileName);
            file.open(QIODevice::ReadOnly);
            downloadFinished(true, formedUrl, QUrl(), contentType, file.readAll(), pPos, pSize, true, isBackground, internalData);
            file.close();
       }
       else
       {
           // media items should be copyed in separate thread

           sDownloadFileDesc desc;
           desc.modal = false;
           desc.srcUrl = sUrl;
           desc.originalSrcUrl = contentSourceUrl;
           desc.currentSize = 0;
           desc.name = QFileInfo(url.toString()).fileName();
           desc.totalSize = 0; // The total size will be retrieved during the download
           desc.pos = pPos;
           desc.size = pSize;
           desc.isBackground = isBackground;

           UBDownloadManager::downloadManager()->addFileToDownload(desc);
       }
    }
    else
    {
        QString urlString = url.toString();
        int parametersStringPosition = urlString.indexOf("?");
        if(parametersStringPosition != -1)
            urlString = urlString.left(parametersStringPosition);

        // When we fall there, it means that we are dropping something from the web to the board
        sDownloadFileDesc desc;
        desc.modal = true;
        desc.srcUrl = urlString;
        desc.currentSize = 0;
        desc.name = QFileInfo(urlString).fileName();
        desc.totalSize = 0; // The total size will be retrieved during the download
        desc.pos = pPos;
        desc.size = pSize;
        desc.isBackground = isBackground;

        UBDownloadManager::downloadManager()->addFileToDownload(desc);
    }

    if (isBackground && oldBackgroundObject != mActiveScene->backgroundObject())
    {
        mActiveScene->setURStackEnable(true);
        if (mActiveScene->isURStackIsEnabled()) { //should be deleted after scene own undo stack implemented
            UBGraphicsItemUndoCommand* uc = new UBGraphicsItemUndoCommand(mActiveScene, oldBackgroundObject, mActiveScene->backgroundObject());
            UBApplication::undoStack->push(uc);
        }
    }
}

void UBBoardController::addLinkToPage(QString sourceUrl, QSize size, QPointF pos, const QString &embedCode)
{
    QString widgetUrl;
    QString lSourceUrl = sourceUrl.replace("\n","").replace("\r","");
    UBMimeType::Enum itemMimeType = UBFileSystemUtils::mimeTypeFromUrl(lSourceUrl);

    if(UBMimeType::Flash == itemMimeType){
        QString tmpDirPath = UBFileSystemUtils::createTempDir();
        widgetUrl = UBGraphicsW3CWidgetItem::createNPAPIWrapperInDir(sourceUrl, QDir(tmpDirPath),UBFileSystemUtils::mimeTypeFromFileName(lSourceUrl),QSize(300,150),QUuid::createUuid().toString());

    }
    else{
        QString html;
        if (!embedCode.isEmpty())
            html = embedCode;
        else if(UBMimeType::Video == itemMimeType)
            html = "     <video src=\"" + lSourceUrl + "\" controls=\"controls\">\n";
        else if(UBMimeType::Audio == itemMimeType)
            html = "     <audio src=\"" + lSourceUrl + "\" controls=\"controls\">\n";
        else if(UBMimeType::RasterImage == itemMimeType || UBMimeType::VectorImage == itemMimeType)
            html = "     <img src=\"" + lSourceUrl + "\">\n";
        else if(QUrl(lSourceUrl).isValid())
        {
            html = "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.01//EN\" \"http://www.w3.org/TR/html4/strict.dtd\">\r\n";
            html += "<html xmlns=\"http://www.w3.org/1999/xhtml\">\r\n";
            html += "    <head>\r\n";
            html += "        <meta http-equiv=\"refresh\" content=\"0; " + lSourceUrl + "\">\r\n";
            html += "    </head>\r\n";
            html += "    <body>\r\n";
            html += "        Redirect to target...\r\n";
            html += "    </body>\r\n";
            html += "</html>\r\n";
        }

        QString tmpDirPath = UBFileSystemUtils::createTempDir();
        widgetUrl = UBGraphicsW3CWidgetItem::createHtmlWrapperInDir(html, QDir(tmpDirPath), size, QUuid::createUuid().toString());
    }

    if (widgetUrl.length() > 0)
    {
        UBGraphicsWidgetItem *widgetItem = mActiveScene->addW3CWidget(QUrl::fromLocalFile(widgetUrl), pos);
        widgetItem->setUuid(QUuid::createUuid());
        widgetItem->setSourceUrl(QUrl::fromLocalFile(widgetUrl));

        UBDrawingController::drawingController()->setStylusTool(UBStylusTool::Selector);
    }
}

UBItem *UBBoardController::downloadFinished(bool pSuccess, QUrl sourceUrl, QUrl contentUrl, QString pContentTypeHeader, QByteArray pData, QPointF pPos, QSize pSize, bool isSyncOperation, bool isBackground, bool internalData)
{
    Q_ASSERT(pSuccess);

    QString mimeType = pContentTypeHeader;

    // In some cases "image/jpeg;charset=" is retourned by the drag-n-drop. That is
    // why we will check if an ; exists and take the first part (the standard allows this kind of mimetype)
    if(mimeType.isEmpty())
      mimeType = UBFileSystemUtils::mimeTypeFromFileName(sourceUrl.toString());


    int position=mimeType.indexOf(";");
    if(position != -1)
        mimeType=mimeType.left(position);

    UBMimeType::Enum itemMimeType = UBFileSystemUtils::mimeTypeFromString(mimeType);

    if(itemMimeType == UBMimeType::UNKNOWN)
        itemMimeType = UBFileSystemUtils::mimeTypeFromString(UBFileSystemUtils::mimeTypeFromFileName(sourceUrl.toString()));

    if (!pSuccess)
    {
        showMessage(tr("Downloading content %1 failed").arg(sourceUrl.toString()));
        return NULL;
    }


    mActiveScene->deselectAllItems();

    if (!sourceUrl.toString().startsWith("file://") && !sourceUrl.toString().startsWith("uniboardTool://"))
        showMessage(tr("Download finished"));


    if (UBMimeType::RasterImage == itemMimeType)
    {
        QPixmap pix;
        if(pData.length() == 0){
            pix.load(sourceUrl.toLocalFile());
        }
        else{
            QImage img;
            img.loadFromData(pData);
            pix = QPixmap::fromImage(img);
        }

        UBGraphicsPixmapItem* pixItem = mActiveScene->addPixmap(pix, NULL, pPos, 1.);
        pixItem->setSourceUrl(sourceUrl);

        if (isBackground)
        {
            mActiveScene->setAsBackgroundObject(pixItem, true);
        }
        else
        {
            mActiveScene->scaleToFitDocumentSize(pixItem, true, UBSettings::objectInControlViewMargin);
            UBDrawingController::drawingController()->setStylusTool(UBStylusTool::Selector);
            pixItem->setSelected(true);
        }

        return pixItem;
    }
    else if (UBMimeType::VectorImage == itemMimeType)
    {
        qDebug() << "accepting mime type" << mimeType << "as vecto image";

        UBGraphicsSvgItem* svgItem = mActiveScene->addSvg(sourceUrl, pPos, pData);
        svgItem->setSourceUrl(sourceUrl);

        if (isBackground)
            mActiveScene->setAsBackgroundObject(svgItem);
        else
        {
            mActiveScene->scaleToFitDocumentSize(svgItem, true, UBSettings::objectInControlViewMargin);
            UBDrawingController::drawingController()->setStylusTool(UBStylusTool::Selector);
            svgItem->setSelected(true);
        }

        return svgItem;
    }
    else if (UBMimeType::AppleWidget == itemMimeType) //mime type invented by us :-(
    {
        qDebug() << "accepting mime type" << mimeType << "as Apple widget";

        QUrl widgetUrl = sourceUrl;

        if (pData.length() > 0)
        {
            widgetUrl = expandWidgetToTempDir(pData, "wdgt");
        }

        UBGraphicsWidgetItem* appleWidgetItem = mActiveScene->addAppleWidget(widgetUrl, pPos);

        appleWidgetItem->setSourceUrl(sourceUrl);

        if (isBackground)
        {
            mActiveScene->setAsBackgroundObject(appleWidgetItem);
        }
        else
        {
            UBDrawingController::drawingController()->setStylusTool(UBStylusTool::Selector);
        }

        return appleWidgetItem;
    }
    else if (UBMimeType::W3CWidget == itemMimeType)
    {
        QUrl widgetUrl = sourceUrl;

        if (pData.length() > 0)
            widgetUrl = expandWidgetToTempDir(pData);

        UBGraphicsWidgetItem *w3cWidgetItem = addW3cWidget(widgetUrl, pPos);

        if (isBackground)
            mActiveScene->setAsBackgroundObject(w3cWidgetItem);
        else
            UBDrawingController::drawingController()->setStylusTool(UBStylusTool::Selector);

        return w3cWidgetItem;
    }
    else if (UBMimeType::Video == itemMimeType)
    {
        qDebug() << "accepting mime type" << mimeType << "as video";

        UBGraphicsMediaItem *mediaVideoItem = 0;
        QUuid uuid = QUuid::createUuid();
        if (pData.length() > 0)
        {
            QString destFile;
            bool b = UBPersistenceManager::persistenceManager()->addFileToDocument(selectedDocument(),
                sourceUrl.toString(),
                UBPersistenceManager::videoDirectory,
                uuid,
                destFile,
                &pData);
            if (!b)
            {
                showMessage(tr("Add file operation failed: file copying error"));
                return NULL;
            }

            QUrl url = QUrl::fromLocalFile(destFile);

            mediaVideoItem = mActiveScene->addMedia(url, false, pPos);
        }
        else
        {
            qDebug() << sourceUrl.toString();
            mediaVideoItem = addVideo(sourceUrl, false, pPos, isSyncOperation);
        }

        if(mediaVideoItem){
            if (contentUrl.isEmpty())
                mediaVideoItem->setSourceUrl(sourceUrl);
            else
                mediaVideoItem->setSourceUrl(contentUrl);
            mediaVideoItem->setUuid(uuid);
            connect(this, SIGNAL(activeSceneChanged()), mediaVideoItem, SLOT(activeSceneChanged()));
        }

        UBDrawingController::drawingController()->setStylusTool(UBStylusTool::Selector);

        return mediaVideoItem;
    }
    else if (UBMimeType::Audio == itemMimeType)
    {
        qDebug() << "accepting mime type" << mimeType << "as audio";

        UBGraphicsMediaItem *audioMediaItem = 0;

        QUuid uuid = QUuid::createUuid();
        if (pData.length() > 0)
        {
            QString destFile;
            bool b = UBPersistenceManager::persistenceManager()->addFileToDocument(selectedDocument(),
                sourceUrl.toString(),
                UBPersistenceManager::audioDirectory,
                uuid,
                destFile,
                &pData);
            if (!b)
            {
                showMessage(tr("Add file operation failed: file copying error"));
                return NULL;
            }

            QUrl url = QUrl::fromLocalFile(destFile);

            audioMediaItem = mActiveScene->addMedia(url, false, pPos);
        }
        else
        {
            audioMediaItem = addAudio(sourceUrl, false, pPos, isSyncOperation);
        }

        if(audioMediaItem){
            if (contentUrl.isEmpty())
                audioMediaItem->setSourceUrl(sourceUrl);
            else
                audioMediaItem->setSourceUrl(contentUrl);
            audioMediaItem->setUuid(uuid);
            connect(this, SIGNAL(activeSceneChanged()), audioMediaItem, SLOT(activeSceneChanged()));
        }

        UBDrawingController::drawingController()->setStylusTool(UBStylusTool::Selector);

        return audioMediaItem;
    }
    else if (UBMimeType::Flash == itemMimeType)
    {

        qDebug() << "accepting mime type" << mimeType << "as flash";

        QString sUrl = sourceUrl.toString();

        if (sUrl.startsWith("file://") || sUrl.startsWith("/"))
        {
            sUrl = sourceUrl.toLocalFile();
        }

        QTemporaryFile* tempFile = 0;

        if (!pData.isNull())
        {
            tempFile = new QTemporaryFile("XXXXXX.swf");
            if (tempFile->open())
            {
                tempFile->write(pData);
                tempFile->close();
                QFileInfo fi(*tempFile);
                sUrl = fi.absoluteFilePath();
            }
        }

        QSize size;

        if (pSize.height() > 0 && pSize.width() > 0)
            size = pSize;
        else
            size = mActiveScene->nominalSize() * .8;

        Q_UNUSED(internalData)

        QString widgetUrl = UBGraphicsW3CWidgetItem::createNPAPIWrapper(sUrl, mimeType, size);
        emit npapiWidgetCreated(widgetUrl);

        if (widgetUrl.length() > 0)
        {
            UBGraphicsWidgetItem *widgetItem = mActiveScene->addW3CWidget(QUrl::fromLocalFile(widgetUrl), pPos);
            widgetItem->setUuid(QUuid::createUuid());
            widgetItem->setSourceUrl(QUrl::fromLocalFile(widgetUrl));
            widgetItem->resize(size);

            UBDrawingController::drawingController()->setStylusTool(UBStylusTool::Selector);

            return widgetItem;
        }

        if (tempFile)
            delete tempFile;

    }
    else if (UBMimeType::PDF == itemMimeType)
    {
        qDebug() << "accepting mime type" << mimeType << "as PDF";
        qDebug() << "pdf data length: " << pData.size();
        qDebug() << "sourceurl : " + sourceUrl.toString();
        int result = 0;
        if(!sourceUrl.isEmpty()){
            QStringList fileNames;
            fileNames << sourceUrl.toLocalFile();
            result = UBDocumentManager::documentManager()->addFilesToDocument(selectedDocument(), fileNames);
        }
        else if(pData.size()){
            QTemporaryFile pdfFile("XXXXXX.pdf");
            if (pdfFile.open())
            {
                pdfFile.write(pData);
                QStringList fileNames;
                fileNames << pdfFile.fileName();
                result = UBDocumentManager::documentManager()->addFilesToDocument(selectedDocument(), fileNames);
                pdfFile.close();
            }
        }

        if (result){
            selectedDocument()->setMetaData(UBSettings::documentUpdatedAt, UBStringUtils::toUtcIsoDateTime(QDateTime::currentDateTime()));
        }
    }
    else if (UBMimeType::UniboardTool == itemMimeType)
    {
        qDebug() << "accepting mime type" << mimeType << "as Uniboard Tool";

        if (sourceUrl.toString() == UBToolsManager::manager()->compass.id)
        {
            mActiveScene->addCompass(pPos);
            UBDrawingController::drawingController()->setStylusTool(UBStylusTool::Selector);
        }
        else if (sourceUrl.toString() == UBToolsManager::manager()->ruler.id)
        {
            mActiveScene->addRuler(pPos);
            UBDrawingController::drawingController()->setStylusTool(UBStylusTool::Selector);
        }
        else if (sourceUrl.toString() == UBToolsManager::manager()->protractor.id)
        {
            mActiveScene->addProtractor(pPos);
            UBDrawingController::drawingController()->setStylusTool(UBStylusTool::Selector);
        }
        else if (sourceUrl.toString() == UBToolsManager::manager()->triangle.id)
        {
            mActiveScene->addTriangle(pPos);
            UBDrawingController::drawingController()->setStylusTool(UBStylusTool::Selector);
        }
        else if (sourceUrl.toString() == UBToolsManager::manager()->cache.id)
        {
            mActiveScene->addCache();
            UBDrawingController::drawingController()->setStylusTool(UBStylusTool::Selector);
        }
        else if (sourceUrl.toString() == UBToolsManager::manager()->magnifier.id)
        {
            UBMagnifierParams params;
            params.x = controlContainer()->geometry().width() / 2;
            params.y = controlContainer()->geometry().height() / 2;
            params.zoom = 2;
            params.sizePercentFromScene = 20;
            mActiveScene->addMagnifier(params);
            UBDrawingController::drawingController()->setStylusTool(UBStylusTool::Selector);
        }
        else if (sourceUrl.toString() == UBToolsManager::manager()->mask.id)
        {
            mActiveScene->addMask(pPos);
            UBDrawingController::drawingController()->setStylusTool(UBStylusTool::Selector);
        }
        else if (sourceUrl.toString() == UBToolsManager::manager()->aristo.id)
        {
            mActiveScene->addAristo(pPos);
            UBDrawingController::drawingController()->setStylusTool(UBStylusTool::Selector);
        }
        else
        {
            showMessage(tr("Unknown tool type %1").arg(sourceUrl.toString()));
        }
    }
    else if (sourceUrl.toString().contains("edumedia-sciences.com"))
    {
        qDebug() << "accepting url " << sourceUrl.toString() << "as eduMedia content";

        QTemporaryFile eduMediaZipFile("XXXXXX.edumedia");
        if (eduMediaZipFile.open())
        {
            eduMediaZipFile.write(pData);
            eduMediaZipFile.close();

            QString tempDir = UBFileSystemUtils::createTempDir("uniboard-edumedia");

            UBFileSystemUtils::expandZipToDir(eduMediaZipFile, tempDir);

            QDir appDir(tempDir);

            foreach(QString subDirName, appDir.entryList(QDir::AllDirs))
            {
                QDir subDir(tempDir + "/" + subDirName + "/contents");

                foreach(QString fileName, subDir.entryList(QDir::Files))
                {
                    if (fileName.toLower().endsWith(".swf"))
                    {
                        QString swfFile = tempDir + "/" + subDirName + "/contents/" + fileName;

                        QSize size;

                        if (pSize.height() > 0 && pSize.width() > 0)
                            size = pSize;
                        else
                            size = mActiveScene->nominalSize() * .8;

                        QString widgetUrl = UBGraphicsW3CWidgetItem::createNPAPIWrapper(swfFile, "application/x-shockwave-flash", size);

                        if (widgetUrl.length() > 0)
                        {
                            UBGraphicsWidgetItem *widgetItem = mActiveScene->addW3CWidget(QUrl::fromLocalFile(widgetUrl), pPos);

                            widgetItem->setSourceUrl(sourceUrl);

                            UBDrawingController::drawingController()->setStylusTool(UBStylusTool::Selector);

                            return widgetItem;
                        }
                    }
                }
            }
        }
    }
    else if (UBMimeType::Link == itemMimeType)
    {
        QString url;
        QString embedCode;
        QSize size;

        QDomDocument linkDoc;
        linkDoc.setContent(QString(pData));

        QDomElement e = linkDoc.firstChildElement();
        if ("link" == e.tagName().toLower())
            e = e.firstChildElement();

        while(!e.isNull())
        {
            if ("src" == e.tagName().toLower())
                url = e.text();

            if ( "html" == e.tagName().toLower())
                embedCode = e.text();

            if ( "width" == e.tagName().toLower())
                size.setWidth(e.text().toInt());

            if ( "height" == e.tagName().toLower())
                size.setHeight(e.text().toInt());

            e = e.nextSiblingElement();
        }


        addLinkToPage(url, size, pPos, embedCode);
    }
    else if (UBMimeType::Web == itemMimeType){
        addLinkToPage(sourceUrl.toString(),pSize,pPos);
    }
    else if(UBMimeType::Bookmark){
        QFile file(sourceUrl.toLocalFile());
        file.open(QIODevice::ReadOnly);
        addLinkToPage(QString::fromAscii(file.readAll()),QSize(640,480),pPos);
        file.close();
    }
    else
    {
        showMessage(tr("Unknown content type %1").arg(pContentTypeHeader));
        qWarning() << "ignoring mime type" << pContentTypeHeader ;
    }

    return NULL;
}

void UBBoardController::setActiveDocumentScene(int pSceneIndex)
{
    setActiveDocumentScene(selectedDocument(), pSceneIndex);
}

void UBBoardController::setActiveDocumentScene(UBDocumentProxy* pDocumentProxy, const int pSceneIndex, bool forceReload)
{
    saveViewState();
	currentDocument = pDocumentProxy;
    bool documentChange = selectedDocument() != pDocumentProxy;

    int index = pSceneIndex;
    int sceneCount = pDocumentProxy->pageCount();
    if (index >= sceneCount && sceneCount > 0)
        index = sceneCount - 1;

    UBGraphicsScene* targetScene = UBPersistenceManager::persistenceManager()->loadDocumentScene(pDocumentProxy, index);

    bool sceneChange = targetScene != mActiveScene;

    if (targetScene)
    {
        if (mActiveScene) {
            persistCurrentScene();
            freezeW3CWidgets(true);
            ClearUndoStack();
        }

        mActiveScene = targetScene;
        mActiveSceneIndex = index;
        setDocument(pDocumentProxy, forceReload);

        updateSystemScaleFactor();

        mControlView->setScene(mActiveScene);
        mDisplayView->setScene(mActiveScene);
        mActiveScene->setBackgroundZoomFactor(mControlView->transform().m11());
        pDocumentProxy->setDefaultDocumentSize(mActiveScene->nominalSize());
        updatePageSizeState();

        adjustDisplayViews();

        UBSettings::settings()->setDarkBackground(mActiveScene->isDarkBackground());
        UBSettings::settings()->setCrossedBackground(mActiveScene->isCrossedBackground());

        freezeW3CWidgets(false);
    }

    selectionChanged();

    updateBackgroundActionsState(mActiveScene->isDarkBackground(), mActiveScene->isCrossedBackground());
    updateBackgroundState();

    if(documentChange)
    {
        UBGraphicsTextItem::lastUsedTextColor = QColor();
    }


    if (sceneChange)
    {
        emit activeSceneChanged();
        emit pageChanged();
    }
}


void UBBoardController::moveSceneToIndex(int source, int target)
{
    if (selectedDocument())
    {

        persistCurrentScene();

        UBDocumentContainer::movePageToIndex(source, target);

        selectedDocument()->setMetaData(UBSettings::documentUpdatedAt, UBStringUtils::toUtcIsoDateTime(QDateTime::currentDateTime()));
        UBMetadataDcSubsetAdaptor::persist(selectedDocument());
        mMovingSceneIndex = source;
        setActiveDocumentScene(target);
        mMovingSceneIndex = -1;

    }
}

void UBBoardController::ClearUndoStack()
{
// The code has been removed because it leads to a strange error and because the final goal has never been
// reached on tests and sound a little bit strange.
// Strange error: item->scene() crashes the application because item doesn't implement scene() method. I'm
// not able to give all the steps to reproduce this error sistematically but is quite frequent (~ twice per utilisation hours)
// strange goal: if item is on the undocommand, the item->scene() is null and the item is not on the deleted scene item list then
// then it's deleted.

    //    QSet<QGraphicsItem*> uniqueItems;
//    // go through all stack command
//    for(int i = 0; i < UBApplication::undoStack->count(); i++)
//    {

//        UBAbstractUndoCommand *abstractCmd = (UBAbstractUndoCommand*)UBApplication::undoStack->command(i);
//        if(abstractCmd->getType() != UBAbstractUndoCommand::undotype_GRAPHICITEM)
//            continue;

//        UBGraphicsItemUndoCommand *cmd = (UBGraphicsItemUndoCommand*)UBApplication::undoStack->command(i);

//        // go through all added and removed objects, for create list of unique objects
//        // grouped items will be deleted by groups, so we don't need do delete that items.
//        QSetIterator<QGraphicsItem*> itAdded(cmd->GetAddedList());
//        while (itAdded.hasNext())
//        {
//            QGraphicsItem* item = itAdded.next();
//            if( !uniqueItems.contains(item) && !(item->parentItem() && UBGraphicsGroupContainerItem::Type == item->parentItem()->type()))
//                uniqueItems.insert(item);
//        }

//        QSetIterator<QGraphicsItem*> itRemoved(cmd->GetRemovedList());
//        while (itRemoved.hasNext())
//        {
//            QGraphicsItem* item = itRemoved.next();
//            if( !uniqueItems.contains(item) && !(item->parentItem() && UBGraphicsGroupContainerItem::Type == item->parentItem()->type()))
//                uniqueItems.insert(item);
//        }
//    }

//    // go through all unique items, and check, ot on scene, or not.
//    // if not on scene, than item can be deleted

//    QSetIterator<QGraphicsItem*> itUniq(uniqueItems);
//    while (itUniq.hasNext())
//    {
//        QGraphicsItem* item = itUniq.next();
//        UBGraphicsScene *scene = NULL;
//        if (item->scene()) {
//            scene = dynamic_cast<UBGraphicsScene*>(item->scene());
//        }
//        if(!scene)
//        {
//           if (!mActiveScene->deleteItem(item))
//               delete item;
//        }
//    }

    // clear stack, and command list
    UBApplication::undoStack->clear();

}

void UBBoardController::adjustDisplayViews()
{
    if (UBApplication::applicationController)
    {
        UBApplication::applicationController->adjustDisplayView();
        UBApplication::applicationController->adjustPreviousViews(mActiveSceneIndex, selectedDocument());
    }
}


void UBBoardController::changeBackground(bool isDark, bool isCrossed)
{
    bool currentIsDark = mActiveScene->isDarkBackground();
    bool currentIsCrossed = mActiveScene->isCrossedBackground();

    if ((isDark != currentIsDark) || (currentIsCrossed != isCrossed))
    {
        UBSettings::settings()->setDarkBackground(isDark);
        UBSettings::settings()->setCrossedBackground(isCrossed);

        mActiveScene->setBackground(isDark, isCrossed);

        updateBackgroundState();

        emit backgroundChanged();
    }
}

void UBBoardController::boardViewResized(QResizeEvent* event)
{
    Q_UNUSED(event);

    int innerMargin = UBSettings::boardMargin;
    int userHeight = mControlContainer->height() - (2 * innerMargin);

    mMessageWindow->move(innerMargin, innerMargin + userHeight - mMessageWindow->height());
    mMessageWindow->adjustSizeAndPosition();

    UBApplication::applicationController->initViewState(
                mControlView->horizontalScrollBar()->value(),
                mControlView->verticalScrollBar()->value());

    updateSystemScaleFactor();

    mControlView->centerOn(0,0);

    if (mDisplayView)
        mDisplayView->centerOn(0,0);

    mPaletteManager->containerResized();

    UBApplication::boardController->controlView()->scene()->moveMagnifier();

}


void UBBoardController::documentWillBeDeleted(UBDocumentProxy* pProxy)
{
    if (selectedDocument() == pProxy)
    {
        if (!mIsClosing) {
//            setActiveDocumentScene(UBPersistenceManager::persistenceManager()->createDocument());
            mActiveScene = 0;
            mActiveSceneIndex = -1;
//            mActiveScene->deleteLater();
        }
    }
}


void UBBoardController::showMessage(const QString& message, bool showSpinningWheel)
{
    mMessageWindow->showMessage(message, showSpinningWheel);
}


void UBBoardController::hideMessage()
{
    mMessageWindow->hideMessage();
}


void UBBoardController::setDisabled(bool disable)
{
    mMainWindow->boardToolBar->setDisabled(disable);
    mControlView->setDisabled(disable);
}


void UBBoardController::selectionChanged()
{
    updateActionStates();
    emit pageSelectionChanged(activeSceneIndex());
}


void UBBoardController::undoRedoStateChange(bool canUndo)
{
    Q_UNUSED(canUndo);

    mMainWindow->actionUndo->setEnabled(UBApplication::undoStack->canUndo());
    mMainWindow->actionRedo->setEnabled(UBApplication::undoStack->canRedo());

    updateActionStates();
}


void UBBoardController::updateActionStates()
{
    mMainWindow->actionBack->setEnabled(selectedDocument() && (mActiveSceneIndex > 0));
    mMainWindow->actionForward->setEnabled(selectedDocument() && (mActiveSceneIndex < selectedDocument()->pageCount() - 1));
    mMainWindow->actionErase->setEnabled(mActiveScene && !mActiveScene->isEmpty());
}


UBGraphicsScene* UBBoardController::activeScene() const
{
    return mActiveScene;
}


int UBBoardController::activeSceneIndex() const
{
    return mActiveSceneIndex;
}


void UBBoardController::documentSceneChanged(UBDocumentProxy* pDocumentProxy, int pIndex)
{
    Q_UNUSED(pIndex);

    if(selectedDocument() == pDocumentProxy)
    {
        setActiveDocumentScene(mActiveSceneIndex);
    }
}

void UBBoardController::closing()
{
    mIsClosing = true;
    ClearUndoStack();
    lastWindowClosed();
}

void UBBoardController::lastWindowClosed()
{
    if (!mCleanupDone)
    {
        bool teacherGuideModified = false;
        if(UBApplication::boardController->paletteManager()->teacherGuideDockWidget())
            teacherGuideModified = UBApplication::boardController->paletteManager()->teacherGuideDockWidget()->teacherGuideWidget()->isModified();
        if (selectedDocument()->pageCount() == 1 && (!mActiveScene || mActiveScene->isEmpty()) && !teacherGuideModified)
        {
//            UBPersistenceManager::persistenceManager()->deleteDocument(selectedDocument());
        }
        else
        {
            persistCurrentScene();
        }

        UBPersistenceManager::persistenceManager()->purgeEmptyDocuments();

        mCleanupDone = true;
    }
}



void UBBoardController::setColorIndex(int pColorIndex)
{
    UBDrawingController::drawingController()->setColorIndex(pColorIndex);

    if (UBDrawingController::drawingController()->stylusTool() != UBStylusTool::Marker &&
            UBDrawingController::drawingController()->stylusTool() != UBStylusTool::Line &&
            UBDrawingController::drawingController()->stylusTool() != UBStylusTool::Text &&
            UBDrawingController::drawingController()->stylusTool() != UBStylusTool::Selector)
    {
        UBDrawingController::drawingController()->setStylusTool(UBStylusTool::Pen);
    }

    if (UBDrawingController::drawingController()->stylusTool() == UBStylusTool::Pen ||
            UBDrawingController::drawingController()->stylusTool() == UBStylusTool::Line ||
            UBDrawingController::drawingController()->stylusTool() == UBStylusTool::Text ||
            UBDrawingController::drawingController()->stylusTool() == UBStylusTool::Selector)
    {
        mPenColorOnDarkBackground = UBSettings::settings()->penColors(true).at(pColorIndex);
        mPenColorOnLightBackground = UBSettings::settings()->penColors(false).at(pColorIndex);

        if (UBDrawingController::drawingController()->stylusTool() == UBStylusTool::Selector)
        {
            // If we are in mode board, then do that
            if(UBApplication::applicationController->displayMode() == UBApplicationController::Board)
            {
                UBDrawingController::drawingController()->setStylusTool(UBStylusTool::Pen);
                mMainWindow->actionPen->setChecked(true);
            }
        }

        emit penColorChanged();
    }
    else if (UBDrawingController::drawingController()->stylusTool() == UBStylusTool::Marker)
    {
        mMarkerColorOnDarkBackground = UBSettings::settings()->markerColors(true).at(pColorIndex);
        mMarkerColorOnLightBackground = UBSettings::settings()->markerColors(false).at(pColorIndex);
    }
}

void UBBoardController::colorPaletteChanged()
{
    mPenColorOnDarkBackground = UBSettings::settings()->penColor(true);
    mPenColorOnLightBackground = UBSettings::settings()->penColor(false);
    mMarkerColorOnDarkBackground = UBSettings::settings()->markerColor(true);
    mMarkerColorOnLightBackground = UBSettings::settings()->markerColor(false);
}


qreal UBBoardController::currentZoom()
{
    if (mControlView)
        return mControlView->viewportTransform().m11() / mSystemScaleFactor;
    else
        return 1.0;
}

void UBBoardController::removeTool(UBToolWidget* toolWidget)
{
    toolWidget->hide();

    delete toolWidget;
}

void UBBoardController::hide()
{
    UBApplication::mainWindow->actionLibrary->setChecked(false);
}

void UBBoardController::show()
{
    UBApplication::mainWindow->actionLibrary->setChecked(false);
}

void UBBoardController::persistCurrentScene(UBDocumentProxy *pProxy, const bool lightPersist)
{
    if(UBPersistenceManager::persistenceManager()
            && selectedDocument() && mActiveScene && mActiveSceneIndex != mDeletingSceneIndex
            && (mActiveSceneIndex >= 0) && mActiveSceneIndex != mMovingSceneIndex
            && (mActiveScene->isModified() || (UBApplication::boardController->paletteManager()->teacherGuideDockWidget() && UBApplication::boardController->paletteManager()->teacherGuideDockWidget()->teacherGuideWidget()->isModified())))
    {        
        UBPersistenceManager::persistenceManager()->persistDocumentScene(pProxy ? pProxy : selectedDocument(), mActiveScene, mActiveSceneIndex, lightPersist);
        updatePage(mActiveSceneIndex);
    }
}

void UBBoardController::updateSystemScaleFactor()
{
    qreal newScaleFactor = 1.0;

    if (mActiveScene)
    {
        QSize pageNominalSize = mActiveScene->nominalSize();
        //we're going to keep scale factor untouched if the size is custom
        QMap<DocumentSizeRatio::Enum, QSize> sizesMap = UBSettings::settings()->documentSizes;
      //  if(pageNominalSize == sizesMap.value(DocumentSizeRatio::Ratio16_9) || pageNominalSize == sizesMap.value(DocumentSizeRatio::Ratio4_3))
        {
            QSize controlSize = controlViewport();

            qreal hFactor = ((qreal)controlSize.width()) / ((qreal)pageNominalSize.width());
            qreal vFactor = ((qreal)controlSize.height()) / ((qreal)pageNominalSize.height());

            newScaleFactor = qMin(hFactor, vFactor);
        }
    }

    if (mSystemScaleFactor != newScaleFactor)
    {
        mSystemScaleFactor = newScaleFactor;
        emit systemScaleFactorChanged(newScaleFactor);
    }

    UBGraphicsScene::SceneViewState viewState = mActiveScene->viewState();

    QTransform scalingTransform;

    qreal scaleFactor = viewState.zoomFactor * mSystemScaleFactor;
    scalingTransform.scale(scaleFactor, scaleFactor);

    mControlView->setTransform(scalingTransform);
    mControlView->horizontalScrollBar()->setValue(viewState.horizontalPosition);
    mControlView->verticalScrollBar()->setValue(viewState.verticalPostition);
    mActiveScene->setBackgroundZoomFactor(mControlView->transform().m11());}


void UBBoardController::setWidePageSize(bool checked)
{
    Q_UNUSED(checked);
    QSize newSize = UBSettings::settings()->documentSizes.value(DocumentSizeRatio::Ratio16_9);

    if (mActiveScene->nominalSize() != newSize)
    {
        UBPageSizeUndoCommand* uc = new UBPageSizeUndoCommand(mActiveScene, mActiveScene->nominalSize(), newSize);
        UBApplication::undoStack->push(uc);

        setPageSize(newSize);
    }
}


void UBBoardController::setRegularPageSize(bool checked)
{
    Q_UNUSED(checked);
    QSize newSize = UBSettings::settings()->documentSizes.value(DocumentSizeRatio::Ratio4_3);

    if (mActiveScene->nominalSize() != newSize)
    {
        UBPageSizeUndoCommand* uc = new UBPageSizeUndoCommand(mActiveScene, mActiveScene->nominalSize(), newSize);
        UBApplication::undoStack->push(uc);

        setPageSize(newSize);
    }
}


void UBBoardController::setPageSize(QSize newSize)
{
    if (mActiveScene->nominalSize() != newSize)
    {
        mActiveScene->setNominalSize(newSize);

        saveViewState();

        updateSystemScaleFactor();
        updatePageSizeState();
        adjustDisplayViews();
        selectedDocument()->setMetaData(UBSettings::documentUpdatedAt, UBStringUtils::toUtcIsoDateTime(QDateTime::currentDateTime()));

        UBSettings::settings()->pageSize->set(newSize);
    }
}

void UBBoardController::notifyCache(bool visible)
{
    if(visible)
    {
        emit cacheEnabled();
    }
    else
    {
        emit cacheDisabled();
    }
    mCacheWidgetIsEnabled = visible;
}

void UBBoardController::updatePageSizeState()
{
    if (mActiveScene->nominalSize() == UBSettings::settings()->documentSizes.value(DocumentSizeRatio::Ratio16_9))
    {
        mMainWindow->actionWidePageSize->setChecked(true);
    }
    else if(mActiveScene->nominalSize() == UBSettings::settings()->documentSizes.value(DocumentSizeRatio::Ratio4_3))
    {
        mMainWindow->actionRegularPageSize->setChecked(true);
    }
    else
    {
        mMainWindow->actionCustomPageSize->setChecked(true);
    }
}


void UBBoardController::saveViewState()
{
    if (mActiveScene)
    {
        mActiveScene->setViewState(UBGraphicsScene::SceneViewState(currentZoom(),
                                                                   mControlView->horizontalScrollBar()->value(),
                                                                   mControlView->verticalScrollBar()->value()));
    }
}


void UBBoardController::updateBackgroundState()
{
    //adjust background style
    QString newBackgroundStyle;

    if (mActiveScene && mActiveScene->isDarkBackground())
    {
        newBackgroundStyle ="QWidget {background-color: #0E0E0E}";
    }
    else
    {
        newBackgroundStyle ="QWidget {background-color: #F1F1F1}";
    }
}

void UBBoardController::stylusToolChanged(int tool)
{
    if (UBPlatformUtils::hasVirtualKeyboard() && mPaletteManager->mKeyboardPalette)
    {
        UBStylusTool::Enum eTool = (UBStylusTool::Enum)tool;
        if(eTool != UBStylusTool::Selector && eTool != UBStylusTool::Text)
        {
            if(mPaletteManager->mKeyboardPalette->m_isVisible)
                UBApplication::mainWindow->actionVirtualKeyboard->activate(QAction::Trigger);
        }
    }

    updateBackgroundState();
}


QUrl UBBoardController::expandWidgetToTempDir(const QByteArray& pZipedData, const QString& ext)
{
    QUrl widgetUrl;
    QTemporaryFile tmp;

    if (tmp.open())
    {
        tmp.write(pZipedData);
        tmp.flush();
        tmp.close();

        QString tmpDir = UBFileSystemUtils::createTempDir() + "." + ext;

        if (UBFileSystemUtils::expandZipToDir(tmp, tmpDir))
        {
            //Claudio this is a workaround to know it the zip is the widget itself or a zipped widget
            QStringList directoryContent = QDir(tmpDir).entryList(QDir::AllDirs | QDir::NoDotAndDotDot);
            if(directoryContent.count() == 1 && directoryContent.at(0).contains(".wgt"))
                widgetUrl = QUrl::fromLocalFile(tmpDir + "/" + directoryContent.at(0));
            else
                widgetUrl = QUrl::fromLocalFile(tmpDir);
        }
    }

    return widgetUrl;
}


void UBBoardController::grabScene(const QRectF& pSceneRect)
{
    if (mActiveScene)
    {
        QImage image(pSceneRect.width(), pSceneRect.height(), QImage::Format_ARGB32);
        image.fill(Qt::transparent);

        QRectF targetRect(0, 0, pSceneRect.width(), pSceneRect.height());
        QPainter painter(&image);
        painter.setRenderHint(QPainter::SmoothPixmapTransform);
        painter.setRenderHint(QPainter::Antialiasing);

        mActiveScene->setRenderingQuality(UBItem::RenderingQualityHigh);

        mActiveScene->render(&painter, targetRect, pSceneRect);

        mActiveScene->setRenderingQuality(UBItem::RenderingQualityNormal);

        mPaletteManager->addItem(QPixmap::fromImage(image));
        selectedDocument()->setMetaData(UBSettings::documentUpdatedAt, UBStringUtils::toUtcIsoDateTime(QDateTime::currentDateTime()));
    }
}

UBGraphicsMediaItem* UBBoardController::addVideo(const QUrl& pSourceUrl, bool startPlay, const QPointF& pos, bool bUseSource)
{
    QUuid uuid = QUuid::createUuid();
    QUrl concreteUrl = pSourceUrl;

    // media file is not in document folder yet
    if (bUseSource)
    {
        QString destFile;
        bool b = UBPersistenceManager::persistenceManager()->addFileToDocument(selectedDocument(),
                    pSourceUrl.toLocalFile(),
                    UBPersistenceManager::videoDirectory,
                    uuid,
                    destFile);
        if (!b)
        {
            showMessage(tr("Add file operation failed: file copying error"));
            return NULL;
        }
        concreteUrl = QUrl::fromLocalFile(destFile);
    }// else we just use source Url.


    UBGraphicsMediaItem* vi = mActiveScene->addMedia(concreteUrl, startPlay, pos);
    selectedDocument()->setMetaData(UBSettings::documentUpdatedAt, UBStringUtils::toUtcIsoDateTime(QDateTime::currentDateTime()));

    if (vi) {
        vi->setUuid(uuid);
        vi->setSourceUrl(pSourceUrl);
    }

    return vi;

}

UBGraphicsMediaItem* UBBoardController::addAudio(const QUrl& pSourceUrl, bool startPlay, const QPointF& pos, bool bUseSource)
{
    QUuid uuid = QUuid::createUuid();
    QUrl concreteUrl = pSourceUrl;

    // media file is not in document folder yet
    if (bUseSource)
    {
        QString destFile;
        bool b = UBPersistenceManager::persistenceManager()->addFileToDocument(selectedDocument(),
            pSourceUrl.toLocalFile(),
            UBPersistenceManager::audioDirectory,
            uuid,
            destFile);
        if (!b)
        {
            showMessage(tr("Add file operation failed: file copying error"));
            return NULL;
        }
        concreteUrl = QUrl::fromLocalFile(destFile);
    }// else we just use source Url.

    UBGraphicsMediaItem* ai = mActiveScene->addMedia(concreteUrl, startPlay, pos);
    selectedDocument()->setMetaData(UBSettings::documentUpdatedAt, UBStringUtils::toUtcIsoDateTime(QDateTime::currentDateTime()));

    if (ai){
        ai->setUuid(uuid);
        ai->setSourceUrl(pSourceUrl);
    }

    return ai;

}

UBGraphicsWidgetItem *UBBoardController::addW3cWidget(const QUrl &pUrl, const QPointF &pos)
{
    UBGraphicsWidgetItem* w3cWidgetItem = 0;

    QUuid uuid = QUuid::createUuid();

    QString destPath;
    if (!UBPersistenceManager::persistenceManager()->addGraphicsWidgetToDocument(selectedDocument(), pUrl.toLocalFile(), uuid, destPath))
        return NULL;
    QUrl newUrl = QUrl::fromLocalFile(destPath);

    w3cWidgetItem = mActiveScene->addW3CWidget(newUrl, pos);

    if (w3cWidgetItem) {
        w3cWidgetItem->setUuid(uuid);
        w3cWidgetItem->setOwnFolder(newUrl);
        w3cWidgetItem->setSourceUrl(pUrl);

        QString struuid = UBStringUtils::toCanonicalUuid(uuid);
        QString snapshotPath = selectedDocument()->persistencePath() +  "/" + UBPersistenceManager::widgetDirectory + "/" + struuid + ".png";
        w3cWidgetItem->setSnapshotPath(QUrl::fromLocalFile(snapshotPath));
/*        UBGraphicsWidgetItem *tmpItem = dynamic_cast<UBGraphicsWidgetItem*>(w3cWidgetItem);
        if (tmpItem && tmpItem->scene())
           tmpItem->takeSnapshot().save(snapshotPath, "PNG");
*/
    }

    return w3cWidgetItem;
}

void UBBoardController::cut()
{
    //---------------------------------------------------------//

    QList<QGraphicsItem*> selectedItems;
    foreach(QGraphicsItem* gi, mActiveScene->selectedItems())
        selectedItems << gi;

    //---------------------------------------------------------//

    QList<UBItem*> selected;
    foreach(QGraphicsItem* gi, selectedItems)
    {
        gi->setSelected(false);

        UBItem* ubItem = dynamic_cast<UBItem*>(gi);
        UBGraphicsItem *ubGi =  dynamic_cast<UBGraphicsItem*>(gi);

        if (ubItem && ubGi && !mActiveScene->tools().contains(gi))
        {
            selected << ubItem->deepCopy();
            ubGi->remove();
        }
    }

    //---------------------------------------------------------//

    if (selected.size() > 0)
    {
        QClipboard *clipboard = QApplication::clipboard();

        UBMimeDataGraphicsItem*  mimeGi = new UBMimeDataGraphicsItem(selected);

        mimeGi->setData(UBApplication::mimeTypeUniboardPageItem, QByteArray());
        clipboard->setMimeData(mimeGi);

        selectedDocument()->setMetaData(UBSettings::documentUpdatedAt, UBStringUtils::toUtcIsoDateTime(QDateTime::currentDateTime()));
    }

    //---------------------------------------------------------//
}


void UBBoardController::copy()
{
    QList<UBItem*> selected;

    foreach(QGraphicsItem* gi, mActiveScene->selectedItems())
    {
        UBItem* ubItem = dynamic_cast<UBItem*>(gi);

        if (ubItem && !mActiveScene->tools().contains(gi))
            selected << ubItem;
    }

    if (selected.size() > 0)
    {
        QClipboard *clipboard = QApplication::clipboard();

        UBMimeDataGraphicsItem*  mimeGi = new UBMimeDataGraphicsItem(selected);

        mimeGi->setData(UBApplication::mimeTypeUniboardPageItem, QByteArray());
        clipboard->setMimeData(mimeGi);

    }
}


void UBBoardController::paste()
{
    QClipboard *clipboard = QApplication::clipboard();
    QPointF pos(0, 0);
    processMimeData(clipboard->mimeData(), pos);

    selectedDocument()->setMetaData(UBSettings::documentUpdatedAt, UBStringUtils::toUtcIsoDateTime(QDateTime::currentDateTime()));
}


void UBBoardController::processMimeData(const QMimeData* pMimeData, const QPointF& pPos)
{
    if (pMimeData->hasFormat(UBApplication::mimeTypeUniboardPage))
    {
        const UBMimeData* mimeData = qobject_cast <const UBMimeData*>(pMimeData);

        if (mimeData)
        {
            int previousActiveSceneIndex = activeSceneIndex();
            int previousPageCount = selectedDocument()->pageCount();

            foreach (UBMimeDataItem sourceItem, mimeData->items())
                addScene(sourceItem.documentProxy(), sourceItem.sceneIndex(), true);

            if (selectedDocument()->pageCount() < previousPageCount + mimeData->items().count())
                setActiveDocumentScene(previousActiveSceneIndex);
            else
                setActiveDocumentScene(previousActiveSceneIndex + 1);

            return;
        }
    }

    if (pMimeData->hasFormat(UBApplication::mimeTypeUniboardPageItem))
    {
        const UBMimeDataGraphicsItem* mimeData = qobject_cast <const UBMimeDataGraphicsItem*>(pMimeData);

        if (mimeData)
        {
            foreach(UBItem* item, mimeData->items())
            {
                QGraphicsItem* pItem = dynamic_cast<QGraphicsItem*>(item);
                if(NULL != pItem){
                    duplicateItem(item);
                }
            }

            return;
        }
    }

    if(pMimeData->hasHtml())
    {
        QString qsHtml = pMimeData->html();
        QString url = UBApplication::urlFromHtml(qsHtml);

        if("" != url)
        {
            downloadURL(url, QString(), pPos);
            return;
        }
    }

    if (pMimeData->hasUrls())
    {
        QList<QUrl> urls = pMimeData->urls();

        int index = 0;

        const UBFeaturesMimeData *internalMimeData = qobject_cast<const UBFeaturesMimeData*>(pMimeData);
        bool internalData = false;
        if (internalMimeData) {
            internalData = true;
        }

        foreach(const QUrl url, urls){
            QPointF pos(pPos + QPointF(index * 15, index * 15));

            downloadURL(url, QString(), pos, QSize(), false,  internalData);
            index++;
        }

        return;
    }

    if (pMimeData->hasImage())
    {
        QImage img = qvariant_cast<QImage> (pMimeData->imageData());
        QPixmap pix = QPixmap::fromImage(img);

        // validate that the image is really an image, webkit does not fill properly the image mime data
        if (pix.width() != 0 && pix.height() != 0)
        {
            mActiveScene->addPixmap(pix, NULL, pPos, 1.);
            return;
        }
    }

    if (pMimeData->hasText())
    {
        if("" != pMimeData->text()){
            // Sometimes, it is possible to have an URL as text. we check here if it is the case
            QString qsTmp = pMimeData->text().remove(QRegExp("[\\0]"));
            if(qsTmp.startsWith("http")){
                downloadURL(QUrl(qsTmp), QString(), pPos);
            }
            else{
                mActiveScene->addTextHtml(pMimeData->html(), pPos);
            }
        }
        else{
#ifdef Q_WS_MACX
                //  With Safari, in 95% of the drops, the mime datas are hidden in Apple Web Archive pasteboard type.
                //  This is due to the way Safari is working so we have to dig into the pasteboard in order to retrieve
                //  the data.
                QString qsUrl = UBPlatformUtils::urlFromClipboard();
                if("" != qsUrl){
                    // We finally got the url of the dropped ressource! Let's import it!
                    downloadURL(qsUrl, qsUrl, pPos);
                    return;
                }
#endif
        }
    }
}


void UBBoardController::togglePodcast(bool checked)
{
    if (UBPodcastController::instance())
        UBPodcastController::instance()->toggleRecordingPalette(checked);
}

void UBBoardController::moveGraphicsWidgetToControlView(UBGraphicsWidgetItem* graphicsWidget)
{
    mActiveScene->setURStackEnable(false);
    UBGraphicsItem *toolW3C = duplicateItem(dynamic_cast<UBItem *>(graphicsWidget));
    UBGraphicsWidgetItem *copyedGraphicsWidget = NULL;

    if (UBGraphicsWidgetItem::Type == toolW3C->type())
        copyedGraphicsWidget = static_cast<UBGraphicsWidgetItem *>(toolW3C);

    UBToolWidget *toolWidget = new UBToolWidget(copyedGraphicsWidget, mControlView);

    graphicsWidget->remove(false);
    mActiveScene->addItemToDeletion(graphicsWidget);

    mActiveScene->setURStackEnable(true);

    QPoint controlViewPos = mControlView->mapFromScene(graphicsWidget->sceneBoundingRect().center());
    toolWidget->centerOn(mControlView->mapTo(mControlContainer, controlViewPos));
    toolWidget->show();
}


void UBBoardController::moveToolWidgetToScene(UBToolWidget* toolWidget)
{
    UBGraphicsWidgetItem *widgetToScene = toolWidget->toolWidget();

    widgetToScene->resetTransform();

    QPoint mainWindowCenter = toolWidget->mapTo(mMainWindow, QPoint(toolWidget->width(), toolWidget->height()) / 2);
    QPoint controlViewCenter = mControlView->mapFrom(mMainWindow, mainWindowCenter);
    QPointF scenePos = mControlView->mapToScene(controlViewCenter);

    mActiveScene->addGraphicsWidget(widgetToScene, scenePos);

    toolWidget->remove();
}


void UBBoardController::updateBackgroundActionsState(bool isDark, bool isCrossed)
{
    if (isDark && !isCrossed)
        mMainWindow->actionPlainDarkBackground->setChecked(true);
    else if (isDark && isCrossed)
        mMainWindow->actionCrossedDarkBackground->setChecked(true);
    else if (!isDark && isCrossed)
        mMainWindow->actionCrossedLightBackground->setChecked(true);
    else
        mMainWindow->actionPlainLightBackground->setChecked(true);
}


void UBBoardController::addItem()
{
    QString defaultPath = UBSettings::settings()->lastImportToLibraryPath->get().toString();

    QString extensions;
    foreach(QString ext, UBSettings::imageFileExtensions)
    {
        extensions += " *.";
        extensions += ext;
    }

    QString filename = QFileDialog::getOpenFileName(mControlContainer, tr("Add Item"),
                                                    defaultPath,
                                                    tr("All Supported (%1)").arg(extensions), NULL, QFileDialog::DontUseNativeDialog);

    if (filename.length() > 0)
    {
        mPaletteManager->addItem(QUrl::fromLocalFile(filename));
        QFileInfo source(filename);
        UBSettings::settings()->lastImportToLibraryPath->set(QVariant(source.absolutePath()));
    }
}

void UBBoardController::importPage()
{
    int pageCount = selectedDocument()->pageCount();
    if (UBApplication::documentController->addFileToDocument(selectedDocument()))
    {
        setActiveDocumentScene(selectedDocument(), pageCount, true);
    }
}

void UBBoardController::notifyPageChanged()
{
    emit pageChanged();
}

void UBBoardController::onDownloadModalFinished()
{

}

void UBBoardController::displayMetaData(QMap<QString, QString> metadatas)
{
    emit displayMetadata(metadatas);
}

void UBBoardController::freezeW3CWidgets(bool freeze)
{
    if (mActiveSceneIndex >= 0)
    {
        QList<QGraphicsItem *> list = UBApplication::boardController->activeScene()->getFastAccessItems();
        foreach(QGraphicsItem *item, list)
        {
            freezeW3CWidget(item, freeze);
        }
    }
}

void UBBoardController::freezeW3CWidget(QGraphicsItem *item, bool freeze)
{
    if(item->type() == UBGraphicsW3CWidgetItem::Type)
    {
        UBGraphicsW3CWidgetItem* item_casted = dynamic_cast<UBGraphicsW3CWidgetItem*>(item);
        if (0 == item_casted)
            return;

        if (freeze) {
            item_casted->load(QUrl(UBGraphicsW3CWidgetItem::freezedWidgetFilePath()));
        } else
            item_casted->loadMainHtml();
    }
}
