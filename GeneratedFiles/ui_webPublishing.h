/********************************************************************************
** Form generated from reading UI file 'webPublishing.ui'
**
** Created: Fri 6. Nov 10:33:52 2015
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WEBPUBLISHING_H
#define UI_WEBPUBLISHING_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFormLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_documentPublishingDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QFormLayout *formLayout;
    QLabel *titleLabel;
    QLineEdit *title;
    QLabel *label_2;
    QLineEdit *email;
    QLabel *label;
    QLineEdit *author;
    QLabel *decriptionLabel;
    QPlainTextEdit *description;
    QSpacerItem *verticalSpacer;
    QCheckBox *attachPDF;
    QCheckBox *attachUBZ;
    QLabel *videoWarning;
    QDialogButtonBox *dialogButtons;

    void setupUi(QDialog *documentPublishingDialog)
    {
        if (documentPublishingDialog->objectName().isEmpty())
            documentPublishingDialog->setObjectName(QString::fromUtf8("documentPublishingDialog"));
        documentPublishingDialog->setWindowModality(Qt::WindowModal);
        documentPublishingDialog->resize(607, 405);
        horizontalLayout = new QHBoxLayout(documentPublishingDialog);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        titleLabel = new QLabel(documentPublishingDialog);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, titleLabel);

        title = new QLineEdit(documentPublishingDialog);
        title->setObjectName(QString::fromUtf8("title"));
        title->setMaxLength(60);

        formLayout->setWidget(0, QFormLayout::FieldRole, title);

        label_2 = new QLabel(documentPublishingDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        email = new QLineEdit(documentPublishingDialog);
        email->setObjectName(QString::fromUtf8("email"));

        formLayout->setWidget(1, QFormLayout::FieldRole, email);

        label = new QLabel(documentPublishingDialog);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label);

        author = new QLineEdit(documentPublishingDialog);
        author->setObjectName(QString::fromUtf8("author"));

        formLayout->setWidget(2, QFormLayout::FieldRole, author);

        decriptionLabel = new QLabel(documentPublishingDialog);
        decriptionLabel->setObjectName(QString::fromUtf8("decriptionLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, decriptionLabel);

        description = new QPlainTextEdit(documentPublishingDialog);
        description->setObjectName(QString::fromUtf8("description"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(description->sizePolicy().hasHeightForWidth());
        description->setSizePolicy(sizePolicy);
        description->setMinimumSize(QSize(0, 168));

        formLayout->setWidget(3, QFormLayout::FieldRole, description);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(4, QFormLayout::FieldRole, verticalSpacer);

        attachPDF = new QCheckBox(documentPublishingDialog);
        attachPDF->setObjectName(QString::fromUtf8("attachPDF"));

        formLayout->setWidget(5, QFormLayout::FieldRole, attachPDF);

        attachUBZ = new QCheckBox(documentPublishingDialog);
        attachUBZ->setObjectName(QString::fromUtf8("attachUBZ"));

        formLayout->setWidget(6, QFormLayout::FieldRole, attachUBZ);

        videoWarning = new QLabel(documentPublishingDialog);
        videoWarning->setObjectName(QString::fromUtf8("videoWarning"));
        videoWarning->setWordWrap(true);

        formLayout->setWidget(7, QFormLayout::FieldRole, videoWarning);

        dialogButtons = new QDialogButtonBox(documentPublishingDialog);
        dialogButtons->setObjectName(QString::fromUtf8("dialogButtons"));
        dialogButtons->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        formLayout->setWidget(8, QFormLayout::FieldRole, dialogButtons);


        horizontalLayout->addLayout(formLayout);


        retranslateUi(documentPublishingDialog);

        QMetaObject::connectSlotsByName(documentPublishingDialog);
    } // setupUi

    void retranslateUi(QDialog *documentPublishingDialog)
    {
        documentPublishingDialog->setWindowTitle(QApplication::translate("documentPublishingDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        titleLabel->setText(QApplication::translate("documentPublishingDialog", "Title", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("documentPublishingDialog", "E-mail", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("documentPublishingDialog", "Author", 0, QApplication::UnicodeUTF8));
        decriptionLabel->setText(QApplication::translate("documentPublishingDialog", "Description", 0, QApplication::UnicodeUTF8));
        attachPDF->setText(QApplication::translate("documentPublishingDialog", "Attach Downloadable PDF Version", 0, QApplication::UnicodeUTF8));
        attachUBZ->setText(QApplication::translate("documentPublishingDialog", "Attach Downloadable Uniboard File (UBZ)", 0, QApplication::UnicodeUTF8));
        videoWarning->setText(QApplication::translate("documentPublishingDialog", "Warning: This documents contains video, which will not be displayed properly on the Web", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class documentPublishingDialog: public Ui_documentPublishingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WEBPUBLISHING_H
