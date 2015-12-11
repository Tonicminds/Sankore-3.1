/********************************************************************************
** Form generated from reading UI file 'documents.ui'
**
** Created: Fri 6. Nov 10:33:52 2015
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOCUMENTS_H
#define UI_DOCUMENTS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "document/UBDocumentController.h"
#include "gui/UBDocumentThumbnailWidget.h"
#include "gui/UBDocumentTreeWidget.h"

QT_BEGIN_NAMESPACE

class Ui_documents
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *topFrame;
    QHBoxLayout *horizontalLayout;
    QFrame *topLeftFrame;
    QVBoxLayout *verticalLayout_2;
    UBDocumentTreeView *documentTreeView;
    UBDocumentTreeWidget *documentTreeWidget;
    QWidget *topRightFrame;
    QVBoxLayout *verticalLayout_3;
    UBDocumentThumbnailWidget *thumbnailWidget;
    QWidget *bottomRightFrame;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer2;
    QSlider *documentZoomSlider;
    QSpacerItem *horizontalSpacer1;

    void setupUi(QWidget *documents)
    {
        if (documents->objectName().isEmpty())
            documents->setObjectName(QString::fromUtf8("documents"));
        documents->setEnabled(true);
        documents->resize(796, 646);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(documents->sizePolicy().hasHeightForWidth());
        documents->setSizePolicy(sizePolicy);
        documents->setContextMenuPolicy(Qt::DefaultContextMenu);
        documents->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(documents);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        topFrame = new QFrame(documents);
        topFrame->setObjectName(QString::fromUtf8("topFrame"));
        topFrame->setFrameShape(QFrame::NoFrame);
        topFrame->setFrameShadow(QFrame::Raised);
        topFrame->setLineWidth(0);
        horizontalLayout = new QHBoxLayout(topFrame);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        topLeftFrame = new QFrame(topFrame);
        topLeftFrame->setObjectName(QString::fromUtf8("topLeftFrame"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(topLeftFrame->sizePolicy().hasHeightForWidth());
        topLeftFrame->setSizePolicy(sizePolicy1);
        topLeftFrame->setFrameShape(QFrame::Panel);
        topLeftFrame->setFrameShadow(QFrame::Plain);
        verticalLayout_2 = new QVBoxLayout(topLeftFrame);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        documentTreeView = new UBDocumentTreeView(topLeftFrame);
        documentTreeView->setObjectName(QString::fromUtf8("documentTreeView"));
        documentTreeView->setMinimumSize(QSize(400, 0));
        documentTreeView->setMaximumSize(QSize(400, 16777215));
        documentTreeView->setFrameShape(QFrame::NoFrame);
        documentTreeView->setFrameShadow(QFrame::Plain);
        documentTreeView->setAutoScroll(true);
        documentTreeView->setAutoScrollMargin(65);
        documentTreeView->setSelectionBehavior(QAbstractItemView::SelectRows);
        documentTreeView->setVerticalScrollMode(QAbstractItemView::ScrollPerItem);
        documentTreeView->setAnimated(true);
        documentTreeView->setHeaderHidden(true);

        verticalLayout_2->addWidget(documentTreeView);

        documentTreeWidget = new UBDocumentTreeWidget(topLeftFrame);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        documentTreeWidget->setHeaderItem(__qtreewidgetitem);
        documentTreeWidget->setObjectName(QString::fromUtf8("documentTreeWidget"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(documentTreeWidget->sizePolicy().hasHeightForWidth());
        documentTreeWidget->setSizePolicy(sizePolicy2);
        documentTreeWidget->setStyleSheet(QString::fromUtf8(""));
        documentTreeWidget->setFrameShape(QFrame::NoFrame);
        documentTreeWidget->setFrameShadow(QFrame::Plain);
        documentTreeWidget->setLineWidth(1);
        documentTreeWidget->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        documentTreeWidget->setAutoExpandDelay(2);
        documentTreeWidget->setHeaderHidden(true);
        documentTreeWidget->header()->setVisible(false);

        verticalLayout_2->addWidget(documentTreeWidget);


        horizontalLayout->addWidget(topLeftFrame);

        topRightFrame = new QWidget(topFrame);
        topRightFrame->setObjectName(QString::fromUtf8("topRightFrame"));
        topRightFrame->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_3 = new QVBoxLayout(topRightFrame);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        thumbnailWidget = new UBDocumentThumbnailWidget(topRightFrame);
        thumbnailWidget->setObjectName(QString::fromUtf8("thumbnailWidget"));
        thumbnailWidget->setContextMenuPolicy(Qt::NoContextMenu);
        thumbnailWidget->setStyleSheet(QString::fromUtf8(""));
        thumbnailWidget->setFrameShape(QFrame::NoFrame);
        thumbnailWidget->setFrameShadow(QFrame::Plain);
        thumbnailWidget->setLineWidth(1);
        thumbnailWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        thumbnailWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        thumbnailWidget->setDragMode(QGraphicsView::NoDrag);

        verticalLayout_3->addWidget(thumbnailWidget);

        bottomRightFrame = new QWidget(topRightFrame);
        bottomRightFrame->setObjectName(QString::fromUtf8("bottomRightFrame"));
        horizontalLayout_2 = new QHBoxLayout(bottomRightFrame);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer2 = new QSpacerItem(300, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer2);

        documentZoomSlider = new QSlider(bottomRightFrame);
        documentZoomSlider->setObjectName(QString::fromUtf8("documentZoomSlider"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(documentZoomSlider->sizePolicy().hasHeightForWidth());
        documentZoomSlider->setSizePolicy(sizePolicy3);
        documentZoomSlider->setMinimumSize(QSize(150, 0));
        documentZoomSlider->setStyleSheet(QString::fromUtf8(""));
        documentZoomSlider->setMinimum(50);
        documentZoomSlider->setMaximum(500);
        documentZoomSlider->setSingleStep(10);
        documentZoomSlider->setValue(150);
        documentZoomSlider->setOrientation(Qt::Horizontal);
        documentZoomSlider->setInvertedAppearance(false);
        documentZoomSlider->setInvertedControls(false);

        horizontalLayout_2->addWidget(documentZoomSlider);

        horizontalSpacer1 = new QSpacerItem(40, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer1);


        verticalLayout_3->addWidget(bottomRightFrame);


        horizontalLayout->addWidget(topRightFrame);


        verticalLayout->addWidget(topFrame);


        retranslateUi(documents);

        QMetaObject::connectSlotsByName(documents);
    } // setupUi

    void retranslateUi(QWidget *documents)
    {
        documents->setWindowTitle(QApplication::translate("documents", "Uniboard Documents", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class documents: public Ui_documents {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOCUMENTS_H
