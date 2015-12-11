/********************************************************************************
** Form generated from reading UI file 'trapFlash.ui'
**
** Created: Fri 6. Nov 10:33:52 2015
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRAPFLASH_H
#define UI_TRAPFLASH_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include <QtWebKit/QWebView>

QT_BEGIN_NAMESPACE

class Ui_trapFlashDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *selectFlashLabel;
    QComboBox *flashCombobox;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QHBoxLayout *horizontalLayout_2;
    QWebView *webView;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLineEdit *widgetNameLineEdit;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *createWidgetButton;

    void setupUi(QDialog *trapFlashDialog)
    {
        if (trapFlashDialog->objectName().isEmpty())
            trapFlashDialog->setObjectName(QString::fromUtf8("trapFlashDialog"));
        trapFlashDialog->resize(508, 417);
        verticalLayout = new QVBoxLayout(trapFlashDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        selectFlashLabel = new QLabel(trapFlashDialog);
        selectFlashLabel->setObjectName(QString::fromUtf8("selectFlashLabel"));

        horizontalLayout_3->addWidget(selectFlashLabel);

        flashCombobox = new QComboBox(trapFlashDialog);
        flashCombobox->setObjectName(QString::fromUtf8("flashCombobox"));

        horizontalLayout_3->addWidget(flashCombobox);

        horizontalLayout_3->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_3);

        scrollArea = new QScrollArea(trapFlashDialog);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 488, 310));
        horizontalLayout_2 = new QHBoxLayout(scrollAreaWidgetContents);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        webView = new QWebView(scrollAreaWidgetContents);
        webView->setObjectName(QString::fromUtf8("webView"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(webView->sizePolicy().hasHeightForWidth());
        webView->setSizePolicy(sizePolicy);
        webView->setUrl(QUrl("about:blank"));

        horizontalLayout_2->addWidget(webView);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(trapFlashDialog);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);


        horizontalLayout->addLayout(verticalLayout_2);

        widgetNameLineEdit = new QLineEdit(trapFlashDialog);
        widgetNameLineEdit->setObjectName(QString::fromUtf8("widgetNameLineEdit"));

        horizontalLayout->addWidget(widgetNameLineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        createWidgetButton = new QPushButton(trapFlashDialog);
        createWidgetButton->setObjectName(QString::fromUtf8("createWidgetButton"));

        horizontalLayout_4->addWidget(createWidgetButton);


        verticalLayout->addLayout(horizontalLayout_4);


        retranslateUi(trapFlashDialog);

        QMetaObject::connectSlotsByName(trapFlashDialog);
    } // setupUi

    void retranslateUi(QDialog *trapFlashDialog)
    {
        trapFlashDialog->setWindowTitle(QApplication::translate("trapFlashDialog", "Trap flash", 0, QApplication::UnicodeUTF8));
        selectFlashLabel->setText(QApplication::translate("trapFlashDialog", "Select a flash to trap", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("trapFlashDialog", "Application name", 0, QApplication::UnicodeUTF8));
        createWidgetButton->setText(QApplication::translate("trapFlashDialog", "Create Application", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class trapFlashDialog: public Ui_trapFlashDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRAPFLASH_H
