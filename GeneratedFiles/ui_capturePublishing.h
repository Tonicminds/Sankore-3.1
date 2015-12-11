/********************************************************************************
** Form generated from reading UI file 'capturePublishing.ui'
**
** Created: Fri 6. Nov 10:33:52 2015
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAPTUREPUBLISHING_H
#define UI_CAPTUREPUBLISHING_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
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

class Ui_capturePublishingDialog
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
    QDialogButtonBox *dialogButtons;

    void setupUi(QDialog *capturePublishingDialog)
    {
        if (capturePublishingDialog->objectName().isEmpty())
            capturePublishingDialog->setObjectName(QString::fromUtf8("capturePublishingDialog"));
        capturePublishingDialog->setWindowModality(Qt::WindowModal);
        capturePublishingDialog->resize(607, 362);
        horizontalLayout = new QHBoxLayout(capturePublishingDialog);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        titleLabel = new QLabel(capturePublishingDialog);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, titleLabel);

        title = new QLineEdit(capturePublishingDialog);
        title->setObjectName(QString::fromUtf8("title"));
        title->setMaxLength(60);

        formLayout->setWidget(0, QFormLayout::FieldRole, title);

        label_2 = new QLabel(capturePublishingDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        email = new QLineEdit(capturePublishingDialog);
        email->setObjectName(QString::fromUtf8("email"));

        formLayout->setWidget(1, QFormLayout::FieldRole, email);

        label = new QLabel(capturePublishingDialog);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label);

        author = new QLineEdit(capturePublishingDialog);
        author->setObjectName(QString::fromUtf8("author"));

        formLayout->setWidget(2, QFormLayout::FieldRole, author);

        decriptionLabel = new QLabel(capturePublishingDialog);
        decriptionLabel->setObjectName(QString::fromUtf8("decriptionLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, decriptionLabel);

        description = new QPlainTextEdit(capturePublishingDialog);
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

        dialogButtons = new QDialogButtonBox(capturePublishingDialog);
        dialogButtons->setObjectName(QString::fromUtf8("dialogButtons"));
        dialogButtons->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        formLayout->setWidget(5, QFormLayout::FieldRole, dialogButtons);


        horizontalLayout->addLayout(formLayout);


        retranslateUi(capturePublishingDialog);

        QMetaObject::connectSlotsByName(capturePublishingDialog);
    } // setupUi

    void retranslateUi(QDialog *capturePublishingDialog)
    {
        capturePublishingDialog->setWindowTitle(QApplication::translate("capturePublishingDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        titleLabel->setText(QApplication::translate("capturePublishingDialog", "Title", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("capturePublishingDialog", "E-mail", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("capturePublishingDialog", "Author", 0, QApplication::UnicodeUTF8));
        decriptionLabel->setText(QApplication::translate("capturePublishingDialog", "Description", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class capturePublishingDialog: public Ui_capturePublishingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAPTUREPUBLISHING_H
