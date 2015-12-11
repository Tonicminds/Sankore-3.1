/********************************************************************************
** Form generated from reading UI file 'intranetPodcastPublishingDialog.ui'
**
** Created: Fri 6. Nov 10:33:52 2015
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTRANETPODCASTPUBLISHINGDIALOG_H
#define UI_INTRANETPODCASTPUBLISHINGDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFormLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_IntranetPodcastPublishingDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *titleLabel;
    QLineEdit *title;
    QLabel *decriptionLabel;
    QPlainTextEdit *description;
    QLabel *keywordsLabel;
    QLineEdit *author;
    QDialogButtonBox *dialogButtons;

    void setupUi(QDialog *IntranetPodcastPublishingDialog)
    {
        if (IntranetPodcastPublishingDialog->objectName().isEmpty())
            IntranetPodcastPublishingDialog->setObjectName(QString::fromUtf8("IntranetPodcastPublishingDialog"));
        IntranetPodcastPublishingDialog->setWindowModality(Qt::WindowModal);
        IntranetPodcastPublishingDialog->resize(540, 303);
        verticalLayout = new QVBoxLayout(IntranetPodcastPublishingDialog);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        titleLabel = new QLabel(IntranetPodcastPublishingDialog);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, titleLabel);

        title = new QLineEdit(IntranetPodcastPublishingDialog);
        title->setObjectName(QString::fromUtf8("title"));
        title->setMaxLength(60);

        formLayout->setWidget(0, QFormLayout::FieldRole, title);

        decriptionLabel = new QLabel(IntranetPodcastPublishingDialog);
        decriptionLabel->setObjectName(QString::fromUtf8("decriptionLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, decriptionLabel);

        description = new QPlainTextEdit(IntranetPodcastPublishingDialog);
        description->setObjectName(QString::fromUtf8("description"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(description->sizePolicy().hasHeightForWidth());
        description->setSizePolicy(sizePolicy);
        description->setMinimumSize(QSize(0, 168));

        formLayout->setWidget(2, QFormLayout::FieldRole, description);

        keywordsLabel = new QLabel(IntranetPodcastPublishingDialog);
        keywordsLabel->setObjectName(QString::fromUtf8("keywordsLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, keywordsLabel);

        author = new QLineEdit(IntranetPodcastPublishingDialog);
        author->setObjectName(QString::fromUtf8("author"));

        formLayout->setWidget(4, QFormLayout::FieldRole, author);

        dialogButtons = new QDialogButtonBox(IntranetPodcastPublishingDialog);
        dialogButtons->setObjectName(QString::fromUtf8("dialogButtons"));
        dialogButtons->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        formLayout->setWidget(5, QFormLayout::FieldRole, dialogButtons);


        verticalLayout->addLayout(formLayout);


        retranslateUi(IntranetPodcastPublishingDialog);

        QMetaObject::connectSlotsByName(IntranetPodcastPublishingDialog);
    } // setupUi

    void retranslateUi(QDialog *IntranetPodcastPublishingDialog)
    {
        IntranetPodcastPublishingDialog->setWindowTitle(QApplication::translate("IntranetPodcastPublishingDialog", "Publish Podcast to YouTube", 0, QApplication::UnicodeUTF8));
        titleLabel->setText(QApplication::translate("IntranetPodcastPublishingDialog", "Title", 0, QApplication::UnicodeUTF8));
        decriptionLabel->setText(QApplication::translate("IntranetPodcastPublishingDialog", "Description", 0, QApplication::UnicodeUTF8));
        keywordsLabel->setText(QApplication::translate("IntranetPodcastPublishingDialog", "Author", 0, QApplication::UnicodeUTF8));
        author->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class IntranetPodcastPublishingDialog: public Ui_IntranetPodcastPublishingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTRANETPODCASTPUBLISHINGDIALOG_H
