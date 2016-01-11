/********************************************************************************
** Form generated from reading UI file 'mainWindow.ui'
**
** Created: Mon 14. Dec 16:01:33 2015
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionStylus;
    QAction *actionBackgrounds;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionBack;
    QAction *actionForward;
    QAction *actionDocument;
    QAction *actionWeb;
    QAction *actionLineSmall;
    QAction *actionLineMedium;
    QAction *actionLineLarge;
    QAction *actionQuit;
    QAction *actionRestart;
    QAction *actionEraserSmall;
    QAction *actionEraserMedium;
    QAction *actionEraserLarge;
    QAction *actionColor0;
    QAction *actionColor1;
    QAction *actionColor2;
    QAction *actionColor3;
    QAction *actionWebBack;
    QAction *actionWebForward;
    QAction *actionWebReload;
    QAction *actionHome;
    QAction *actionBookmarks;
    QAction *actionAddBookmark;
    QAction *actionBoard;
    QAction *actionErase;
    QAction *actionPreferences;
    QAction *actionLibrary;
    QAction *actionMenu;
    QAction *actionDesktop;
    QAction *actionWebBigger;
    QAction *actionWebSmaller;
    QAction *actionNewFolder;
    QAction *actionNewDocument;
    QAction *actionImport;
    QAction *actionExport;
    QAction *actionOpen;
    QAction *actionDuplicate;
    QAction *actionDelete;
    QAction *actionAddToWorkingDocument;
    QAction *actionDocumentAdd;
    QAction *actionRename;
    QAction *actionDocumentTools;
    QAction *actionWebTools;
    QAction *actionMultiScreen;
    QAction *actionWidePageSize;
    QAction *actionRegularPageSize;
    QAction *actionCustomPageSize;
    QAction *actionStopLoading;
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionSleep;
    QAction *actionVirtualKeyboard;
    QAction *actionPlainLightBackground;
    QAction *actionCrossedLightBackground;
    QAction *actionPlainDarkBackground;
    QAction *actionCrossedDarkBackground;
    QAction *actionPodcast;
    QAction *actionPodcastRecord;
    QAction *actionEraseItems;
    QAction *actionEraseAnnotations;
    QAction *actionClearPage;
    QAction *actionAdd;
    QAction *actionPen;
    QAction *actionEraser;
    QAction *actionMarker;
    QAction *actionSelector;
    QAction *actionHand;
    QAction *actionZoomIn;
    QAction *actionZoomOut;
    QAction *actionPointer;
    QAction *actionLine;
    QAction *actionText;
    QAction *actionCapture;
    QAction *actionAddItemToCurrentPage;
    QAction *actionAddItemToNewPage;
    QAction *actionAddItemToLibrary;
    QAction *actionPages;
    QAction *actionNewPage;
    QAction *actionDuplicatePage;
    QAction *actionImportPage;
    QAction *actionPodcastPause;
    QAction *actionPodcastConfig;
    QAction *actionWebTrap;
    QAction *actionWebCustomCapture;
    QAction *actionWebWindowCapture;
    QAction *actionWebShowHideOnDisplay;
    QAction *actionEraseDesktopAnnotations;
    QAction *actionEduMedia;
    QAction *actionTutorial;
    QAction *actionCheckUpdate;
    QAction *actionSankoreEditor;
    QAction *actionHideApplication;
    QAction *actionImportUniboardDocuments;
    QAction *actionGroupItems;
    QAction *actionPlay;
    QAction *actionEraseBackground;
    QAction *actionBookmark;
    QAction *actionWebTrapContent;
    QAction *actionWebTrapToLibrary;
    QAction *actionWebTrapToCurrentPage;
    QAction *actionWebTrapLinkToLibrary;
    QAction *actionWebTrapLinkToPage;
    QWidget *centralwidget;
    QToolBar *boardToolBar;
    QToolBar *webToolBar;
    QToolBar *documentToolBar;
    QToolBar *tutorialToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1342, 334);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/uniboard.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setIconSize(QSize(32, 32));
        MainWindow->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        MainWindow->setUnifiedTitleAndToolBarOnMac(false);
        actionStylus = new QAction(MainWindow);
        actionStylus->setObjectName(QString::fromUtf8("actionStylus"));
        actionStylus->setCheckable(true);
        actionStylus->setChecked(true);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/toolbar/stylus.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionStylus->setIcon(icon1);
        actionBackgrounds = new QAction(MainWindow);
        actionBackgrounds->setObjectName(QString::fromUtf8("actionBackgrounds"));
        actionBackgrounds->setCheckable(true);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/toolbar/background.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBackgrounds->setIcon(icon2);
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/toolbar/undoOn.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUndo->setIcon(icon3);
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/toolbar/redoOn.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRedo->setIcon(icon4);
        actionBack = new QAction(MainWindow);
        actionBack->setObjectName(QString::fromUtf8("actionBack"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/toolbar/previousPageOn.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBack->setIcon(icon5);
        actionForward = new QAction(MainWindow);
        actionForward->setObjectName(QString::fromUtf8("actionForward"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/toolbar/nextPageOn.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionForward->setIcon(icon6);
        actionDocument = new QAction(MainWindow);
        actionDocument->setObjectName(QString::fromUtf8("actionDocument"));
        actionDocument->setCheckable(false);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/toolbar/documents.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDocument->setIcon(icon7);
        actionWeb = new QAction(MainWindow);
        actionWeb->setObjectName(QString::fromUtf8("actionWeb"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/toolbar/web.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionWeb->setIcon(icon8);
        actionLineSmall = new QAction(MainWindow);
        actionLineSmall->setObjectName(QString::fromUtf8("actionLineSmall"));
        actionLineSmall->setCheckable(true);
        actionLineSmall->setChecked(true);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/toolbar/smallPen.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLineSmall->setIcon(icon9);
        actionLineMedium = new QAction(MainWindow);
        actionLineMedium->setObjectName(QString::fromUtf8("actionLineMedium"));
        actionLineMedium->setCheckable(true);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/toolbar/mediumPen.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLineMedium->setIcon(icon10);
        actionLineLarge = new QAction(MainWindow);
        actionLineLarge->setObjectName(QString::fromUtf8("actionLineLarge"));
        actionLineLarge->setCheckable(true);
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/images/toolbar/largePen.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLineLarge->setIcon(icon11);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/images/toolbar/quitOn.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuit->setIcon(icon12);
        actionQuit->setShortcutContext(Qt::WindowShortcut);
        actionQuit->setMenuRole(QAction::NoRole);
        actionRestart = new QAction(MainWindow);
        actionRestart->setObjectName(QString::fromUtf8("actionRestart"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/images/toolbar/restart.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRestart->setIcon(icon13);
        actionEraserSmall = new QAction(MainWindow);
        actionEraserSmall->setObjectName(QString::fromUtf8("actionEraserSmall"));
        actionEraserSmall->setCheckable(true);
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/images/toolbar/smallEraser.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEraserSmall->setIcon(icon14);
        actionEraserMedium = new QAction(MainWindow);
        actionEraserMedium->setObjectName(QString::fromUtf8("actionEraserMedium"));
        actionEraserMedium->setCheckable(true);
        actionEraserMedium->setChecked(true);
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/images/toolbar/mediumEraser.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEraserMedium->setIcon(icon15);
        actionEraserLarge = new QAction(MainWindow);
        actionEraserLarge->setObjectName(QString::fromUtf8("actionEraserLarge"));
        actionEraserLarge->setCheckable(true);
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/images/toolbar/largeEraser.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEraserLarge->setIcon(icon16);
        actionColor0 = new QAction(MainWindow);
        actionColor0->setObjectName(QString::fromUtf8("actionColor0"));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/images/toolbar/color.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionColor0->setIcon(icon17);
        actionColor1 = new QAction(MainWindow);
        actionColor1->setObjectName(QString::fromUtf8("actionColor1"));
        actionColor1->setIcon(icon17);
        actionColor2 = new QAction(MainWindow);
        actionColor2->setObjectName(QString::fromUtf8("actionColor2"));
        actionColor2->setIcon(icon17);
        actionColor3 = new QAction(MainWindow);
        actionColor3->setObjectName(QString::fromUtf8("actionColor3"));
        actionColor3->setIcon(icon17);
        actionWebBack = new QAction(MainWindow);
        actionWebBack->setObjectName(QString::fromUtf8("actionWebBack"));
        actionWebBack->setIcon(icon5);
        actionWebForward = new QAction(MainWindow);
        actionWebForward->setObjectName(QString::fromUtf8("actionWebForward"));
        actionWebForward->setIcon(icon6);
        actionWebReload = new QAction(MainWindow);
        actionWebReload->setObjectName(QString::fromUtf8("actionWebReload"));
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/images/toolbar/reload.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionWebReload->setIcon(icon18);
        actionHome = new QAction(MainWindow);
        actionHome->setObjectName(QString::fromUtf8("actionHome"));
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/images/toolbar/home.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionHome->setIcon(icon19);
        actionBookmarks = new QAction(MainWindow);
        actionBookmarks->setObjectName(QString::fromUtf8("actionBookmarks"));
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/images/toolbar/bookmarks.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBookmarks->setIcon(icon20);
        actionAddBookmark = new QAction(MainWindow);
        actionAddBookmark->setObjectName(QString::fromUtf8("actionAddBookmark"));
        QIcon icon21;
        icon21.addFile(QString::fromUtf8(":/images/toolbar/addBookmark.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAddBookmark->setIcon(icon21);
        actionBoard = new QAction(MainWindow);
        actionBoard->setObjectName(QString::fromUtf8("actionBoard"));
        QIcon icon22;
        icon22.addFile(QString::fromUtf8(":/images/toolbar/board.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBoard->setIcon(icon22);
        actionErase = new QAction(MainWindow);
        actionErase->setObjectName(QString::fromUtf8("actionErase"));
        actionErase->setCheckable(true);
        QIcon icon23;
        icon23.addFile(QString::fromUtf8(":/images/toolbar/clearPage.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionErase->setIcon(icon23);
        actionPreferences = new QAction(MainWindow);
        actionPreferences->setObjectName(QString::fromUtf8("actionPreferences"));
        QIcon icon24;
        icon24.addFile(QString::fromUtf8(":/images/toolbar/settings.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPreferences->setIcon(icon24);
        actionLibrary = new QAction(MainWindow);
        actionLibrary->setObjectName(QString::fromUtf8("actionLibrary"));
        actionLibrary->setCheckable(true);
        QIcon icon25;
        icon25.addFile(QString::fromUtf8(":/images/toolbar/library.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLibrary->setIcon(icon25);
        actionMenu = new QAction(MainWindow);
        actionMenu->setObjectName(QString::fromUtf8("actionMenu"));
        QIcon icon26;
        icon26.addFile(QString::fromUtf8(":/images/toolbar/menu.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionMenu->setIcon(icon26);
        actionDesktop = new QAction(MainWindow);
        actionDesktop->setObjectName(QString::fromUtf8("actionDesktop"));
        QIcon icon27;
        icon27.addFile(QString::fromUtf8(":/images/toolbar/display.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDesktop->setIcon(icon27);
        actionWebBigger = new QAction(MainWindow);
        actionWebBigger->setObjectName(QString::fromUtf8("actionWebBigger"));
        QIcon icon28;
        icon28.addFile(QString::fromUtf8(":/images/stylusPalette/zoomIn.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionWebBigger->setIcon(icon28);
        actionWebSmaller = new QAction(MainWindow);
        actionWebSmaller->setObjectName(QString::fromUtf8("actionWebSmaller"));
        QIcon icon29;
        icon29.addFile(QString::fromUtf8(":/images/stylusPalette/zoomOut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionWebSmaller->setIcon(icon29);
        actionNewFolder = new QAction(MainWindow);
        actionNewFolder->setObjectName(QString::fromUtf8("actionNewFolder"));
        QIcon icon30;
        icon30.addFile(QString::fromUtf8(":/images/toolbar/newFolder.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNewFolder->setIcon(icon30);
        actionNewDocument = new QAction(MainWindow);
        actionNewDocument->setObjectName(QString::fromUtf8("actionNewDocument"));
        QIcon icon31;
        icon31.addFile(QString::fromUtf8(":/images/toolbar/newDocument.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNewDocument->setIcon(icon31);
        actionImport = new QAction(MainWindow);
        actionImport->setObjectName(QString::fromUtf8("actionImport"));
        QIcon icon32;
        icon32.addFile(QString::fromUtf8(":/images/toolbar/import.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionImport->setIcon(icon32);
        actionExport = new QAction(MainWindow);
        actionExport->setObjectName(QString::fromUtf8("actionExport"));
        QIcon icon33;
        icon33.addFile(QString::fromUtf8(":/images/toolbar/export.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExport->setIcon(icon33);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon34;
        icon34.addFile(QString::fromUtf8(":/images/toolbar/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon34);
        actionDuplicate = new QAction(MainWindow);
        actionDuplicate->setObjectName(QString::fromUtf8("actionDuplicate"));
        QIcon icon35;
        icon35.addFile(QString::fromUtf8(":/images/toolbar/duplicate.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDuplicate->setIcon(icon35);
        actionDelete = new QAction(MainWindow);
        actionDelete->setObjectName(QString::fromUtf8("actionDelete"));
        QIcon icon36;
        icon36.addFile(QString::fromUtf8(":/images/toolbar/deleteDocument.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDelete->setIcon(icon36);
        actionAddToWorkingDocument = new QAction(MainWindow);
        actionAddToWorkingDocument->setObjectName(QString::fromUtf8("actionAddToWorkingDocument"));
        QIcon icon37;
        icon37.addFile(QString::fromUtf8(":/images/toolbar/addToWorkingDoc.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAddToWorkingDocument->setIcon(icon37);
        actionDocumentAdd = new QAction(MainWindow);
        actionDocumentAdd->setObjectName(QString::fromUtf8("actionDocumentAdd"));
        QIcon icon38;
        icon38.addFile(QString::fromUtf8(":/images/toolbar/addToPage.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDocumentAdd->setIcon(icon38);
        actionRename = new QAction(MainWindow);
        actionRename->setObjectName(QString::fromUtf8("actionRename"));
        QIcon icon39;
        icon39.addFile(QString::fromUtf8(":/images/toolbar/rename.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRename->setIcon(icon39);
        actionRename->setMenuRole(QAction::TextHeuristicRole);
        actionDocumentTools = new QAction(MainWindow);
        actionDocumentTools->setObjectName(QString::fromUtf8("actionDocumentTools"));
        QIcon icon40;
        icon40.addFile(QString::fromUtf8(":/images/toolbar/tools.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDocumentTools->setIcon(icon40);
        actionWebTools = new QAction(MainWindow);
        actionWebTools->setObjectName(QString::fromUtf8("actionWebTools"));
        actionWebTools->setCheckable(true);
        actionWebTools->setIcon(icon40);
        actionMultiScreen = new QAction(MainWindow);
        actionMultiScreen->setObjectName(QString::fromUtf8("actionMultiScreen"));
        actionMultiScreen->setCheckable(true);
        actionMultiScreen->setChecked(true);
        actionMultiScreen->setIcon(icon27);
        actionWidePageSize = new QAction(MainWindow);
        actionWidePageSize->setObjectName(QString::fromUtf8("actionWidePageSize"));
        actionWidePageSize->setCheckable(true);
        actionWidePageSize->setIcon(icon38);
        actionWidePageSize->setIconVisibleInMenu(false);
        actionRegularPageSize = new QAction(MainWindow);
        actionRegularPageSize->setObjectName(QString::fromUtf8("actionRegularPageSize"));
        actionRegularPageSize->setCheckable(true);
        actionRegularPageSize->setIcon(icon38);
        actionRegularPageSize->setIconVisibleInMenu(false);
        actionCustomPageSize = new QAction(MainWindow);
        actionCustomPageSize->setObjectName(QString::fromUtf8("actionCustomPageSize"));
        actionCustomPageSize->setCheckable(true);
        actionCustomPageSize->setEnabled(false);
        actionCustomPageSize->setIcon(icon38);
        actionCustomPageSize->setIconVisibleInMenu(false);
        actionStopLoading = new QAction(MainWindow);
        actionStopLoading->setObjectName(QString::fromUtf8("actionStopLoading"));
        actionStopLoading->setIcon(icon36);
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        QIcon icon41;
        icon41.addFile(QString::fromUtf8(":/images/toolbar/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon41);
        actionCut->setShortcutContext(Qt::ApplicationShortcut);
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        QIcon icon42;
        icon42.addFile(QString::fromUtf8(":/images/toolbar/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon42);
        actionCopy->setShortcutContext(Qt::ApplicationShortcut);
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        QIcon icon43;
        icon43.addFile(QString::fromUtf8(":/images/toolbar/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon43);
        actionPaste->setShortcutContext(Qt::ApplicationShortcut);
        actionPaste->setMenuRole(QAction::TextHeuristicRole);
        actionSleep = new QAction(MainWindow);
        actionSleep->setObjectName(QString::fromUtf8("actionSleep"));
        QIcon icon44;
        icon44.addFile(QString::fromUtf8(":/images/extraPalette/blackout.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon44.addFile(QString::fromUtf8(":/images/extraPalette/blackoutOn.png"), QSize(), QIcon::Normal, QIcon::On);
        actionSleep->setIcon(icon44);
        actionVirtualKeyboard = new QAction(MainWindow);
        actionVirtualKeyboard->setObjectName(QString::fromUtf8("actionVirtualKeyboard"));
        actionVirtualKeyboard->setCheckable(true);
        QIcon icon45;
        icon45.addFile(QString::fromUtf8(":/images/extraPalette/keyboard.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon45.addFile(QString::fromUtf8(":/images/extraPalette/keyboardOn.png"), QSize(), QIcon::Normal, QIcon::On);
        actionVirtualKeyboard->setIcon(icon45);
        actionPlainLightBackground = new QAction(MainWindow);
        actionPlainLightBackground->setObjectName(QString::fromUtf8("actionPlainLightBackground"));
        actionPlainLightBackground->setCheckable(true);
        QIcon icon46;
        icon46.addFile(QString::fromUtf8(":/images/backgroundPalette/background1.svg"), QSize(), QIcon::Normal, QIcon::Off);
        icon46.addFile(QString::fromUtf8(":/images/backgroundPalette/background1On.svg"), QSize(), QIcon::Normal, QIcon::On);
        actionPlainLightBackground->setIcon(icon46);
        actionCrossedLightBackground = new QAction(MainWindow);
        actionCrossedLightBackground->setObjectName(QString::fromUtf8("actionCrossedLightBackground"));
        actionCrossedLightBackground->setCheckable(true);
        QIcon icon47;
        icon47.addFile(QString::fromUtf8(":/images/backgroundPalette/background2.svg"), QSize(), QIcon::Normal, QIcon::Off);
        icon47.addFile(QString::fromUtf8(":/images/backgroundPalette/background2On.svg"), QSize(), QIcon::Normal, QIcon::On);
        actionCrossedLightBackground->setIcon(icon47);
        actionPlainDarkBackground = new QAction(MainWindow);
        actionPlainDarkBackground->setObjectName(QString::fromUtf8("actionPlainDarkBackground"));
        actionPlainDarkBackground->setCheckable(true);
        QIcon icon48;
        icon48.addFile(QString::fromUtf8(":/images/backgroundPalette/background3.svg"), QSize(), QIcon::Normal, QIcon::Off);
        icon48.addFile(QString::fromUtf8(":/images/backgroundPalette/background3On.svg"), QSize(), QIcon::Normal, QIcon::On);
        actionPlainDarkBackground->setIcon(icon48);
        actionCrossedDarkBackground = new QAction(MainWindow);
        actionCrossedDarkBackground->setObjectName(QString::fromUtf8("actionCrossedDarkBackground"));
        actionCrossedDarkBackground->setCheckable(true);
        QIcon icon49;
        icon49.addFile(QString::fromUtf8(":/images/backgroundPalette/background4.svg"), QSize(), QIcon::Normal, QIcon::Off);
        icon49.addFile(QString::fromUtf8(":/images/backgroundPalette/background4On.svg"), QSize(), QIcon::Normal, QIcon::On);
        actionCrossedDarkBackground->setIcon(icon49);
        actionPodcast = new QAction(MainWindow);
        actionPodcast->setObjectName(QString::fromUtf8("actionPodcast"));
        actionPodcast->setCheckable(true);
        QIcon icon50;
        icon50.addFile(QString::fromUtf8(":/images/toolbar/record.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPodcast->setIcon(icon50);
        actionPodcastRecord = new QAction(MainWindow);
        actionPodcastRecord->setObjectName(QString::fromUtf8("actionPodcastRecord"));
        actionPodcastRecord->setCheckable(true);
        QIcon icon51;
        icon51.addFile(QString::fromUtf8(":/images/toolbar/record.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon51.addFile(QString::fromUtf8(":/images/toolbar/stop.png"), QSize(), QIcon::Normal, QIcon::On);
        actionPodcastRecord->setIcon(icon51);
        actionEraseItems = new QAction(MainWindow);
        actionEraseItems->setObjectName(QString::fromUtf8("actionEraseItems"));
        QIcon icon52;
        icon52.addFile(QString::fromUtf8(":/images/erasePalette/eraseItem.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionEraseItems->setIcon(icon52);
        actionEraseAnnotations = new QAction(MainWindow);
        actionEraseAnnotations->setObjectName(QString::fromUtf8("actionEraseAnnotations"));
        QIcon icon53;
        icon53.addFile(QString::fromUtf8(":/images/erasePalette/eraseAnnotation.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionEraseAnnotations->setIcon(icon53);
        actionClearPage = new QAction(MainWindow);
        actionClearPage->setObjectName(QString::fromUtf8("actionClearPage"));
        QIcon icon54;
        icon54.addFile(QString::fromUtf8(":/images/erasePalette/eraseAll.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionClearPage->setIcon(icon54);
        actionAdd = new QAction(MainWindow);
        actionAdd->setObjectName(QString::fromUtf8("actionAdd"));
        actionAdd->setIcon(icon38);
        actionPen = new QAction(MainWindow);
        actionPen->setObjectName(QString::fromUtf8("actionPen"));
        actionPen->setCheckable(true);
        actionPen->setChecked(true);
        QIcon icon55;
        icon55.addFile(QString::fromUtf8(":/images/stylusPalette/pen.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon55.addFile(QString::fromUtf8(":/images/stylusPalette/penOn.png"), QSize(), QIcon::Normal, QIcon::On);
        actionPen->setIcon(icon55);
        actionEraser = new QAction(MainWindow);
        actionEraser->setObjectName(QString::fromUtf8("actionEraser"));
        actionEraser->setCheckable(true);
        QIcon icon56;
        icon56.addFile(QString::fromUtf8(":/images/stylusPalette/eraser.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon56.addFile(QString::fromUtf8(":/images/stylusPalette/eraserOn.png"), QSize(), QIcon::Normal, QIcon::On);
        actionEraser->setIcon(icon56);
        actionMarker = new QAction(MainWindow);
        actionMarker->setObjectName(QString::fromUtf8("actionMarker"));
        actionMarker->setCheckable(true);
        QIcon icon57;
        icon57.addFile(QString::fromUtf8(":/images/stylusPalette/marker.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon57.addFile(QString::fromUtf8(":/images/stylusPalette/markerOn.png"), QSize(), QIcon::Normal, QIcon::On);
        actionMarker->setIcon(icon57);
        actionSelector = new QAction(MainWindow);
        actionSelector->setObjectName(QString::fromUtf8("actionSelector"));
        actionSelector->setCheckable(true);
        QIcon icon58;
        icon58.addFile(QString::fromUtf8(":/images/stylusPalette/arrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon58.addFile(QString::fromUtf8(":/images/stylusPalette/arrowOn.png"), QSize(), QIcon::Normal, QIcon::On);
        actionSelector->setIcon(icon58);
        actionHand = new QAction(MainWindow);
        actionHand->setObjectName(QString::fromUtf8("actionHand"));
        actionHand->setCheckable(true);
        QIcon icon59;
        icon59.addFile(QString::fromUtf8(":/images/stylusPalette/hand.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon59.addFile(QString::fromUtf8(":/images/stylusPalette/handOn.png"), QSize(), QIcon::Normal, QIcon::On);
        actionHand->setIcon(icon59);
        actionZoomIn = new QAction(MainWindow);
        actionZoomIn->setObjectName(QString::fromUtf8("actionZoomIn"));
        actionZoomIn->setCheckable(true);
        QIcon icon60;
        icon60.addFile(QString::fromUtf8(":/images/stylusPalette/zoomIn.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon60.addFile(QString::fromUtf8(":/images/stylusPalette/zoomInOn.png"), QSize(), QIcon::Normal, QIcon::On);
        actionZoomIn->setIcon(icon60);
        actionZoomOut = new QAction(MainWindow);
        actionZoomOut->setObjectName(QString::fromUtf8("actionZoomOut"));
        actionZoomOut->setCheckable(true);
        QIcon icon61;
        icon61.addFile(QString::fromUtf8(":/images/stylusPalette/zoomOut.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon61.addFile(QString::fromUtf8(":/images/stylusPalette/zoomOutOn.png"), QSize(), QIcon::Normal, QIcon::On);
        actionZoomOut->setIcon(icon61);
        actionPointer = new QAction(MainWindow);
        actionPointer->setObjectName(QString::fromUtf8("actionPointer"));
        actionPointer->setCheckable(true);
        QIcon icon62;
        icon62.addFile(QString::fromUtf8(":/images/stylusPalette/laser.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon62.addFile(QString::fromUtf8(":/images/stylusPalette/laserOn.png"), QSize(), QIcon::Normal, QIcon::On);
        actionPointer->setIcon(icon62);
        actionLine = new QAction(MainWindow);
        actionLine->setObjectName(QString::fromUtf8("actionLine"));
        actionLine->setCheckable(true);
        QIcon icon63;
        icon63.addFile(QString::fromUtf8(":/images/stylusPalette/line.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon63.addFile(QString::fromUtf8(":/images/stylusPalette/lineOn.png"), QSize(), QIcon::Normal, QIcon::On);
        actionLine->setIcon(icon63);
        actionText = new QAction(MainWindow);
        actionText->setObjectName(QString::fromUtf8("actionText"));
        actionText->setCheckable(true);
        QIcon icon64;
        icon64.addFile(QString::fromUtf8(":/images/stylusPalette/text.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon64.addFile(QString::fromUtf8(":/images/stylusPalette/textOn.png"), QSize(), QIcon::Normal, QIcon::On);
        actionText->setIcon(icon64);
        actionCapture = new QAction(MainWindow);
        actionCapture->setObjectName(QString::fromUtf8("actionCapture"));
        actionCapture->setCheckable(true);
        QIcon icon65;
        icon65.addFile(QString::fromUtf8(":/images/stylusPalette/captureArea.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon65.addFile(QString::fromUtf8(":/images/stylusPalette/captureAreaOn.png"), QSize(), QIcon::Normal, QIcon::On);
        actionCapture->setIcon(icon65);
        actionAddItemToCurrentPage = new QAction(MainWindow);
        actionAddItemToCurrentPage->setObjectName(QString::fromUtf8("actionAddItemToCurrentPage"));
        QIcon icon66;
        icon66.addFile(QString::fromUtf8(":/images/addItemToCurrentPage.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionAddItemToCurrentPage->setIcon(icon66);
        actionAddItemToNewPage = new QAction(MainWindow);
        actionAddItemToNewPage->setObjectName(QString::fromUtf8("actionAddItemToNewPage"));
        QIcon icon67;
        icon67.addFile(QString::fromUtf8(":/images/addItemToNewPage.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionAddItemToNewPage->setIcon(icon67);
        actionAddItemToLibrary = new QAction(MainWindow);
        actionAddItemToLibrary->setObjectName(QString::fromUtf8("actionAddItemToLibrary"));
        QIcon icon68;
        icon68.addFile(QString::fromUtf8(":/images/addItemToLibrary.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionAddItemToLibrary->setIcon(icon68);
        actionPages = new QAction(MainWindow);
        actionPages->setObjectName(QString::fromUtf8("actionPages"));
        actionPages->setCheckable(false);
        actionPages->setIcon(icon31);
        actionNewPage = new QAction(MainWindow);
        actionNewPage->setObjectName(QString::fromUtf8("actionNewPage"));
        actionNewPage->setIcon(icon66);
        actionDuplicatePage = new QAction(MainWindow);
        actionDuplicatePage->setObjectName(QString::fromUtf8("actionDuplicatePage"));
        actionDuplicatePage->setIcon(icon67);
        actionImportPage = new QAction(MainWindow);
        actionImportPage->setObjectName(QString::fromUtf8("actionImportPage"));
        actionImportPage->setIcon(icon68);
        actionPodcastPause = new QAction(MainWindow);
        actionPodcastPause->setObjectName(QString::fromUtf8("actionPodcastPause"));
        actionPodcastPause->setCheckable(true);
        actionPodcastPause->setEnabled(false);
        QIcon icon69;
        icon69.addFile(QString::fromUtf8(":/images/toolbar/pause.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPodcastPause->setIcon(icon69);
        actionPodcastConfig = new QAction(MainWindow);
        actionPodcastConfig->setObjectName(QString::fromUtf8("actionPodcastConfig"));
        actionPodcastConfig->setIcon(icon24);
        actionWebTrap = new QAction(MainWindow);
        actionWebTrap->setObjectName(QString::fromUtf8("actionWebTrap"));
        actionWebTrap->setCheckable(true);
        QIcon icon70;
        icon70.addFile(QString::fromUtf8(":/images/extraPalette/webTrap.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon70.addFile(QString::fromUtf8(":/images/extraPalette/webTrapEnabled.png"), QSize(), QIcon::Normal, QIcon::On);
        actionWebTrap->setIcon(icon70);
        actionWebCustomCapture = new QAction(MainWindow);
        actionWebCustomCapture->setObjectName(QString::fromUtf8("actionWebCustomCapture"));
        QIcon icon71;
        icon71.addFile(QString::fromUtf8(":/images/toolbar/captureArea.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionWebCustomCapture->setIcon(icon71);
        actionWebWindowCapture = new QAction(MainWindow);
        actionWebWindowCapture->setObjectName(QString::fromUtf8("actionWebWindowCapture"));
        QIcon icon72;
        icon72.addFile(QString::fromUtf8(":/images/toolbar/captureWindow.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionWebWindowCapture->setIcon(icon72);
        actionWebShowHideOnDisplay = new QAction(MainWindow);
        actionWebShowHideOnDisplay->setObjectName(QString::fromUtf8("actionWebShowHideOnDisplay"));
        actionWebShowHideOnDisplay->setCheckable(true);
        QIcon icon73;
        icon73.addFile(QString::fromUtf8(":/images/toolbar/eyeClosed.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon73.addFile(QString::fromUtf8(":/images/toolbar/eyeOpened.png"), QSize(), QIcon::Normal, QIcon::On);
        actionWebShowHideOnDisplay->setIcon(icon73);
        actionWebShowHideOnDisplay->setAutoRepeat(false);
        actionWebShowHideOnDisplay->setMenuRole(QAction::TextHeuristicRole);
        actionEraseDesktopAnnotations = new QAction(MainWindow);
        actionEraseDesktopAnnotations->setObjectName(QString::fromUtf8("actionEraseDesktopAnnotations"));
        actionEraseDesktopAnnotations->setIcon(icon53);
        actionEduMedia = new QAction(MainWindow);
        actionEduMedia->setObjectName(QString::fromUtf8("actionEduMedia"));
        QIcon icon74;
        icon74.addFile(QString::fromUtf8(":/images/toolbar/addToolToLibrary.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEduMedia->setIcon(icon74);
        actionTutorial = new QAction(MainWindow);
        actionTutorial->setObjectName(QString::fromUtf8("actionTutorial"));
        QIcon icon75;
        icon75.addFile(QString::fromUtf8(":/images/toolbar/tutorial.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTutorial->setIcon(icon75);
        actionCheckUpdate = new QAction(MainWindow);
        actionCheckUpdate->setObjectName(QString::fromUtf8("actionCheckUpdate"));
        QIcon icon76;
        icon76.addFile(QString::fromUtf8(":/images/toolbar/updates.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCheckUpdate->setIcon(icon76);
        actionSankoreEditor = new QAction(MainWindow);
        actionSankoreEditor->setObjectName(QString::fromUtf8("actionSankoreEditor"));
        QIcon icon77;
        icon77.addFile(QString::fromUtf8(":/images/toolbar/paraschool.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSankoreEditor->setIcon(icon77);
        actionHideApplication = new QAction(MainWindow);
        actionHideApplication->setObjectName(QString::fromUtf8("actionHideApplication"));
        QIcon icon78;
        icon78.addFile(QString::fromUtf8(":/images/toolbar/hide.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionHideApplication->setIcon(icon78);
        actionImportUniboardDocuments = new QAction(MainWindow);
        actionImportUniboardDocuments->setObjectName(QString::fromUtf8("actionImportUniboardDocuments"));
        actionGroupItems = new QAction(MainWindow);
        actionGroupItems->setObjectName(QString::fromUtf8("actionGroupItems"));
        actionGroupItems->setCheckable(true);
        actionGroupItems->setEnabled(false);
        QIcon icon79;
        icon79.addFile(QString::fromUtf8(":/images/toolbar/group.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon79.addFile(QString::fromUtf8(":/images/toolbar/ungroup.png"), QSize(), QIcon::Normal, QIcon::On);
        actionGroupItems->setIcon(icon79);
        actionPlay = new QAction(MainWindow);
        actionPlay->setObjectName(QString::fromUtf8("actionPlay"));
        actionPlay->setCheckable(true);
        QIcon icon80;
        icon80.addFile(QString::fromUtf8(":/images/stylusPalette/handPlay.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon80.addFile(QString::fromUtf8(":/images/stylusPalette/handPlayOn.png"), QSize(), QIcon::Normal, QIcon::On);
        actionPlay->setIcon(icon80);
        actionEraseBackground = new QAction(MainWindow);
        actionEraseBackground->setObjectName(QString::fromUtf8("actionEraseBackground"));
        QIcon icon81;
        icon81.addFile(QString::fromUtf8(":/images/erasePalette/eraseBackground.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionEraseBackground->setIcon(icon81);
        actionBookmark = new QAction(MainWindow);
        actionBookmark->setObjectName(QString::fromUtf8("actionBookmark"));
        QIcon icon82;
        icon82.addFile(QString::fromUtf8(":/images/toolbar/bookmark.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBookmark->setIcon(icon82);
        actionWebTrapContent = new QAction(MainWindow);
        actionWebTrapContent->setObjectName(QString::fromUtf8("actionWebTrapContent"));
        actionWebTrapContent->setCheckable(true);
        actionWebTrapContent->setIcon(icon74);
        actionWebTrapToLibrary = new QAction(MainWindow);
        actionWebTrapToLibrary->setObjectName(QString::fromUtf8("actionWebTrapToLibrary"));
        actionWebTrapToLibrary->setEnabled(false);
        QIcon icon83;
        icon83.addFile(QString::fromUtf8(":/images/trapFlashPalette/downloadToLibrary.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionWebTrapToLibrary->setIcon(icon83);
        actionWebTrapToCurrentPage = new QAction(MainWindow);
        actionWebTrapToCurrentPage->setObjectName(QString::fromUtf8("actionWebTrapToCurrentPage"));
        actionWebTrapToCurrentPage->setEnabled(false);
        QIcon icon84;
        icon84.addFile(QString::fromUtf8(":/images/trapFlashPalette/downloadToBoard.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionWebTrapToCurrentPage->setIcon(icon84);
        actionWebTrapLinkToLibrary = new QAction(MainWindow);
        actionWebTrapLinkToLibrary->setObjectName(QString::fromUtf8("actionWebTrapLinkToLibrary"));
        QIcon icon85;
        icon85.addFile(QString::fromUtf8(":/images/trapFlashPalette/linkToLibrary.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionWebTrapLinkToLibrary->setIcon(icon85);
        actionWebTrapLinkToPage = new QAction(MainWindow);
        actionWebTrapLinkToPage->setObjectName(QString::fromUtf8("actionWebTrapLinkToPage"));
        QIcon icon86;
        icon86.addFile(QString::fromUtf8(":/images/trapFlashPalette/linkToBoard.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionWebTrapLinkToPage->setIcon(icon86);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        MainWindow->setCentralWidget(centralwidget);
        boardToolBar = new QToolBar(MainWindow);
        boardToolBar->setObjectName(QString::fromUtf8("boardToolBar"));
        boardToolBar->setContextMenuPolicy(Qt::PreventContextMenu);
        boardToolBar->setMovable(false);
        boardToolBar->setAllowedAreas(Qt::BottomToolBarArea|Qt::TopToolBarArea);
        boardToolBar->setIconSize(QSize(48, 32));
        boardToolBar->setFloatable(false);
        MainWindow->addToolBar(Qt::TopToolBarArea, boardToolBar);
        webToolBar = new QToolBar(MainWindow);
        webToolBar->setObjectName(QString::fromUtf8("webToolBar"));
        webToolBar->setContextMenuPolicy(Qt::PreventContextMenu);
        webToolBar->setMovable(false);
        webToolBar->setAllowedAreas(Qt::BottomToolBarArea|Qt::TopToolBarArea);
        webToolBar->setIconSize(QSize(48, 32));
        webToolBar->setFloatable(false);
        MainWindow->addToolBar(Qt::TopToolBarArea, webToolBar);
        MainWindow->insertToolBarBreak(webToolBar);
        documentToolBar = new QToolBar(MainWindow);
        documentToolBar->setObjectName(QString::fromUtf8("documentToolBar"));
        documentToolBar->setContextMenuPolicy(Qt::PreventContextMenu);
        documentToolBar->setMovable(false);
        documentToolBar->setAllowedAreas(Qt::BottomToolBarArea|Qt::TopToolBarArea);
        documentToolBar->setIconSize(QSize(48, 32));
        documentToolBar->setFloatable(false);
        MainWindow->addToolBar(Qt::TopToolBarArea, documentToolBar);
        MainWindow->insertToolBarBreak(documentToolBar);
        tutorialToolBar = new QToolBar(MainWindow);
        tutorialToolBar->setObjectName(QString::fromUtf8("tutorialToolBar"));
        tutorialToolBar->setContextMenuPolicy(Qt::PreventContextMenu);
        tutorialToolBar->setLayoutDirection(Qt::LeftToRight);
        tutorialToolBar->setMovable(false);
        tutorialToolBar->setAllowedAreas(Qt::BottomToolBarArea|Qt::TopToolBarArea);
        tutorialToolBar->setIconSize(QSize(48, 32));
        tutorialToolBar->setFloatable(false);
        MainWindow->addToolBar(Qt::TopToolBarArea, tutorialToolBar);
        MainWindow->insertToolBarBreak(tutorialToolBar);

        boardToolBar->addAction(actionStylus);
        boardToolBar->addAction(actionBackgrounds);
        boardToolBar->addSeparator();
        boardToolBar->addAction(actionUndo);
        boardToolBar->addAction(actionRedo);
        boardToolBar->addSeparator();
        boardToolBar->addAction(actionPages);
        boardToolBar->addAction(actionBack);
        boardToolBar->addAction(actionForward);
        boardToolBar->addSeparator();
        boardToolBar->addAction(actionErase);
        boardToolBar->addAction(actionGroupItems);
        boardToolBar->addAction(actionBoard);
        boardToolBar->addAction(actionDocument);
        boardToolBar->addAction(actionDesktop);
        boardToolBar->addSeparator();
        boardToolBar->addAction(actionRestart);
        boardToolBar->addSeparator();
        boardToolBar->addAction(actionMenu);
        webToolBar->addAction(actionWebTools);
        webToolBar->addSeparator();
        webToolBar->addAction(actionWebBack);
        webToolBar->addAction(actionWebForward);
        webToolBar->addAction(actionWebReload);
        webToolBar->addAction(actionStopLoading);
        webToolBar->addAction(actionHome);
        webToolBar->addAction(actionBookmark);
        webToolBar->addSeparator();
        webToolBar->addAction(actionWebBigger);
        webToolBar->addAction(actionWebSmaller);
        webToolBar->addSeparator();
        webToolBar->addAction(actionBoard);
        webToolBar->addAction(actionDocument);
        webToolBar->addAction(actionDesktop);
        webToolBar->addAction(actionMenu);
        documentToolBar->addAction(actionDocumentTools);
        documentToolBar->addSeparator();
        documentToolBar->addAction(actionNewDocument);
        documentToolBar->addAction(actionNewFolder);
        documentToolBar->addSeparator();
        documentToolBar->addAction(actionImport);
        documentToolBar->addAction(actionExport);
        documentToolBar->addAction(actionRename);
        documentToolBar->addSeparator();
        documentToolBar->addAction(actionDuplicate);
        documentToolBar->addAction(actionDelete);
        documentToolBar->addSeparator();
        documentToolBar->addAction(actionOpen);
        documentToolBar->addAction(actionAddToWorkingDocument);
        documentToolBar->addAction(actionDocumentAdd);
        documentToolBar->addAction(actionBoard);
        documentToolBar->addAction(actionDocument);
        documentToolBar->addAction(actionDesktop);
        documentToolBar->addAction(actionMenu);
        tutorialToolBar->addAction(actionWebBack);
        tutorialToolBar->addAction(actionWebForward);
        tutorialToolBar->addAction(actionBoard);
        tutorialToolBar->addAction(actionDocument);
        tutorialToolBar->addAction(actionMenu);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Open-Sankor\303\251", 0, QApplication::UnicodeUTF8));
        actionStylus->setText(QApplication::translate("MainWindow", "Stylus", 0, QApplication::UnicodeUTF8));
        actionStylus->setIconText(QApplication::translate("MainWindow", "Stylus", 0, QApplication::UnicodeUTF8));
        actionStylus->setShortcut(QApplication::translate("MainWindow", "Ctrl+T", 0, QApplication::UnicodeUTF8));
        actionBackgrounds->setText(QApplication::translate("MainWindow", "Backgrounds", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionBackgrounds->setToolTip(QApplication::translate("MainWindow", "Change Background", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionUndo->setText(QApplication::translate("MainWindow", "Undo", 0, QApplication::UnicodeUTF8));
        actionUndo->setShortcut(QApplication::translate("MainWindow", "Ctrl+Z", 0, QApplication::UnicodeUTF8));
        actionRedo->setText(QApplication::translate("MainWindow", "Redo", 0, QApplication::UnicodeUTF8));
        actionRedo->setShortcut(QApplication::translate("MainWindow", "Ctrl+Y", 0, QApplication::UnicodeUTF8));
        actionBack->setText(QApplication::translate("MainWindow", "Previous", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionBack->setToolTip(QApplication::translate("MainWindow", "Previous Page", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionBack->setShortcut(QApplication::translate("MainWindow", "PgUp", 0, QApplication::UnicodeUTF8));
        actionForward->setText(QApplication::translate("MainWindow", "Next", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionForward->setToolTip(QApplication::translate("MainWindow", "Next Page", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionForward->setShortcut(QApplication::translate("MainWindow", "PgDown", 0, QApplication::UnicodeUTF8));
        actionDocument->setText(QApplication::translate("MainWindow", "Documents", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionDocument->setToolTip(QApplication::translate("MainWindow", "Manage Documents", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionDocument->setShortcut(QApplication::translate("MainWindow", "Ctrl+D", 0, QApplication::UnicodeUTF8));
        actionWeb->setText(QApplication::translate("MainWindow", "Web", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionWeb->setToolTip(QApplication::translate("MainWindow", "Web Browsing", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionWeb->setShortcut(QApplication::translate("MainWindow", "Ctrl+W", 0, QApplication::UnicodeUTF8));
        actionLineSmall->setText(QApplication::translate("MainWindow", "Line", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionLineSmall->setToolTip(QApplication::translate("MainWindow", "Small Line", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionLineMedium->setText(QApplication::translate("MainWindow", "Line", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionLineMedium->setToolTip(QApplication::translate("MainWindow", "Medium Line", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionLineLarge->setText(QApplication::translate("MainWindow", "Line", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionLineLarge->setToolTip(QApplication::translate("MainWindow", "Large Line", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionQuit->setText(QApplication::translate("MainWindow", "Quit", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionQuit->setToolTip(QApplication::translate("MainWindow", "Quit Open-Sankor\303\251", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionRestart->setText(QApplication::translate("MainWindow", "Restart", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionRestart->setToolTip(QApplication::translate("MainWindow", "Restart Open-Sankor\303\251", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionEraserSmall->setText(QApplication::translate("MainWindow", "Eraser", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionEraserSmall->setToolTip(QApplication::translate("MainWindow", "Smalle Eraser", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionEraserMedium->setText(QApplication::translate("MainWindow", "Eraser", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionEraserMedium->setToolTip(QApplication::translate("MainWindow", "Medium Eraser", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionEraserLarge->setText(QApplication::translate("MainWindow", "Eraser", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionEraserLarge->setToolTip(QApplication::translate("MainWindow", "Large Eraser", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionColor0->setText(QApplication::translate("MainWindow", "Color", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionColor0->setToolTip(QApplication::translate("MainWindow", "Color", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionColor1->setText(QApplication::translate("MainWindow", "Color", 0, QApplication::UnicodeUTF8));
        actionColor2->setText(QApplication::translate("MainWindow", "Color", 0, QApplication::UnicodeUTF8));
        actionColor3->setText(QApplication::translate("MainWindow", "Color", 0, QApplication::UnicodeUTF8));
        actionWebBack->setText(QApplication::translate("MainWindow", "Back", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionWebBack->setToolTip(QApplication::translate("MainWindow", "Previous Page", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionWebBack->setShortcut(QApplication::translate("MainWindow", "Left", 0, QApplication::UnicodeUTF8));
        actionWebForward->setText(QApplication::translate("MainWindow", "Forward", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionWebForward->setToolTip(QApplication::translate("MainWindow", "Next Page", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionWebForward->setShortcut(QApplication::translate("MainWindow", "Right", 0, QApplication::UnicodeUTF8));
        actionWebReload->setText(QApplication::translate("MainWindow", "Reload", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionWebReload->setToolTip(QApplication::translate("MainWindow", "Reload Current Page", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionHome->setText(QApplication::translate("MainWindow", "Home", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionHome->setToolTip(QApplication::translate("MainWindow", "Load Home Page", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionBookmarks->setText(QApplication::translate("MainWindow", "Bookmarks", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionBookmarks->setToolTip(QApplication::translate("MainWindow", "Show Bookmarks", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionAddBookmark->setText(QApplication::translate("MainWindow", "Bookmark", 0, QApplication::UnicodeUTF8));
        actionAddBookmark->setIconText(QApplication::translate("MainWindow", "Add Bookmark", 0, QApplication::UnicodeUTF8));
        actionBoard->setText(QApplication::translate("MainWindow", "Board", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionBoard->setToolTip(QApplication::translate("MainWindow", "Display Board", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionBoard->setShortcut(QApplication::translate("MainWindow", "Ctrl+B", 0, QApplication::UnicodeUTF8));
        actionErase->setText(QApplication::translate("MainWindow", "Erase", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionErase->setToolTip(QApplication::translate("MainWindow", "Erase Content", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionPreferences->setText(QApplication::translate("MainWindow", "Preferences", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionPreferences->setToolTip(QApplication::translate("MainWindow", "Display Preferences", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionLibrary->setText(QApplication::translate("MainWindow", "Library", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionLibrary->setToolTip(QApplication::translate("MainWindow", "Show Library", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionLibrary->setShortcut(QApplication::translate("MainWindow", "Ctrl+L", 0, QApplication::UnicodeUTF8));
        actionMenu->setText(QApplication::translate("MainWindow", "Open-Sankor\303\251", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionMenu->setToolTip(QApplication::translate("MainWindow", "Open-Sankor\303\251", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionDesktop->setText(QApplication::translate("MainWindow", "Show Desktop", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionDesktop->setToolTip(QApplication::translate("MainWindow", "Show Computer Desktop", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionDesktop->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+H", 0, QApplication::UnicodeUTF8));
        actionWebBigger->setText(QApplication::translate("MainWindow", "Bigger", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionWebBigger->setToolTip(QApplication::translate("MainWindow", "Zoom In", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionWebBigger->setShortcut(QApplication::translate("MainWindow", "Ctrl++", 0, QApplication::UnicodeUTF8));
        actionWebSmaller->setText(QApplication::translate("MainWindow", "Smaller", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionWebSmaller->setToolTip(QApplication::translate("MainWindow", "Zoom Out", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionWebSmaller->setShortcut(QApplication::translate("MainWindow", "Ctrl+-", 0, QApplication::UnicodeUTF8));
        actionNewFolder->setText(QApplication::translate("MainWindow", "New Folder", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionNewFolder->setToolTip(QApplication::translate("MainWindow", "Create a New Folder", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionNewDocument->setText(QApplication::translate("MainWindow", "New Document", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionNewDocument->setToolTip(QApplication::translate("MainWindow", "Create a New Document", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionImport->setText(QApplication::translate("MainWindow", "Import", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionImport->setToolTip(QApplication::translate("MainWindow", "Import a Document", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionExport->setText(QApplication::translate("MainWindow", "Export", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionExport->setToolTip(QApplication::translate("MainWindow", "Export a Document", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionOpen->setText(QApplication::translate("MainWindow", "Open in Board", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionOpen->setToolTip(QApplication::translate("MainWindow", "Open Page in Board", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionOpen->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", 0, QApplication::UnicodeUTF8));
        actionDuplicate->setText(QApplication::translate("MainWindow", "Duplicate", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionDuplicate->setToolTip(QApplication::translate("MainWindow", "Duplicate Selected Content", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionDelete->setText(QApplication::translate("MainWindow", "Delete", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionDelete->setToolTip(QApplication::translate("MainWindow", "Delete Selected Content", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionDelete->setShortcut(QApplication::translate("MainWindow", "Del", 0, QApplication::UnicodeUTF8));
        actionAddToWorkingDocument->setText(QApplication::translate("MainWindow", "Add to Working Document", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionAddToWorkingDocument->setToolTip(QApplication::translate("MainWindow", "Add Selected Content to Open Document", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionDocumentAdd->setText(QApplication::translate("MainWindow", "Add", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionDocumentAdd->setToolTip(QApplication::translate("MainWindow", "Add Content to Document", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionRename->setText(QApplication::translate("MainWindow", "Rename", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionRename->setToolTip(QApplication::translate("MainWindow", "Rename Content", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionDocumentTools->setText(QApplication::translate("MainWindow", "Tools", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionDocumentTools->setToolTip(QApplication::translate("MainWindow", "Display Tools", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionWebTools->setText(QApplication::translate("MainWindow", "Tools", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionWebTools->setToolTip(QApplication::translate("MainWindow", "Display Tools", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionMultiScreen->setText(QApplication::translate("MainWindow", "Multi Screen", 0, QApplication::UnicodeUTF8));
        actionWidePageSize->setText(QApplication::translate("MainWindow", "Wide Size (16/9)", 0, QApplication::UnicodeUTF8));
        actionWidePageSize->setIconText(QApplication::translate("MainWindow", "Wide Size (16/9)", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionWidePageSize->setToolTip(QApplication::translate("MainWindow", "Use Document Wide Size (16/9)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionRegularPageSize->setText(QApplication::translate("MainWindow", "Regular Size (4/3)", 0, QApplication::UnicodeUTF8));
        actionRegularPageSize->setIconText(QApplication::translate("MainWindow", "Regular Size (4/3)", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionRegularPageSize->setToolTip(QApplication::translate("MainWindow", "Use Document Regular Size (4/3)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionCustomPageSize->setText(QApplication::translate("MainWindow", "Custom Size", 0, QApplication::UnicodeUTF8));
        actionCustomPageSize->setIconText(QApplication::translate("MainWindow", "Custom Size", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionCustomPageSize->setToolTip(QApplication::translate("MainWindow", "Use Custom Document Size", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionStopLoading->setText(QApplication::translate("MainWindow", "Stop Loading", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionStopLoading->setToolTip(QApplication::translate("MainWindow", "Stop Loading Web Page", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionCut->setText(QApplication::translate("MainWindow", "Cut", 0, QApplication::UnicodeUTF8));
        actionCopy->setText(QApplication::translate("MainWindow", "Copy", 0, QApplication::UnicodeUTF8));
        actionPaste->setText(QApplication::translate("MainWindow", "Paste", 0, QApplication::UnicodeUTF8));
        actionSleep->setText(QApplication::translate("MainWindow", "Sleep", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSleep->setToolTip(QApplication::translate("MainWindow", "Put Presentation to Sleep", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionVirtualKeyboard->setText(QApplication::translate("MainWindow", "Virtual Keyboard", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionVirtualKeyboard->setToolTip(QApplication::translate("MainWindow", "Display Virtual Keyboard", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionPlainLightBackground->setText(QApplication::translate("MainWindow", "Plain Light Background", 0, QApplication::UnicodeUTF8));
        actionPlainLightBackground->setIconText(QApplication::translate("MainWindow", "Light", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionPlainLightBackground->setToolTip(QApplication::translate("MainWindow", "Plain Light Background", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionCrossedLightBackground->setText(QApplication::translate("MainWindow", "Grid Light Background", 0, QApplication::UnicodeUTF8));
        actionCrossedLightBackground->setIconText(QApplication::translate("MainWindow", "Light", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionCrossedLightBackground->setToolTip(QApplication::translate("MainWindow", "Grid Light Background", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionPlainDarkBackground->setText(QApplication::translate("MainWindow", "Plain Dark Background", 0, QApplication::UnicodeUTF8));
        actionPlainDarkBackground->setIconText(QApplication::translate("MainWindow", "Dark", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionPlainDarkBackground->setToolTip(QApplication::translate("MainWindow", "Plain Dark Background", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionCrossedDarkBackground->setText(QApplication::translate("MainWindow", "Grid Dark Background", 0, QApplication::UnicodeUTF8));
        actionCrossedDarkBackground->setIconText(QApplication::translate("MainWindow", "Dark", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionCrossedDarkBackground->setToolTip(QApplication::translate("MainWindow", "Grid Dark Background", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionPodcast->setText(QApplication::translate("MainWindow", "Podcast", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionPodcast->setToolTip(QApplication::translate("MainWindow", "Record Presentation to Video", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionPodcastRecord->setText(QApplication::translate("MainWindow", "Record", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionPodcastRecord->setToolTip(QApplication::translate("MainWindow", "Start Screen Recording", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionEraseItems->setText(QApplication::translate("MainWindow", "Erase Items", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionEraseItems->setToolTip(QApplication::translate("MainWindow", "Erase All Items", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionEraseAnnotations->setText(QApplication::translate("MainWindow", "Erase Annotations", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionEraseAnnotations->setToolTip(QApplication::translate("MainWindow", "Erase All Annotations", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionClearPage->setText(QApplication::translate("MainWindow", "Clear Page", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionClearPage->setToolTip(QApplication::translate("MainWindow", "Clear All Elements", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionAdd->setText(QApplication::translate("MainWindow", "Add", 0, QApplication::UnicodeUTF8));
        actionPen->setText(QApplication::translate("MainWindow", "Pen", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionPen->setToolTip(QApplication::translate("MainWindow", "Annotate Document", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionPen->setShortcut(QApplication::translate("MainWindow", "Ctrl+I", 0, QApplication::UnicodeUTF8));
        actionEraser->setText(QApplication::translate("MainWindow", "Eraser", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionEraser->setToolTip(QApplication::translate("MainWindow", "Erase Annotation", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionEraser->setShortcut(QApplication::translate("MainWindow", "Ctrl+E", 0, QApplication::UnicodeUTF8));
        actionMarker->setText(QApplication::translate("MainWindow", "Marker", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionMarker->setToolTip(QApplication::translate("MainWindow", "Highlight ", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionMarker->setShortcut(QApplication::translate("MainWindow", "Ctrl+M", 0, QApplication::UnicodeUTF8));
        actionSelector->setText(QApplication::translate("MainWindow", "Selector", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSelector->setToolTip(QApplication::translate("MainWindow", "Select And Modify Objects", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionSelector->setShortcut(QApplication::translate("MainWindow", "Ctrl+F", 0, QApplication::UnicodeUTF8));
        actionHand->setText(QApplication::translate("MainWindow", "Hand", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionHand->setToolTip(QApplication::translate("MainWindow", "Scroll Page", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionZoomIn->setText(QApplication::translate("MainWindow", "Zoom In", 0, QApplication::UnicodeUTF8));
        actionZoomOut->setText(QApplication::translate("MainWindow", "Zoom Out", 0, QApplication::UnicodeUTF8));
        actionPointer->setText(QApplication::translate("MainWindow", "Laser Pointer", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionPointer->setToolTip(QApplication::translate("MainWindow", "Virtual Laser Pointer", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionPointer->setShortcut(QApplication::translate("MainWindow", "Ctrl+G", 0, QApplication::UnicodeUTF8));
        actionLine->setText(QApplication::translate("MainWindow", "Line", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionLine->setToolTip(QApplication::translate("MainWindow", "Draw Lines", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionLine->setShortcut(QApplication::translate("MainWindow", "Ctrl+J", 0, QApplication::UnicodeUTF8));
        actionText->setText(QApplication::translate("MainWindow", "Text", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionText->setToolTip(QApplication::translate("MainWindow", "Write Text", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionText->setShortcut(QApplication::translate("MainWindow", "Ctrl+K", 0, QApplication::UnicodeUTF8));
        actionCapture->setText(QApplication::translate("MainWindow", "Capture", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionCapture->setToolTip(QApplication::translate("MainWindow", "Capture Part of the Screen", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionAddItemToCurrentPage->setText(QApplication::translate("MainWindow", "Add To Current Page", 0, QApplication::UnicodeUTF8));
        actionAddItemToCurrentPage->setIconText(QApplication::translate("MainWindow", "Add To Current Page", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionAddItemToCurrentPage->setToolTip(QApplication::translate("MainWindow", "Add Item To Current Page", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionAddItemToNewPage->setText(QApplication::translate("MainWindow", "Add To New Page", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionAddItemToNewPage->setToolTip(QApplication::translate("MainWindow", "Add Item To New Page", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionAddItemToLibrary->setText(QApplication::translate("MainWindow", "Add To Library", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionAddItemToLibrary->setToolTip(QApplication::translate("MainWindow", "Add Item To Library", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionPages->setText(QApplication::translate("MainWindow", "Pages", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionPages->setToolTip(QApplication::translate("MainWindow", "Create a New Page", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionNewPage->setText(QApplication::translate("MainWindow", "New Page", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionNewPage->setToolTip(QApplication::translate("MainWindow", "Create a New Page", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionDuplicatePage->setText(QApplication::translate("MainWindow", "Duplicate Page", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionDuplicatePage->setToolTip(QApplication::translate("MainWindow", "Duplicate the Current Page", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionImportPage->setText(QApplication::translate("MainWindow", "Import Page", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionImportPage->setToolTip(QApplication::translate("MainWindow", "Import an External Page", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionPodcastPause->setText(QApplication::translate("MainWindow", "Pause", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionPodcastPause->setToolTip(QApplication::translate("MainWindow", "Pause Podcast Recording", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionPodcastConfig->setText(QApplication::translate("MainWindow", "Podcast Config", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionPodcastConfig->setToolTip(QApplication::translate("MainWindow", "Configure Podcast Recording", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionWebTrap->setText(QApplication::translate("MainWindow", "Web Trap", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionWebTrap->setToolTip(QApplication::translate("MainWindow", "Trap Web Content", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionWebCustomCapture->setText(QApplication::translate("MainWindow", "Custom Capture", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionWebCustomCapture->setToolTip(QApplication::translate("MainWindow", "Capture Part of the Screen", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionWebWindowCapture->setText(QApplication::translate("MainWindow", "Window Capture", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionWebWindowCapture->setToolTip(QApplication::translate("MainWindow", "Capture a Window", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionWebShowHideOnDisplay->setText(QApplication::translate("MainWindow", "Show on Display", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionWebShowHideOnDisplay->setToolTip(QApplication::translate("MainWindow", "Show Main Screen on Display Screen", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionEraseDesktopAnnotations->setText(QApplication::translate("MainWindow", "Erase Annotations", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionEraseDesktopAnnotations->setToolTip(QApplication::translate("MainWindow", "Erase all Annotations", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionEduMedia->setText(QApplication::translate("MainWindow", "eduMedia", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionEduMedia->setToolTip(QApplication::translate("MainWindow", "Import eduMedia simulation", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionTutorial->setText(QApplication::translate("MainWindow", "Tutorial", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionTutorial->setToolTip(QApplication::translate("MainWindow", "Open the tutorial", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionCheckUpdate->setText(QApplication::translate("MainWindow", "Check Update", 0, QApplication::UnicodeUTF8));
        actionSankoreEditor->setText(QApplication::translate("MainWindow", "Open-Sankor\303\251 Editor", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSankoreEditor->setToolTip(QApplication::translate("MainWindow", "Show Open-Sankor\303\251 Widgets Editor", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionHideApplication->setText(QApplication::translate("MainWindow", "Hide Open-Sankor\303\251", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionHideApplication->setToolTip(QApplication::translate("MainWindow", "Hide Open-Sankor\303\251 Application", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionHideApplication->setShortcut(QApplication::translate("MainWindow", "Ctrl+H", 0, QApplication::UnicodeUTF8));
        actionImportUniboardDocuments->setText(QApplication::translate("MainWindow", "Import Uniboard Documents", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionImportUniboardDocuments->setToolTip(QApplication::translate("MainWindow", "Import old Sankore or Uniboard documents", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionGroupItems->setText(QApplication::translate("MainWindow", "Group", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionGroupItems->setToolTip(QApplication::translate("MainWindow", "Group items", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionPlay->setText(QApplication::translate("MainWindow", "Play", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionPlay->setToolTip(QApplication::translate("MainWindow", "Interact with items", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionEraseBackground->setText(QApplication::translate("MainWindow", "Erase Background", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionEraseBackground->setToolTip(QApplication::translate("MainWindow", "Remove the backgound", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionBookmark->setText(QApplication::translate("MainWindow", "Bookmark", 0, QApplication::UnicodeUTF8));
        actionBookmark->setIconText(QApplication::translate("MainWindow", "Bookmark", "tooltip", QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionBookmark->setToolTip(QApplication::translate("MainWindow", "Bookmark", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionWebTrapContent->setText(QApplication::translate("MainWindow", "Web Trap", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionWebTrapContent->setToolTip(QApplication::translate("MainWindow", "Trap Web Content", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionWebTrapToLibrary->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\"> <html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">p, li { white-space: pre-wrap; }</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\"><p align=\"center\" style=\" margin-top:2px; margin-bottom:2px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Download to</p><p align=\"center\" style=\" margin-top:2px; margin-bottom12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">library</p></body></html>", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionWebTrapToLibrary->setToolTip(QApplication::translate("MainWindow", "Download to library", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionWebTrapToCurrentPage->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\"> <html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">p, li { white-space: pre-wrap; }</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\"><p align=\"center\" style=\" margin-top:2px; margin-bottom:2px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Download to</p><p align=\"center\" style=\" margin-top:2px; margin-bottom12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">current page</p></body></html>", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionWebTrapToCurrentPage->setToolTip(QApplication::translate("MainWindow", "Download to current page", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionWebTrapLinkToLibrary->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\"> <html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">p, li { white-space: pre-wrap; }</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\"><p align=\"center\" style=\" margin-top:2px; margin-bottom:2px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Add link to</p><p align=\"center\" style=\" margin-top:2px; margin-bottom12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">library</p></body></html>", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionWebTrapLinkToLibrary->setToolTip(QApplication::translate("MainWindow", "Add link to library", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionWebTrapLinkToPage->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\"> <html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">p, li { white-space: pre-wrap; }</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\"><p align=\"center\" style=\" margin-top:2px; margin-bottom:2px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Add link to</p><p align=\"center\" style=\" margin-top:2px; margin-bottom12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">current page</p></body></html>", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionWebTrapLinkToPage->setToolTip(QApplication::translate("MainWindow", "Add link to current page", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        boardToolBar->setWindowTitle(QApplication::translate("MainWindow", "Board", 0, QApplication::UnicodeUTF8));
        webToolBar->setWindowTitle(QApplication::translate("MainWindow", "Web", 0, QApplication::UnicodeUTF8));
        documentToolBar->setWindowTitle(QApplication::translate("MainWindow", "Documents", 0, QApplication::UnicodeUTF8));
        tutorialToolBar->setWindowTitle(QApplication::translate("MainWindow", "Tutorial", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
