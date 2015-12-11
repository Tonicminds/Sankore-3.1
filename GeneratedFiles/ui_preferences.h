/********************************************************************************
** Form generated from reading UI file 'preferences.ui'
**
** Created: Fri 6. Nov 10:33:52 2015
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFERENCES_H
#define UI_PREFERENCES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QTextBrowser>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_preferencesDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *versionLabel;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *defaultSettingsButton;
    QSpacerItem *bottomHSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *closeButton;
    QTabWidget *mainTabWidget;
    QWidget *displayTab;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_10;
    QGroupBox *languageGroupBox;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer_7;
    QVBoxLayout *languageVerticalLayout;
    QHBoxLayout *languageHAlert;
    QLabel *languageLabel;
    QComboBox *languageComboBox;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *alertHLayout;
    QLabel *closeOpenSankoreAlertLabel;
    QPushButton *quitOpenSankorePushButton;
    QGroupBox *startupGroupBox;
    QVBoxLayout *verticalLayout_5;
    QGridLayout *gridLayout_17;
    QSpacerItem *horizontalSpacer_9;
    QCheckBox *startupTipsCheckBox;
    QSpacerItem *verticalSpacer_6;
    QGroupBox *multiDisplayGroupBox;
    QGridLayout *gridLayout_2;
    QCheckBox *displayBrowserPageCheckBox;
    QSpacerItem *mirroringLSpacer;
    QSpacerItem *mirroringRSpacer;
    QCheckBox *swapControlAndDisplayScreensCheckBox;
    QSpacerItem *toolbarSpacer;
    QHBoxLayout *horizontalLayout_12;
    QGroupBox *toolbarGroupBox;
    QGridLayout *gridLayout_9;
    QGridLayout *gridLayout_10;
    QRadioButton *toolbarAtTopRadioButton;
    QRadioButton *toolbarAtBottomRadioButton;
    QSpacerItem *verticalSpacer;
    QSpacerItem *toolbarLSpacer;
    QSpacerItem *toolbarRSpacer;
    QCheckBox *toolbarDisplayTextCheckBox;
    QGroupBox *stylusPaletteGroupBox;
    QGridLayout *gridLayout_14;
    QGridLayout *gridLayout_5;
    QSpacerItem *verticalSpacer_5;
    QRadioButton *horizontalChoice;
    QRadioButton *verticalChoice;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *keyboardSpacer;
    QGroupBox *keyboardGroupBox;
    QGridLayout *gridLayout_13;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout_11;
    QLabel *label_2;
    QComboBox *keyboardPaletteKeyButtonSize;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *modeSpacer;
    QGroupBox *modeGroupBox;
    QGridLayout *gridLayout_15;
    QGridLayout *gridLayout_16;
    QLabel *modeLabel;
    QComboBox *startModeComboBox;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_4;
    QWidget *penTab;
    QGridLayout *gridLayout_4;
    QFrame *penFrame;
    QWidget *markerTab;
    QVBoxLayout *verticalLayout;
    QFrame *markerFrame;
    QWidget *networkTab;
    QGridLayout *gridLayout_6;
    QGroupBox *internetGroupBox;
    QGridLayout *gridLayout_7;
    QGridLayout *gridLayout_8;
    QCheckBox *useExternalBrowserCheckBox;
    QGridLayout *gridLayout_12;
    QLineEdit *webHomePage;
    QLabel *labelHomePage;
    QLabel *label;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *proxyUsername;
    QLabel *label_3;
    QLineEdit *proxyPassword;
    QSpacerItem *internetLSpacer;
    QGroupBox *CommunityGroupBox;
    QGridLayout *gridLayout_18;
    QGridLayout *gridLayout_20;
    QLabel *label_4;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_11;
    QLineEdit *Username_textBox;
    QLabel *label_5;
    QLineEdit *Password_textEdit;
    QSpacerItem *CommunityLSpacer;
    QCheckBox *PSCredentialsPersistenceCheckBox;
    QSpacerItem *verticalSpacer_2;
    QWidget *thirdPartyLicence;
    QVBoxLayout *verticalLayout_3;
    QTextEdit *LicenceWarningTextBrowser;
    QTabWidget *OpenSSLWidget;
    QWidget *OpenSSLTab;
    QHBoxLayout *horizontalLayout_4;
    QPlainTextEdit *OpenSSLTextEdit;
    QWidget *zlibTab;
    QHBoxLayout *horizontalLayout_7;
    QPlainTextEdit *zlibTextEdit;
    QWidget *XpdfTab;
    QHBoxLayout *horizontalLayout_6;
    QPlainTextEdit *XpdfTextEdit;
    QWidget *QuaZIPTab;
    QHBoxLayout *horizontalLayout_3;
    QPlainTextEdit *QuaZIPTextEdit;
    QWidget *sankoreTab;
    QHBoxLayout *horizontalLayout_9;
    QPlainTextEdit *sankoreTextEdit;
    QWidget *aboutTab;
    QVBoxLayout *verticalLayout_2;
    QTextBrowser *copyrightTextBrowser;
    QGroupBox *softwareUpdateGroupBox;
    QCheckBox *checkSoftwareUpdateAtLaunchCheckBox;
    QWidget *creditsTab;
    QVBoxLayout *verticalLayout_31;
    QTextBrowser *credentialTextBrowser;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *preferencesDialog)
    {
        if (preferencesDialog->objectName().isEmpty())
            preferencesDialog->setObjectName(QString::fromUtf8("preferencesDialog"));
        preferencesDialog->resize(829, 694);
        gridLayout = new QGridLayout(preferencesDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        versionLabel = new QLabel(preferencesDialog);
        versionLabel->setObjectName(QString::fromUtf8("versionLabel"));

        gridLayout->addWidget(versionLabel, 0, 0, 1, 1);

        frame = new QFrame(preferencesDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        defaultSettingsButton = new QPushButton(frame);
        defaultSettingsButton->setObjectName(QString::fromUtf8("defaultSettingsButton"));

        horizontalLayout_2->addWidget(defaultSettingsButton);

        bottomHSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(bottomHSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        closeButton = new QPushButton(frame);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setDefault(true);

        horizontalLayout->addWidget(closeButton);


        horizontalLayout_2->addLayout(horizontalLayout);


        gridLayout->addWidget(frame, 3, 0, 1, 1);

        mainTabWidget = new QTabWidget(preferencesDialog);
        mainTabWidget->setObjectName(QString::fromUtf8("mainTabWidget"));
        displayTab = new QWidget();
        displayTab->setObjectName(QString::fromUtf8("displayTab"));
        verticalLayout_4 = new QVBoxLayout(displayTab);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        languageGroupBox = new QGroupBox(displayTab);
        languageGroupBox->setObjectName(QString::fromUtf8("languageGroupBox"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(languageGroupBox->sizePolicy().hasHeightForWidth());
        languageGroupBox->setSizePolicy(sizePolicy);
        gridLayout_3 = new QGridLayout(languageGroupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_7, 0, 0, 1, 1);

        languageVerticalLayout = new QVBoxLayout();
        languageVerticalLayout->setObjectName(QString::fromUtf8("languageVerticalLayout"));
        languageVerticalLayout->setSizeConstraint(QLayout::SetFixedSize);
        languageHAlert = new QHBoxLayout();
        languageHAlert->setObjectName(QString::fromUtf8("languageHAlert"));
        languageLabel = new QLabel(languageGroupBox);
        languageLabel->setObjectName(QString::fromUtf8("languageLabel"));

        languageHAlert->addWidget(languageLabel);

        languageComboBox = new QComboBox(languageGroupBox);
        languageComboBox->setObjectName(QString::fromUtf8("languageComboBox"));
        languageComboBox->setMinimumSize(QSize(200, 0));

        languageHAlert->addWidget(languageComboBox);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        languageHAlert->addItem(horizontalSpacer_8);


        languageVerticalLayout->addLayout(languageHAlert);

        alertHLayout = new QHBoxLayout();
        alertHLayout->setObjectName(QString::fromUtf8("alertHLayout"));
        closeOpenSankoreAlertLabel = new QLabel(languageGroupBox);
        closeOpenSankoreAlertLabel->setObjectName(QString::fromUtf8("closeOpenSankoreAlertLabel"));

        alertHLayout->addWidget(closeOpenSankoreAlertLabel);

        quitOpenSankorePushButton = new QPushButton(languageGroupBox);
        quitOpenSankorePushButton->setObjectName(QString::fromUtf8("quitOpenSankorePushButton"));

        alertHLayout->addWidget(quitOpenSankorePushButton);


        languageVerticalLayout->addLayout(alertHLayout);


        gridLayout_3->addLayout(languageVerticalLayout, 0, 2, 1, 1);


        horizontalLayout_10->addWidget(languageGroupBox);

        startupGroupBox = new QGroupBox(displayTab);
        startupGroupBox->setObjectName(QString::fromUtf8("startupGroupBox"));
        verticalLayout_5 = new QVBoxLayout(startupGroupBox);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        gridLayout_17 = new QGridLayout();
        gridLayout_17->setObjectName(QString::fromUtf8("gridLayout_17"));
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_17->addItem(horizontalSpacer_9, 1, 0, 1, 1);

        startupTipsCheckBox = new QCheckBox(startupGroupBox);
        startupTipsCheckBox->setObjectName(QString::fromUtf8("startupTipsCheckBox"));

        gridLayout_17->addWidget(startupTipsCheckBox, 1, 1, 1, 1);


        verticalLayout_5->addLayout(gridLayout_17);


        horizontalLayout_10->addWidget(startupGroupBox);


        verticalLayout_4->addLayout(horizontalLayout_10);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_6);

        multiDisplayGroupBox = new QGroupBox(displayTab);
        multiDisplayGroupBox->setObjectName(QString::fromUtf8("multiDisplayGroupBox"));
        gridLayout_2 = new QGridLayout(multiDisplayGroupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        displayBrowserPageCheckBox = new QCheckBox(multiDisplayGroupBox);
        displayBrowserPageCheckBox->setObjectName(QString::fromUtf8("displayBrowserPageCheckBox"));

        gridLayout_2->addWidget(displayBrowserPageCheckBox, 0, 1, 1, 1);

        mirroringLSpacer = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_2->addItem(mirroringLSpacer, 0, 0, 1, 1);

        mirroringRSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(mirroringRSpacer, 0, 2, 1, 1);

        swapControlAndDisplayScreensCheckBox = new QCheckBox(multiDisplayGroupBox);
        swapControlAndDisplayScreensCheckBox->setObjectName(QString::fromUtf8("swapControlAndDisplayScreensCheckBox"));

        gridLayout_2->addWidget(swapControlAndDisplayScreensCheckBox, 1, 1, 1, 1);


        verticalLayout_4->addWidget(multiDisplayGroupBox);

        toolbarSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(toolbarSpacer);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        toolbarGroupBox = new QGroupBox(displayTab);
        toolbarGroupBox->setObjectName(QString::fromUtf8("toolbarGroupBox"));
        sizePolicy.setHeightForWidth(toolbarGroupBox->sizePolicy().hasHeightForWidth());
        toolbarGroupBox->setSizePolicy(sizePolicy);
        gridLayout_9 = new QGridLayout(toolbarGroupBox);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        gridLayout_10 = new QGridLayout();
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        toolbarAtTopRadioButton = new QRadioButton(toolbarGroupBox);
        toolbarAtTopRadioButton->setObjectName(QString::fromUtf8("toolbarAtTopRadioButton"));

        gridLayout_10->addWidget(toolbarAtTopRadioButton, 0, 0, 1, 1);

        toolbarAtBottomRadioButton = new QRadioButton(toolbarGroupBox);
        toolbarAtBottomRadioButton->setObjectName(QString::fromUtf8("toolbarAtBottomRadioButton"));

        gridLayout_10->addWidget(toolbarAtBottomRadioButton, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_10->addItem(verticalSpacer, 2, 0, 1, 1);


        gridLayout_9->addLayout(gridLayout_10, 0, 1, 1, 1);

        toolbarLSpacer = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_9->addItem(toolbarLSpacer, 0, 0, 1, 1);

        toolbarRSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_9->addItem(toolbarRSpacer, 0, 2, 1, 1);

        toolbarDisplayTextCheckBox = new QCheckBox(toolbarGroupBox);
        toolbarDisplayTextCheckBox->setObjectName(QString::fromUtf8("toolbarDisplayTextCheckBox"));

        gridLayout_9->addWidget(toolbarDisplayTextCheckBox, 1, 1, 1, 1);


        horizontalLayout_12->addWidget(toolbarGroupBox);

        stylusPaletteGroupBox = new QGroupBox(displayTab);
        stylusPaletteGroupBox->setObjectName(QString::fromUtf8("stylusPaletteGroupBox"));
        stylusPaletteGroupBox->setMinimumSize(QSize(0, 0));
        gridLayout_14 = new QGridLayout(stylusPaletteGroupBox);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        gridLayout_14->setContentsMargins(12, -1, -1, -1);
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_5, 2, 0, 1, 1);

        horizontalChoice = new QRadioButton(stylusPaletteGroupBox);
        horizontalChoice->setObjectName(QString::fromUtf8("horizontalChoice"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(horizontalChoice->sizePolicy().hasHeightForWidth());
        horizontalChoice->setSizePolicy(sizePolicy1);
        horizontalChoice->setMinimumSize(QSize(0, 0));
        horizontalChoice->setChecked(false);

        gridLayout_5->addWidget(horizontalChoice, 0, 0, 1, 1);

        verticalChoice = new QRadioButton(stylusPaletteGroupBox);
        verticalChoice->setObjectName(QString::fromUtf8("verticalChoice"));
        verticalChoice->setChecked(true);

        gridLayout_5->addWidget(verticalChoice, 1, 0, 1, 1);


        gridLayout_14->addLayout(gridLayout_5, 0, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_14->addItem(horizontalSpacer_3, 0, 2, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_14->addItem(horizontalSpacer_4, 0, 0, 1, 1);


        horizontalLayout_12->addWidget(stylusPaletteGroupBox);


        verticalLayout_4->addLayout(horizontalLayout_12);

        keyboardSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(keyboardSpacer);

        keyboardGroupBox = new QGroupBox(displayTab);
        keyboardGroupBox->setObjectName(QString::fromUtf8("keyboardGroupBox"));
        sizePolicy.setHeightForWidth(keyboardGroupBox->sizePolicy().hasHeightForWidth());
        keyboardGroupBox->setSizePolicy(sizePolicy);
        gridLayout_13 = new QGridLayout(keyboardGroupBox);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_13->addItem(horizontalSpacer, 0, 0, 1, 1);

        gridLayout_11 = new QGridLayout();
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        label_2 = new QLabel(keyboardGroupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_11->addWidget(label_2, 0, 0, 1, 1);

        keyboardPaletteKeyButtonSize = new QComboBox(keyboardGroupBox);
        keyboardPaletteKeyButtonSize->setObjectName(QString::fromUtf8("keyboardPaletteKeyButtonSize"));

        gridLayout_11->addWidget(keyboardPaletteKeyButtonSize, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_11->addItem(horizontalSpacer_2, 0, 2, 1, 1);


        gridLayout_13->addLayout(gridLayout_11, 0, 1, 2, 1);


        verticalLayout_4->addWidget(keyboardGroupBox);

        modeSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(modeSpacer);

        modeGroupBox = new QGroupBox(displayTab);
        modeGroupBox->setObjectName(QString::fromUtf8("modeGroupBox"));
        sizePolicy.setHeightForWidth(modeGroupBox->sizePolicy().hasHeightForWidth());
        modeGroupBox->setSizePolicy(sizePolicy);
        gridLayout_15 = new QGridLayout(modeGroupBox);
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        gridLayout_16 = new QGridLayout();
        gridLayout_16->setObjectName(QString::fromUtf8("gridLayout_16"));
        modeLabel = new QLabel(modeGroupBox);
        modeLabel->setObjectName(QString::fromUtf8("modeLabel"));

        gridLayout_16->addWidget(modeLabel, 0, 0, 1, 1);

        startModeComboBox = new QComboBox(modeGroupBox);
        startModeComboBox->setObjectName(QString::fromUtf8("startModeComboBox"));

        gridLayout_16->addWidget(startModeComboBox, 0, 1, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_16->addItem(horizontalSpacer_6, 0, 2, 1, 1);


        gridLayout_15->addLayout(gridLayout_16, 0, 1, 2, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_15->addItem(horizontalSpacer_5, 0, 0, 1, 1);


        verticalLayout_4->addWidget(modeGroupBox);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_4);

        mainTabWidget->addTab(displayTab, QString());
        penTab = new QWidget();
        penTab->setObjectName(QString::fromUtf8("penTab"));
        gridLayout_4 = new QGridLayout(penTab);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        penFrame = new QFrame(penTab);
        penFrame->setObjectName(QString::fromUtf8("penFrame"));
        penFrame->setFrameShape(QFrame::NoFrame);
        penFrame->setFrameShadow(QFrame::Raised);

        gridLayout_4->addWidget(penFrame, 0, 0, 1, 2);

        mainTabWidget->addTab(penTab, QString());
        markerTab = new QWidget();
        markerTab->setObjectName(QString::fromUtf8("markerTab"));
        verticalLayout = new QVBoxLayout(markerTab);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        markerFrame = new QFrame(markerTab);
        markerFrame->setObjectName(QString::fromUtf8("markerFrame"));
        markerFrame->setFrameShape(QFrame::NoFrame);
        markerFrame->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(markerFrame);

        mainTabWidget->addTab(markerTab, QString());
        networkTab = new QWidget();
        networkTab->setObjectName(QString::fromUtf8("networkTab"));
        gridLayout_6 = new QGridLayout(networkTab);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        internetGroupBox = new QGroupBox(networkTab);
        internetGroupBox->setObjectName(QString::fromUtf8("internetGroupBox"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(internetGroupBox->sizePolicy().hasHeightForWidth());
        internetGroupBox->setSizePolicy(sizePolicy2);
        gridLayout_7 = new QGridLayout(internetGroupBox);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_8 = new QGridLayout();
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        useExternalBrowserCheckBox = new QCheckBox(internetGroupBox);
        useExternalBrowserCheckBox->setObjectName(QString::fromUtf8("useExternalBrowserCheckBox"));

        gridLayout_8->addWidget(useExternalBrowserCheckBox, 0, 0, 1, 1);


        gridLayout_7->addLayout(gridLayout_8, 0, 1, 1, 1);

        gridLayout_12 = new QGridLayout();
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        webHomePage = new QLineEdit(internetGroupBox);
        webHomePage->setObjectName(QString::fromUtf8("webHomePage"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(webHomePage->sizePolicy().hasHeightForWidth());
        webHomePage->setSizePolicy(sizePolicy3);

        gridLayout_12->addWidget(webHomePage, 0, 1, 1, 1);

        labelHomePage = new QLabel(internetGroupBox);
        labelHomePage->setObjectName(QString::fromUtf8("labelHomePage"));

        gridLayout_12->addWidget(labelHomePage, 0, 0, 1, 1);

        label = new QLabel(internetGroupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_12->addWidget(label, 1, 0, 1, 1);

        widget = new QWidget(internetGroupBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout_5 = new QHBoxLayout(widget);
        horizontalLayout_5->setSpacing(5);
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        proxyUsername = new QLineEdit(widget);
        proxyUsername->setObjectName(QString::fromUtf8("proxyUsername"));

        horizontalLayout_5->addWidget(proxyUsername);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_5->addWidget(label_3);

        proxyPassword = new QLineEdit(widget);
        proxyPassword->setObjectName(QString::fromUtf8("proxyPassword"));
        proxyPassword->setEchoMode(QLineEdit::Password);

        horizontalLayout_5->addWidget(proxyPassword);


        gridLayout_12->addWidget(widget, 1, 1, 1, 1);


        gridLayout_7->addLayout(gridLayout_12, 3, 1, 1, 1);

        internetLSpacer = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_7->addItem(internetLSpacer, 0, 0, 1, 1);


        gridLayout_6->addWidget(internetGroupBox, 0, 0, 1, 1);

        CommunityGroupBox = new QGroupBox(networkTab);
        CommunityGroupBox->setObjectName(QString::fromUtf8("CommunityGroupBox"));
        sizePolicy2.setHeightForWidth(CommunityGroupBox->sizePolicy().hasHeightForWidth());
        CommunityGroupBox->setSizePolicy(sizePolicy2);
        gridLayout_18 = new QGridLayout(CommunityGroupBox);
        gridLayout_18->setObjectName(QString::fromUtf8("gridLayout_18"));
        gridLayout_20 = new QGridLayout();
        gridLayout_20->setObjectName(QString::fromUtf8("gridLayout_20"));
        label_4 = new QLabel(CommunityGroupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_20->addWidget(label_4, 0, 0, 1, 1);

        widget_3 = new QWidget(CommunityGroupBox);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout_11 = new QHBoxLayout(widget_3);
        horizontalLayout_11->setSpacing(5);
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        Username_textBox = new QLineEdit(widget_3);
        Username_textBox->setObjectName(QString::fromUtf8("Username_textBox"));
        Username_textBox->setEchoMode(QLineEdit::Normal);

        horizontalLayout_11->addWidget(Username_textBox);

        label_5 = new QLabel(widget_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_11->addWidget(label_5);

        Password_textEdit = new QLineEdit(widget_3);
        Password_textEdit->setObjectName(QString::fromUtf8("Password_textEdit"));
        Password_textEdit->setEchoMode(QLineEdit::Password);

        horizontalLayout_11->addWidget(Password_textEdit);


        gridLayout_20->addWidget(widget_3, 0, 1, 1, 1);


        gridLayout_18->addLayout(gridLayout_20, 2, 1, 1, 1);

        CommunityLSpacer = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_18->addItem(CommunityLSpacer, 2, 0, 1, 1);

        PSCredentialsPersistenceCheckBox = new QCheckBox(CommunityGroupBox);
        PSCredentialsPersistenceCheckBox->setObjectName(QString::fromUtf8("PSCredentialsPersistenceCheckBox"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(PSCredentialsPersistenceCheckBox->sizePolicy().hasHeightForWidth());
        PSCredentialsPersistenceCheckBox->setSizePolicy(sizePolicy4);
        PSCredentialsPersistenceCheckBox->setChecked(true);

        gridLayout_18->addWidget(PSCredentialsPersistenceCheckBox, 3, 1, 1, 1);


        gridLayout_6->addWidget(CommunityGroupBox, 2, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_2, 3, 0, 1, 1);

        mainTabWidget->addTab(networkTab, QString());
        thirdPartyLicence = new QWidget();
        thirdPartyLicence->setObjectName(QString::fromUtf8("thirdPartyLicence"));
        thirdPartyLicence->setEnabled(true);
        verticalLayout_3 = new QVBoxLayout(thirdPartyLicence);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        LicenceWarningTextBrowser = new QTextEdit(thirdPartyLicence);
        LicenceWarningTextBrowser->setObjectName(QString::fromUtf8("LicenceWarningTextBrowser"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(LicenceWarningTextBrowser->sizePolicy().hasHeightForWidth());
        LicenceWarningTextBrowser->setSizePolicy(sizePolicy5);
        LicenceWarningTextBrowser->setMaximumSize(QSize(16777215, 55));
        LicenceWarningTextBrowser->setAcceptDrops(false);
#ifndef QT_NO_TOOLTIP
        LicenceWarningTextBrowser->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        LicenceWarningTextBrowser->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
        LicenceWarningTextBrowser->setUndoRedoEnabled(false);
        LicenceWarningTextBrowser->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_3->addWidget(LicenceWarningTextBrowser);

        OpenSSLWidget = new QTabWidget(thirdPartyLicence);
        OpenSSLWidget->setObjectName(QString::fromUtf8("OpenSSLWidget"));
        QSizePolicy sizePolicy6(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(1);
        sizePolicy6.setHeightForWidth(OpenSSLWidget->sizePolicy().hasHeightForWidth());
        OpenSSLWidget->setSizePolicy(sizePolicy6);
        OpenSSLTab = new QWidget();
        OpenSSLTab->setObjectName(QString::fromUtf8("OpenSSLTab"));
        horizontalLayout_4 = new QHBoxLayout(OpenSSLTab);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        OpenSSLTextEdit = new QPlainTextEdit(OpenSSLTab);
        OpenSSLTextEdit->setObjectName(QString::fromUtf8("OpenSSLTextEdit"));
        OpenSSLTextEdit->setAcceptDrops(false);
        OpenSSLTextEdit->setDocumentTitle(QString::fromUtf8(""));
        OpenSSLTextEdit->setUndoRedoEnabled(false);
        OpenSSLTextEdit->setPlainText(QString::fromUtf8("  LICENSE ISSUES\n"
"  ==============\n"
"\n"
"  The OpenSSL toolkit stays under a dual license, i.e. both the conditions of\n"
"  the OpenSSL License and the original SSLeay license apply to the toolkit.\n"
"  See below for the actual license texts. Actually both licenses are BSD-style\n"
"  Open Source licenses. In case of any license issues related to OpenSSL\n"
"  please contact openssl-core@openssl.org.\n"
"\n"
"  OpenSSL License\n"
"  ---------------\n"
"\n"
"/* ====================================================================\n"
" * Copyright (c) 1998-2004 The OpenSSL Project.  All rights reserved.\n"
" *\n"
" * Redistribution and use in source and binary forms, with or without\n"
" * modification, are permitted provided that the following conditions\n"
" * are met:\n"
" *\n"
" * 1. Redistributions of source code must retain the above copyright\n"
" *    notice, this list of conditions and the following disclaimer.\n"
" *\n"
" * 2. Redistributions in binary form must reproduce the above copyright\n"
""
                        " *    notice, this list of conditions and the following disclaimer in\n"
" *    the documentation and/or other materials provided with the\n"
" *    distribution.\n"
" *\n"
" * 3. All advertising materials mentioning features or use of this\n"
" *    software must display the following acknowledgment:\n"
" *    \"This product includes software developed by the OpenSSL Project\n"
" *    for use in the OpenSSL Toolkit. (http://www.openssl.org/)\"\n"
" *\n"
" * 4. The names \"OpenSSL Toolkit\" and \"OpenSSL Project\" must not be used to\n"
" *    endorse or promote products derived from this software without\n"
" *    prior written permission. For written permission, please contact\n"
" *    openssl-core@openssl.org.\n"
" *\n"
" * 5. Products derived from this software may not be called \"OpenSSL\"\n"
" *    nor may \"OpenSSL\" appear in their names without prior written\n"
" *    permission of the OpenSSL Project.\n"
" *\n"
" * 6. Redistributions of any form whatsoever must retain the following\n"
" *    acknowl"
                        "edgment:\n"
" *    \"This product includes software developed by the OpenSSL Project\n"
" *    for use in the OpenSSL Toolkit (http://www.openssl.org/)\"\n"
" *\n"
" * THIS SOFTWARE IS PROVIDED BY THE OpenSSL PROJECT ``AS IS'' AND ANY\n"
" * EXPRESSED OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE\n"
" * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR\n"
" * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE OpenSSL PROJECT OR\n"
" * ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,\n"
" * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT\n"
" * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;\n"
" * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)\n"
" * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,\n"
" * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)\n"
" * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED\n"
" * OF THE POSSIBILITY OF SUCH DAMAGE.\n"
" * ============================"
                        "========================================\n"
" *\n"
" * This product includes cryptographic software written by Eric Young\n"
" * (eay@cryptsoft.com).  This product includes software written by Tim\n"
" * Hudson (tjh@cryptsoft.com).\n"
" *\n"
" */\n"
"\n"
" Original SSLeay License\n"
" -----------------------\n"
"\n"
"/* Copyright (C) 1995-1998 Eric Young (eay@cryptsoft.com)\n"
" * All rights reserved.\n"
" *\n"
" * This package is an SSL implementation written\n"
" * by Eric Young (eay@cryptsoft.com).\n"
" * The implementation was written so as to conform with Netscapes SSL.\n"
" *\n"
" * This library is free for commercial and non-commercial use as long as\n"
" * the following conditions are aheared to.  The following conditions\n"
" * apply to all code found in this distribution, be it the RC4, RSA,\n"
" * lhash, DES, etc., code; not just the SSL code.  The SSL documentation\n"
" * included with this distribution is covered by the same copyright terms\n"
" * except that the holder is Tim Hudson (tjh@cryptsof"
                        "t.com).\n"
" *\n"
" * Copyright remains Eric Young's, and as such any Copyright notices in\n"
" * the code are not to be removed.\n"
" * If this package is used in a product, Eric Young should be given attribution\n"
" * as the author of the parts of the library used.\n"
" * This can be in the form of a textual message at program startup or\n"
" * in documentation (online or textual) provided with the package.\n"
" *\n"
" * Redistribution and use in source and binary forms, with or without\n"
" * modification, are permitted provided that the following conditions\n"
" * are met:\n"
" * 1. Redistributions of source code must retain the copyright\n"
" *    notice, this list of conditions and the following disclaimer.\n"
" * 2. Redistributions in binary form must reproduce the above copyright\n"
" *    notice, this list of conditions and the following disclaimer in the\n"
" *    documentation and/or other materials provided with the distribution.\n"
" * 3. All advertising materials mentioning features or use of th"
                        "is software\n"
" *    must display the following acknowledgement:\n"
" *    \"This product includes cryptographic software written by\n"
" *     Eric Young (eay@cryptsoft.com)\"\n"
" *    The word 'cryptographic' can be left out if the rouines from the library\n"
" *    being used are not cryptographic related :-).\n"
" * 4. If you include any Windows specific code (or a derivative thereof) from\n"
" *    the apps directory (application code) you must include an acknowledgement:\n"
" *    \"This product includes software written by Tim Hudson (tjh@cryptsoft.com)\"\n"
" *\n"
" * THIS SOFTWARE IS PROVIDED BY ERIC YOUNG ``AS IS'' AND\n"
" * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE\n"
" * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE\n"
" * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE\n"
" * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL\n"
" * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBS"
                        "TITUTE GOODS\n"
" * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)\n"
" * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT\n"
" * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY\n"
" * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF\n"
" * SUCH DAMAGE.\n"
" *\n"
" * The licence and distribution terms for any publically available version or\n"
" * derivative of this code cannot be changed.  i.e. this code cannot simply be\n"
" * copied and put under another distribution licence\n"
" * [including the GNU Public Licence.]\n"
" */"));
        OpenSSLTextEdit->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayout_4->addWidget(OpenSSLTextEdit);

        OpenSSLWidget->addTab(OpenSSLTab, QString());
        zlibTab = new QWidget();
        zlibTab->setObjectName(QString::fromUtf8("zlibTab"));
        horizontalLayout_7 = new QHBoxLayout(zlibTab);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        zlibTextEdit = new QPlainTextEdit(zlibTab);
        zlibTextEdit->setObjectName(QString::fromUtf8("zlibTextEdit"));
        zlibTextEdit->setAcceptDrops(false);
        zlibTextEdit->setDocumentTitle(QString::fromUtf8(""));
        zlibTextEdit->setUndoRedoEnabled(false);
        zlibTextEdit->setPlainText(QString::fromUtf8("Copyright (C) 1995-1998 Jean-loup Gailly and Mark Adler\n"
"\n"
"This software is provided 'as-is', without any express or implied\n"
"warranty.  In no event will the authors be held liable for any damages\n"
"arising from the use of this software.\n"
"\n"
"Permission is granted to anyone to use this software for any purpose,\n"
"including commercial applications, and to alter it and redistribute it\n"
"freely, subject to the following restrictions:\n"
"\n"
"1. The origin of this software must not be misrepresented; you must not\n"
"   claim that you wrote the original software. If you use this software\n"
"   in a product, an acknowledgment in the product documentation would be\n"
"   appreciated but is not required.\n"
"2. Altered source versions must be plainly marked as such, and must not be\n"
"   misrepresented as being the original software.\n"
"3. This notice may not be removed or altered from any source distribution.\n"
"\n"
"Jean-loup Gailly        Mark Adler\n"
"jloup@gzip.org          madler@alumni"
                        ".caltech.edu"));
        zlibTextEdit->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayout_7->addWidget(zlibTextEdit);

        OpenSSLWidget->addTab(zlibTab, QString());
        XpdfTab = new QWidget();
        XpdfTab->setObjectName(QString::fromUtf8("XpdfTab"));
        horizontalLayout_6 = new QHBoxLayout(XpdfTab);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        XpdfTextEdit = new QPlainTextEdit(XpdfTab);
        XpdfTextEdit->setObjectName(QString::fromUtf8("XpdfTextEdit"));
        XpdfTextEdit->setAcceptDrops(false);
        XpdfTextEdit->setDocumentTitle(QString::fromUtf8(""));
        XpdfTextEdit->setUndoRedoEnabled(false);
        XpdfTextEdit->setPlainText(QString::fromUtf8("Copyright (C) 1996-2011 Glyph & Cog, LLC.\n"
"\n"
"Xpdf is licensed under the GNU General Public License (GPL), version 2\n"
"or 3.  This means that you can distribute derivatives of Xpdf under\n"
"any of the following:\n"
"  - GPL v2 only\n"
"  - GPL v3 only\n"
"  - GPL v2 or v3\n"
"\n"
"Here is the full text of the GNU General Public License version 3.\n"
"\n"
"--8<---------------cut here---------------start------------->8---\n"
"                    GNU GENERAL PUBLIC LICENSE\n"
"                       Version 3, 29 June 2007\n"
"\n"
" Copyright (C) 2007 Free Software Foundation, Inc. <http://fsf.org/>\n"
" Everyone is permitted to copy and distribute verbatim copies\n"
" of this license document, but changing it is not allowed.\n"
"\n"
"                            Preamble\n"
"\n"
"  The GNU General Public License is a free, copyleft license for\n"
"software and other kinds of works.\n"
"\n"
"  The licenses for most software and other practical works are designed\n"
"to take away your freedom to share and c"
                        "hange the works.  By contrast,\n"
"the GNU General Public License is intended to guarantee your freedom to\n"
"share and change all versions of a program--to make sure it remains free\n"
"software for all its users.  We, the Free Software Foundation, use the\n"
"GNU General Public License for most of our software; it applies also to\n"
"any other work released this way by its authors.  You can apply it to\n"
"your programs, too.\n"
"\n"
"  When we speak of free software, we are referring to freedom, not\n"
"price.  Our General Public Licenses are designed to make sure that you\n"
"have the freedom to distribute copies of free software (and charge for\n"
"them if you wish), that you receive source code or can get it if you\n"
"want it, that you can change the software or use pieces of it in new\n"
"free programs, and that you know you can do these things.\n"
"\n"
"  To protect your rights, we need to prevent others from denying you\n"
"these rights or asking you to surrender the rights.  Therefore, you have\n"
""
                        "certain responsibilities if you distribute copies of the software, or if\n"
"you modify it: responsibilities to respect the freedom of others.\n"
"\n"
"  For example, if you distribute copies of such a program, whether\n"
"gratis or for a fee, you must pass on to the recipients the same\n"
"freedoms that you received.  You must make sure that they, too, receive\n"
"or can get the source code.  And you must show them these terms so they\n"
"know their rights.\n"
"\n"
"  Developers that use the GNU GPL protect your rights with two steps:\n"
"(1) assert copyright on the software, and (2) offer you this License\n"
"giving you legal permission to copy, distribute and/or modify it.\n"
"\n"
"  For the developers' and authors' protection, the GPL clearly explains\n"
"that there is no warranty for this free software.  For both users' and\n"
"authors' sake, the GPL requires that modified versions be marked as\n"
"changed, so that their problems will not be attributed erroneously to\n"
"authors of previous versions.\n"
""
                        "\n"
"  Some devices are designed to deny users access to install or run\n"
"modified versions of the software inside them, although the manufacturer\n"
"can do so.  This is fundamentally incompatible with the aim of\n"
"protecting users' freedom to change the software.  The systematic\n"
"pattern of such abuse occurs in the area of products for individuals to\n"
"use, which is precisely where it is most unacceptable.  Therefore, we\n"
"have designed this version of the GPL to prohibit the practice for those\n"
"products.  If such problems arise substantially in other domains, we\n"
"stand ready to extend this provision to those domains in future versions\n"
"of the GPL, as needed to protect the freedom of users.\n"
"\n"
"  Finally, every program is threatened constantly by software patents.\n"
"States should not allow patents to restrict development and use of\n"
"software on general-purpose computers, but in those that do, we wish to\n"
"avoid the special danger that patents applied to a free program could\n"
""
                        "make it effectively proprietary.  To prevent this, the GPL assures that\n"
"patents cannot be used to render the program non-free.\n"
"\n"
"  The precise terms and conditions for copying, distribution and\n"
"modification follow.\n"
"\n"
"                       TERMS AND CONDITIONS\n"
"\n"
"  0. Definitions.\n"
"\n"
"  \"This License\" refers to version 3 of the GNU General Public License.\n"
"\n"
"  \"Copyright\" also means copyright-like laws that apply to other kinds of\n"
"works, such as semiconductor masks.\n"
"\n"
"  \"The Program\" refers to any copyrightable work licensed under this\n"
"License.  Each licensee is addressed as \"you\".  \"Licensees\" and\n"
"\"recipients\" may be individuals or organizations.\n"
"\n"
"  To \"modify\" a work means to copy from or adapt all or part of the work\n"
"in a fashion requiring copyright permission, other than the making of an\n"
"exact copy.  The resulting work is called a \"modified version\" of the\n"
"earlier work or a work \"based on\" the earlier work.\n"
""
                        "\n"
"  A \"covered work\" means either the unmodified Program or a work based\n"
"on the Program.\n"
"\n"
"  To \"propagate\" a work means to do anything with it that, without\n"
"permission, would make you directly or secondarily liable for\n"
"infringement under applicable copyright law, except executing it on a\n"
"computer or modifying a private copy.  Propagation includes copying,\n"
"distribution (with or without modification), making available to the\n"
"public, and in some countries other activities as well.\n"
"\n"
"  To \"convey\" a work means any kind of propagation that enables other\n"
"parties to make or receive copies.  Mere interaction with a user through\n"
"a computer network, with no transfer of a copy, is not conveying.\n"
"\n"
"  An interactive user interface displays \"Appropriate Legal Notices\"\n"
"to the extent that it includes a convenient and prominently visible\n"
"feature that (1) displays an appropriate copyright notice, and (2)\n"
"tells the user that there is no warranty for the"
                        " work (except to the\n"
"extent that warranties are provided), that licensees may convey the\n"
"work under this License, and how to view a copy of this License.  If\n"
"the interface presents a list of user commands or options, such as a\n"
"menu, a prominent item in the list meets this criterion.\n"
"\n"
"  1. Source Code.\n"
"\n"
"  The \"source code\" for a work means the preferred form of the work\n"
"for making modifications to it.  \"Object code\" means any non-source\n"
"form of a work.\n"
"\n"
"  A \"Standard Interface\" means an interface that either is an official\n"
"standard defined by a recognized standards body, or, in the case of\n"
"interfaces specified for a particular programming language, one that\n"
"is widely used among developers working in that language.\n"
"\n"
"  The \"System Libraries\" of an executable work include anything, other\n"
"than the work as a whole, that (a) is included in the normal form of\n"
"packaging a Major Component, but which is not part of that Major\n"
"Componen"
                        "t, and (b) serves only to enable use of the work with that\n"
"Major Component, or to implement a Standard Interface for which an\n"
"implementation is available to the public in source code form.  A\n"
"\"Major Component\", in this context, means a major essential component\n"
"(kernel, window system, and so on) of the specific operating system\n"
"(if any) on which the executable work runs, or a compiler used to\n"
"produce the work, or an object code interpreter used to run it.\n"
"\n"
"  The \"Corresponding Source\" for a work in object code form means all\n"
"the source code needed to generate, install, and (for an executable\n"
"work) run the object code and to modify the work, including scripts to\n"
"control those activities.  However, it does not include the work's\n"
"System Libraries, or general-purpose tools or generally available free\n"
"programs which are used unmodified in performing those activities but\n"
"which are not part of the work.  For example, Corresponding Source\n"
"includes interfa"
                        "ce definition files associated with source files for\n"
"the work, and the source code for shared libraries and dynamically\n"
"linked subprograms that the work is specifically designed to require,\n"
"such as by intimate data communication or control flow between those\n"
"subprograms and other parts of the work.\n"
"\n"
"  The Corresponding Source need not include anything that users\n"
"can regenerate automatically from other parts of the Corresponding\n"
"Source.\n"
"\n"
"  The Corresponding Source for a work in source code form is that\n"
"same work.\n"
"\n"
"  2. Basic Permissions.\n"
"\n"
"  All rights granted under this License are granted for the term of\n"
"copyright on the Program, and are irrevocable provided the stated\n"
"conditions are met.  This License explicitly affirms your unlimited\n"
"permission to run the unmodified Program.  The output from running a\n"
"covered work is covered by this License only if the output, given its\n"
"content, constitutes a covered work.  This License acknowled"
                        "ges your\n"
"rights of fair use or other equivalent, as provided by copyright law.\n"
"\n"
"  You may make, run and propagate covered works that you do not\n"
"convey, without conditions so long as your license otherwise remains\n"
"in force.  You may convey covered works to others for the sole purpose\n"
"of having them make modifications exclusively for you, or provide you\n"
"with facilities for running those works, provided that you comply with\n"
"the terms of this License in conveying all material for which you do\n"
"not control copyright.  Those thus making or running the covered works\n"
"for you must do so exclusively on your behalf, under your direction\n"
"and control, on terms that prohibit them from making any copies of\n"
"your copyrighted material outside their relationship with you.\n"
"\n"
"  Conveying under any other circumstances is permitted solely under\n"
"the conditions stated below.  Sublicensing is not allowed; section 10\n"
"makes it unnecessary.\n"
"\n"
"  3. Protecting Users' Legal"
                        " Rights From Anti-Circumvention Law.\n"
"\n"
"  No covered work shall be deemed part of an effective technological\n"
"measure under any applicable law fulfilling obligations under article\n"
"11 of the WIPO copyright treaty adopted on 20 December 1996, or\n"
"similar laws prohibiting or restricting circumvention of such\n"
"measures.\n"
"\n"
"  When you convey a covered work, you waive any legal power to forbid\n"
"circumvention of technological measures to the extent such circumvention\n"
"is effected by exercising rights under this License with respect to\n"
"the covered work, and you disclaim any intention to limit operation or\n"
"modification of the work as a means of enforcing, against the work's\n"
"users, your or third parties' legal rights to forbid circumvention of\n"
"technological measures.\n"
"\n"
"  4. Conveying Verbatim Copies.\n"
"\n"
"  You may convey verbatim copies of the Program's source code as you\n"
"receive it, in any medium, provided that you conspicuously and\n"
"appropriately publis"
                        "h on each copy an appropriate copyright notice;\n"
"keep intact all notices stating that this License and any\n"
"non-permissive terms added in accord with section 7 apply to the code;\n"
"keep intact all notices of the absence of any warranty; and give all\n"
"recipients a copy of this License along with the Program.\n"
"\n"
"  You may charge any price or no price for each copy that you convey,\n"
"and you may offer support or warranty protection for a fee.\n"
"\n"
"  5. Conveying Modified Source Versions.\n"
"\n"
"  You may convey a work based on the Program, or the modifications to\n"
"produce it from the Program, in the form of source code under the\n"
"terms of section 4, provided that you also meet all of these conditions:\n"
"\n"
"    a) The work must carry prominent notices stating that you modified\n"
"    it, and giving a relevant date.\n"
"\n"
"    b) The work must carry prominent notices stating that it is\n"
"    released under this License and any conditions added under section\n"
"    7.  This r"
                        "equirement modifies the requirement in section 4 to\n"
"    \"keep intact all notices\".\n"
"\n"
"    c) You must license the entire work, as a whole, under this\n"
"    License to anyone who comes into possession of a copy.  This\n"
"    License will therefore apply, along with any applicable section 7\n"
"    additional terms, to the whole of the work, and all its parts,\n"
"    regardless of how they are packaged.  This License gives no\n"
"    permission to license the work in any other way, but it does not\n"
"    invalidate such permission if you have separately received it.\n"
"\n"
"    d) If the work has interactive user interfaces, each must display\n"
"    Appropriate Legal Notices; however, if the Program has interactive\n"
"    interfaces that do not display Appropriate Legal Notices, your\n"
"    work need not make them do so.\n"
"\n"
"  A compilation of a covered work with other separate and independent\n"
"works, which are not by their nature extensions of the covered work,\n"
"and which are not"
                        " combined with it such as to form a larger program,\n"
"in or on a volume of a storage or distribution medium, is called an\n"
"\"aggregate\" if the compilation and its resulting copyright are not\n"
"used to limit the access or legal rights of the compilation's users\n"
"beyond what the individual works permit.  Inclusion of a covered work\n"
"in an aggregate does not cause this License to apply to the other\n"
"parts of the aggregate.\n"
"\n"
"  6. Conveying Non-Source Forms.\n"
"\n"
"  You may convey a covered work in object code form under the terms\n"
"of sections 4 and 5, provided that you also convey the\n"
"machine-readable Corresponding Source under the terms of this License,\n"
"in one of these ways:\n"
"\n"
"    a) Convey the object code in, or embodied in, a physical product\n"
"    (including a physical distribution medium), accompanied by the\n"
"    Corresponding Source fixed on a durable physical medium\n"
"    customarily used for software interchange.\n"
"\n"
"    b) Convey the object code in"
                        ", or embodied in, a physical product\n"
"    (including a physical distribution medium), accompanied by a\n"
"    written offer, valid for at least three years and valid for as\n"
"    long as you offer spare parts or customer support for that product\n"
"    model, to give anyone who possesses the object code either (1) a\n"
"    copy of the Corresponding Source for all the software in the\n"
"    product that is covered by this License, on a durable physical\n"
"    medium customarily used for software interchange, for a price no\n"
"    more than your reasonable cost of physically performing this\n"
"    conveying of source, or (2) access to copy the\n"
"    Corresponding Source from a network server at no charge.\n"
"\n"
"    c) Convey individual copies of the object code with a copy of the\n"
"    written offer to provide the Corresponding Source.  This\n"
"    alternative is allowed only occasionally and noncommercially, and\n"
"    only if you received the object code with such an offer, in accord\n"
" "
                        "   with subsection 6b.\n"
"\n"
"    d) Convey the object code by offering access from a designated\n"
"    place (gratis or for a charge), and offer equivalent access to the\n"
"    Corresponding Source in the same way through the same place at no\n"
"    further charge.  You need not require recipients to copy the\n"
"    Corresponding Source along with the object code.  If the place to\n"
"    copy the object code is a network server, the Corresponding Source\n"
"    may be on a different server (operated by you or a third party)\n"
"    that supports equivalent copying facilities, provided you maintain\n"
"    clear directions next to the object code saying where to find the\n"
"    Corresponding Source.  Regardless of what server hosts the\n"
"    Corresponding Source, you remain obligated to ensure that it is\n"
"    available for as long as needed to satisfy these requirements.\n"
"\n"
"    e) Convey the object code using peer-to-peer transmission, provided\n"
"    you inform other peers where the object"
                        " code and Corresponding\n"
"    Source of the work are being offered to the general public at no\n"
"    charge under subsection 6d.\n"
"\n"
"  A separable portion of the object code, whose source code is excluded\n"
"from the Corresponding Source as a System Library, need not be\n"
"included in conveying the object code work.\n"
"\n"
"  A \"User Product\" is either (1) a \"consumer product\", which means any\n"
"tangible personal property which is normally used for personal, family,\n"
"or household purposes, or (2) anything designed or sold for incorporation\n"
"into a dwelling.  In determining whether a product is a consumer product,\n"
"doubtful cases shall be resolved in favor of coverage.  For a particular\n"
"product received by a particular user, \"normally used\" refers to a\n"
"typical or common use of that class of product, regardless of the status\n"
"of the particular user or of the way in which the particular user\n"
"actually uses, or expects or is expected to use, the product.  A product\n"
"is"
                        " a consumer product regardless of whether the product has substantial\n"
"commercial, industrial or non-consumer uses, unless such uses represent\n"
"the only significant mode of use of the product.\n"
"\n"
"  \"Installation Information\" for a User Product means any methods,\n"
"procedures, authorization keys, or other information required to install\n"
"and execute modified versions of a covered work in that User Product from\n"
"a modified version of its Corresponding Source.  The information must\n"
"suffice to ensure that the continued functioning of the modified object\n"
"code is in no case prevented or interfered with solely because\n"
"modification has been made.\n"
"\n"
"  If you convey an object code work under this section in, or with, or\n"
"specifically for use in, a User Product, and the conveying occurs as\n"
"part of a transaction in which the right of possession and use of the\n"
"User Product is transferred to the recipient in perpetuity or for a\n"
"fixed term (regardless of how the transac"
                        "tion is characterized), the\n"
"Corresponding Source conveyed under this section must be accompanied\n"
"by the Installation Information.  But this requirement does not apply\n"
"if neither you nor any third party retains the ability to install\n"
"modified object code on the User Product (for example, the work has\n"
"been installed in ROM).\n"
"\n"
"  The requirement to provide Installation Information does not include a\n"
"requirement to continue to provide support service, warranty, or updates\n"
"for a work that has been modified or installed by the recipient, or for\n"
"the User Product in which it has been modified or installed.  Access to a\n"
"network may be denied when the modification itself materially and\n"
"adversely affects the operation of the network or violates the rules and\n"
"protocols for communication across the network.\n"
"\n"
"  Corresponding Source conveyed, and Installation Information provided,\n"
"in accord with this section must be in a format that is publicly\n"
"documented (an"
                        "d with an implementation available to the public in\n"
"source code form), and must require no special password or key for\n"
"unpacking, reading or copying.\n"
"\n"
"  7. Additional Terms.\n"
"\n"
"  \"Additional permissions\" are terms that supplement the terms of this\n"
"License by making exceptions from one or more of its conditions.\n"
"Additional permissions that are applicable to the entire Program shall\n"
"be treated as though they were included in this License, to the extent\n"
"that they are valid under applicable law.  If additional permissions\n"
"apply only to part of the Program, that part may be used separately\n"
"under those permissions, but the entire Program remains governed by\n"
"this License without regard to the additional permissions.\n"
"\n"
"  When you convey a copy of a covered work, you may at your option\n"
"remove any additional permissions from that copy, or from any part of\n"
"it.  (Additional permissions may be written to require their own\n"
"removal in certain cases when y"
                        "ou modify the work.)  You may place\n"
"additional permissions on material, added by you to a covered work,\n"
"for which you have or can give appropriate copyright permission.\n"
"\n"
"  Notwithstanding any other provision of this License, for material you\n"
"add to a covered work, you may (if authorized by the copyright holders of\n"
"that material) supplement the terms of this License with terms:\n"
"\n"
"    a) Disclaiming warranty or limiting liability differently from the\n"
"    terms of sections 15 and 16 of this License; or\n"
"\n"
"    b) Requiring preservation of specified reasonable legal notices or\n"
"    author attributions in that material or in the Appropriate Legal\n"
"    Notices displayed by works containing it; or\n"
"\n"
"    c) Prohibiting misrepresentation of the origin of that material, or\n"
"    requiring that modified versions of such material be marked in\n"
"    reasonable ways as different from the original version; or\n"
"\n"
"    d) Limiting the use for publicity purposes of n"
                        "ames of licensors or\n"
"    authors of the material; or\n"
"\n"
"    e) Declining to grant rights under trademark law for use of some\n"
"    trade names, trademarks, or service marks; or\n"
"\n"
"    f) Requiring indemnification of licensors and authors of that\n"
"    material by anyone who conveys the material (or modified versions of\n"
"    it) with contractual assumptions of liability to the recipient, for\n"
"    any liability that these contractual assumptions directly impose on\n"
"    those licensors and authors.\n"
"\n"
"  All other non-permissive additional terms are considered \"further\n"
"restrictions\" within the meaning of section 10.  If the Program as you\n"
"received it, or any part of it, contains a notice stating that it is\n"
"governed by this License along with a term that is a further\n"
"restriction, you may remove that term.  If a license document contains\n"
"a further restriction but permits relicensing or conveying under this\n"
"License, you may add to a covered work material go"
                        "verned by the terms\n"
"of that license document, provided that the further restriction does\n"
"not survive such relicensing or conveying.\n"
"\n"
"  If you add terms to a covered work in accord with this section, you\n"
"must place, in the relevant source files, a statement of the\n"
"additional terms that apply to those files, or a notice indicating\n"
"where to find the applicable terms.\n"
"\n"
"  Additional terms, permissive or non-permissive, may be stated in the\n"
"form of a separately written license, or stated as exceptions;\n"
"the above requirements apply either way.\n"
"\n"
"  8. Termination.\n"
"\n"
"  You may not propagate or modify a covered work except as expressly\n"
"provided under this License.  Any attempt otherwise to propagate or\n"
"modify it is void, and will automatically terminate your rights under\n"
"this License (including any patent licenses granted under the third\n"
"paragraph of section 11).\n"
"\n"
"  However, if you cease all violation of this License, then your\n"
"license"
                        " from a particular copyright holder is reinstated (a)\n"
"provisionally, unless and until the copyright holder explicitly and\n"
"finally terminates your license, and (b) permanently, if the copyright\n"
"holder fails to notify you of the violation by some reasonable means\n"
"prior to 60 days after the cessation.\n"
"\n"
"  Moreover, your license from a particular copyright holder is\n"
"reinstated permanently if the copyright holder notifies you of the\n"
"violation by some reasonable means, this is the first time you have\n"
"received notice of violation of this License (for any work) from that\n"
"copyright holder, and you cure the violation prior to 30 days after\n"
"your receipt of the notice.\n"
"\n"
"  Termination of your rights under this section does not terminate the\n"
"licenses of parties who have received copies or rights from you under\n"
"this License.  If your rights have been terminated and not permanently\n"
"reinstated, you do not qualify to receive new licenses for the same\n"
"material un"
                        "der section 10.\n"
"\n"
"  9. Acceptance Not Required for Having Copies.\n"
"\n"
"  You are not required to accept this License in order to receive or\n"
"run a copy of the Program.  Ancillary propagation of a covered work\n"
"occurring solely as a consequence of using peer-to-peer transmission\n"
"to receive a copy likewise does not require acceptance.  However,\n"
"nothing other than this License grants you permission to propagate or\n"
"modify any covered work.  These actions infringe copyright if you do\n"
"not accept this License.  Therefore, by modifying or propagating a\n"
"covered work, you indicate your acceptance of this License to do so.\n"
"\n"
"  10. Automatic Licensing of Downstream Recipients.\n"
"\n"
"  Each time you convey a covered work, the recipient automatically\n"
"receives a license from the original licensors, to run, modify and\n"
"propagate that work, subject to this License.  You are not responsible\n"
"for enforcing compliance by third parties with this License.\n"
"\n"
"  An \"enti"
                        "ty transaction\" is a transaction transferring control of an\n"
"organization, or substantially all assets of one, or subdividing an\n"
"organization, or merging organizations.  If propagation of a covered\n"
"work results from an entity transaction, each party to that\n"
"transaction who receives a copy of the work also receives whatever\n"
"licenses to the work the party's predecessor in interest had or could\n"
"give under the previous paragraph, plus a right to possession of the\n"
"Corresponding Source of the work from the predecessor in interest, if\n"
"the predecessor has it or can get it with reasonable efforts.\n"
"\n"
"  You may not impose any further restrictions on the exercise of the\n"
"rights granted or affirmed under this License.  For example, you may\n"
"not impose a license fee, royalty, or other charge for exercise of\n"
"rights granted under this License, and you may not initiate litigation\n"
"(including a cross-claim or counterclaim in a lawsuit) alleging that\n"
"any patent claim is inf"
                        "ringed by making, using, selling, offering for\n"
"sale, or importing the Program or any portion of it.\n"
"\n"
"  11. Patents.\n"
"\n"
"  A \"contributor\" is a copyright holder who authorizes use under this\n"
"License of the Program or a work on which the Program is based.  The\n"
"work thus licensed is called the contributor's \"contributor version\".\n"
"\n"
"  A contributor's \"essential patent claims\" are all patent claims\n"
"owned or controlled by the contributor, whether already acquired or\n"
"hereafter acquired, that would be infringed by some manner, permitted\n"
"by this License, of making, using, or selling its contributor version,\n"
"but do not include claims that would be infringed only as a\n"
"consequence of further modification of the contributor version.  For\n"
"purposes of this definition, \"control\" includes the right to grant\n"
"patent sublicenses in a manner consistent with the requirements of\n"
"this License.\n"
"\n"
"  Each contributor grants you a non-exclusive, worldwide, roy"
                        "alty-free\n"
"patent license under the contributor's essential patent claims, to\n"
"make, use, sell, offer for sale, import and otherwise run, modify and\n"
"propagate the contents of its contributor version.\n"
"\n"
"  In the following three paragraphs, a \"patent license\" is any express\n"
"agreement or commitment, however denominated, not to enforce a patent\n"
"(such as an express permission to practice a patent or covenant not to\n"
"sue for patent infringement).  To \"grant\" such a patent license to a\n"
"party means to make such an agreement or commitment not to enforce a\n"
"patent against the party.\n"
"\n"
"  If you convey a covered work, knowingly relying on a patent license,\n"
"and the Corresponding Source of the work is not available for anyone\n"
"to copy, free of charge and under the terms of this License, through a\n"
"publicly available network server or other readily accessible means,\n"
"then you must either (1) cause the Corresponding Source to be so\n"
"available, or (2) arrange to dep"
                        "rive yourself of the benefit of the\n"
"patent license for this particular work, or (3) arrange, in a manner\n"
"consistent with the requirements of this License, to extend the patent\n"
"license to downstream recipients.  \"Knowingly relying\" means you have\n"
"actual knowledge that, but for the patent license, your conveying the\n"
"covered work in a country, or your recipient's use of the covered work\n"
"in a country, would infringe one or more identifiable patents in that\n"
"country that you have reason to believe are valid.\n"
"\n"
"  If, pursuant to or in connection with a single transaction or\n"
"arrangement, you convey, or propagate by procuring conveyance of, a\n"
"covered work, and grant a patent license to some of the parties\n"
"receiving the covered work authorizing them to use, propagate, modify\n"
"or convey a specific copy of the covered work, then the patent license\n"
"you grant is automatically extended to all recipients of the covered\n"
"work and works based on it.\n"
"\n"
"  A patent "
                        "license is \"discriminatory\" if it does not include within\n"
"the scope of its coverage, prohibits the exercise of, or is\n"
"conditioned on the non-exercise of one or more of the rights that are\n"
"specifically granted under this License.  You may not convey a covered\n"
"work if you are a party to an arrangement with a third party that is\n"
"in the business of distributing software, under which you make payment\n"
"to the third party based on the extent of your activity of conveying\n"
"the work, and under which the third party grants, to any of the\n"
"parties who would receive the covered work from you, a discriminatory\n"
"patent license (a) in connection with copies of the covered work\n"
"conveyed by you (or copies made from those copies), or (b) primarily\n"
"for and in connection with specific products or compilations that\n"
"contain the covered work, unless you entered into that arrangement,\n"
"or that patent license was granted, prior to 28 March 2007.\n"
"\n"
"  Nothing in this License shall "
                        "be construed as excluding or limiting\n"
"any implied license or other defenses to infringement that may\n"
"otherwise be available to you under applicable patent law.\n"
"\n"
"  12. No Surrender of Others' Freedom.\n"
"\n"
"  If conditions are imposed on you (whether by court order, agreement or\n"
"otherwise) that contradict the conditions of this License, they do not\n"
"excuse you from the conditions of this License.  If you cannot convey a\n"
"covered work so as to satisfy simultaneously your obligations under this\n"
"License and any other pertinent obligations, then as a consequence you may\n"
"not convey it at all.  For example, if you agree to terms that obligate you\n"
"to collect a royalty for further conveying from those to whom you convey\n"
"the Program, the only way you could satisfy both those terms and this\n"
"License would be to refrain entirely from conveying the Program.\n"
"\n"
"  13. Use with the GNU Affero General Public License.\n"
"\n"
"  Notwithstanding any other provision of this Li"
                        "cense, you have\n"
"permission to link or combine any covered work with a work licensed\n"
"under version 3 of the GNU Affero General Public License into a single\n"
"combined work, and to convey the resulting work.  The terms of this\n"
"License will continue to apply to the part which is the covered work,\n"
"but the special requirements of the GNU Affero General Public License,\n"
"section 13, concerning interaction through a network will apply to the\n"
"combination as such.\n"
"\n"
"  14. Revised Versions of this License.\n"
"\n"
"  The Free Software Foundation may publish revised and/or new versions of\n"
"the GNU General Public License from time to time.  Such new versions will\n"
"be similar in spirit to the present version, but may differ in detail to\n"
"address new problems or concerns.\n"
"\n"
"  Each version is given a distinguishing version number.  If the\n"
"Program specifies that a certain numbered version of the GNU General\n"
"Public License \"or any later version\" applies to it, you have t"
                        "he\n"
"option of following the terms and conditions either of that numbered\n"
"version or of any later version published by the Free Software\n"
"Foundation.  If the Program does not specify a version number of the\n"
"GNU General Public License, you may choose any version ever published\n"
"by the Free Software Foundation.\n"
"\n"
"  If the Program specifies that a proxy can decide which future\n"
"versions of the GNU General Public License can be used, that proxy's\n"
"public statement of acceptance of a version permanently authorizes you\n"
"to choose that version for the Program.\n"
"\n"
"  Later license versions may give you additional or different\n"
"permissions.  However, no additional obligations are imposed on any\n"
"author or copyright holder as a result of your choosing to follow a\n"
"later version.\n"
"\n"
"  15. Disclaimer of Warranty.\n"
"\n"
"  THERE IS NO WARRANTY FOR THE PROGRAM, TO THE EXTENT PERMITTED BY\n"
"APPLICABLE LAW.  EXCEPT WHEN OTHERWISE STATED IN WRITING THE COPYRIGHT\n"
"HOLDE"
                        "RS AND/OR OTHER PARTIES PROVIDE THE PROGRAM \"AS IS\" WITHOUT WARRANTY\n"
"OF ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING, BUT NOT LIMITED TO,\n"
"THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR\n"
"PURPOSE.  THE ENTIRE RISK AS TO THE QUALITY AND PERFORMANCE OF THE PROGRAM\n"
"IS WITH YOU.  SHOULD THE PROGRAM PROVE DEFECTIVE, YOU ASSUME THE COST OF\n"
"ALL NECESSARY SERVICING, REPAIR OR CORRECTION.\n"
"\n"
"  16. Limitation of Liability.\n"
"\n"
"  IN NO EVENT UNLESS REQUIRED BY APPLICABLE LAW OR AGREED TO IN WRITING\n"
"WILL ANY COPYRIGHT HOLDER, OR ANY OTHER PARTY WHO MODIFIES AND/OR CONVEYS\n"
"THE PROGRAM AS PERMITTED ABOVE, BE LIABLE TO YOU FOR DAMAGES, INCLUDING ANY\n"
"GENERAL, SPECIAL, INCIDENTAL OR CONSEQUENTIAL DAMAGES ARISING OUT OF THE\n"
"USE OR INABILITY TO USE THE PROGRAM (INCLUDING BUT NOT LIMITED TO LOSS OF\n"
"DATA OR DATA BEING RENDERED INACCURATE OR LOSSES SUSTAINED BY YOU OR THIRD\n"
"PARTIES OR A FAILURE OF THE PROGRAM TO OPERATE WITH ANY OTHER PROGRAMS),\n"
"E"
                        "VEN IF SUCH HOLDER OR OTHER PARTY HAS BEEN ADVISED OF THE POSSIBILITY OF\n"
"SUCH DAMAGES.\n"
"\n"
"  17. Interpretation of Sections 15 and 16.\n"
"\n"
"  If the disclaimer of warranty and limitation of liability provided\n"
"above cannot be given local legal effect according to their terms,\n"
"reviewing courts shall apply local law that most closely approximates\n"
"an absolute waiver of all civil liability in connection with the\n"
"Program, unless a warranty or assumption of liability accompanies a\n"
"copy of the Program in return for a fee.\n"
"\n"
"                     END OF TERMS AND CONDITIONS\n"
"\n"
"            How to Apply These Terms to Your New Programs\n"
"\n"
"  If you develop a new program, and you want it to be of the greatest\n"
"possible use to the public, the best way to achieve this is to make it\n"
"free software which everyone can redistribute and change under these terms.\n"
"\n"
"  To do so, attach the following notices to the program.  It is safest\n"
"to attach them to the start o"
                        "f each source file to most effectively\n"
"state the exclusion of warranty; and each file should have at least\n"
"the \"copyright\" line and a pointer to where the full notice is found.\n"
"\n"
"    <one line to give the program's name and a brief idea of what it does.>\n"
"    Copyright (C) <year>  <name of author>\n"
"\n"
"    This program is free software: you can redistribute it and/or modify\n"
"    it under the terms of the GNU General Public License as published by\n"
"    the Free Software Foundation, either version 3 of the License, or\n"
"    (at your option) any later version.\n"
"\n"
"    This program is distributed in the hope that it will be useful,\n"
"    but WITHOUT ANY WARRANTY; without even the implied warranty of\n"
"    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\n"
"    GNU General Public License for more details.\n"
"\n"
"    You should have received a copy of the GNU General Public License\n"
"    along with this program.  If not, see <http://www.gnu.org/licenses/>.\n"
""
                        "\n"
"Also add information on how to contact you by electronic and paper mail.\n"
"\n"
"  If the program does terminal interaction, make it output a short\n"
"notice like this when it starts in an interactive mode:\n"
"\n"
"    <program>  Copyright (C) <year>  <name of author>\n"
"    This program comes with ABSOLUTELY NO WARRANTY; for details type `show w'.\n"
"    This is free software, and you are welcome to redistribute it\n"
"    under certain conditions; type `show c' for details.\n"
"\n"
"The hypothetical commands `show w' and `show c' should show the appropriate\n"
"parts of the General Public License.  Of course, your program's commands\n"
"might be different; for a GUI interface, you would use an \"about box\".\n"
"\n"
"  You should also get your employer (if you work as a programmer) or school,\n"
"if any, to sign a \"copyright disclaimer\" for the program, if necessary.\n"
"For more information on this, and how to apply and follow the GNU GPL, see\n"
"<http://www.gnu.org/licenses/>.\n"
"\n"
"  The G"
                        "NU General Public License does not permit incorporating your program\n"
"into proprietary programs.  If your program is a subroutine library, you\n"
"may consider it more useful to permit linking proprietary applications with\n"
"the library.  If this is what you want to do, use the GNU Lesser General\n"
"Public License instead of this License.  But first, please read\n"
"<http://www.gnu.org/philosophy/why-not-lgpl.html>.\n"
"--8<---------------cut here---------------end--------------->8---"));
        XpdfTextEdit->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayout_6->addWidget(XpdfTextEdit);

        OpenSSLWidget->addTab(XpdfTab, QString());
        QuaZIPTab = new QWidget();
        QuaZIPTab->setObjectName(QString::fromUtf8("QuaZIPTab"));
        horizontalLayout_3 = new QHBoxLayout(QuaZIPTab);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        QuaZIPTextEdit = new QPlainTextEdit(QuaZIPTab);
        QuaZIPTextEdit->setObjectName(QString::fromUtf8("QuaZIPTextEdit"));
        QuaZIPTextEdit->setAcceptDrops(false);
        QuaZIPTextEdit->setDocumentTitle(QString::fromUtf8(""));
        QuaZIPTextEdit->setUndoRedoEnabled(false);
        QuaZIPTextEdit->setPlainText(QString::fromUtf8("Copyright (C) 2005-2007 Sergey A. Tachenov\n"
"\n"
"QuaZIP is licensed under the GNU General Pulbic License (GPL), either\n"
"version 2 or (at your option) any later version.\n"
"\n"
"Here is the full text of the GNU General Public License version 2.\n"
"\n"
"--8<---------------cut here---------------start------------->8---\n"
"                    GNU GENERAL PUBLIC LICENSE\n"
"                       Version 2, June 1991\n"
"\n"
" Copyright (C) 1989, 1991 Free Software Foundation, Inc.,\n"
" 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA\n"
" Everyone is permitted to copy and distribute verbatim copies\n"
" of this license document, but changing it is not allowed.\n"
"\n"
"                            Preamble\n"
"\n"
"  The licenses for most software are designed to take away your\n"
"freedom to share and change it.  By contrast, the GNU General Public\n"
"License is intended to guarantee your freedom to share and change free\n"
"software--to make sure the software is free for all its users.  This\n"
""
                        "General Public License applies to most of the Free Software\n"
"Foundation's software and to any other program whose authors commit to\n"
"using it.  (Some other Free Software Foundation software is covered by\n"
"the GNU Lesser General Public License instead.)  You can apply it to\n"
"your programs, too.\n"
"\n"
"  When we speak of free software, we are referring to freedom, not\n"
"price.  Our General Public Licenses are designed to make sure that you\n"
"have the freedom to distribute copies of free software (and charge for\n"
"this service if you wish), that you receive source code or can get it\n"
"if you want it, that you can change the software or use pieces of it\n"
"in new free programs; and that you know you can do these things.\n"
"\n"
"  To protect your rights, we need to make restrictions that forbid\n"
"anyone to deny you these rights or to ask you to surrender the rights.\n"
"These restrictions translate to certain responsibilities for you if you\n"
"distribute copies of the software, or if you "
                        "modify it.\n"
"\n"
"  For example, if you distribute copies of such a program, whether\n"
"gratis or for a fee, you must give the recipients all the rights that\n"
"you have.  You must make sure that they, too, receive or can get the\n"
"source code.  And you must show them these terms so they know their\n"
"rights.\n"
"\n"
"  We protect your rights with two steps: (1) copyright the software, and\n"
"(2) offer you this license which gives you legal permission to copy,\n"
"distribute and/or modify the software.\n"
"\n"
"  Also, for each author's protection and ours, we want to make certain\n"
"that everyone understands that there is no warranty for this free\n"
"software.  If the software is modified by someone else and passed on, we\n"
"want its recipients to know that what they have is not the original, so\n"
"that any problems introduced by others will not reflect on the original\n"
"authors' reputations.\n"
"\n"
"  Finally, any free program is threatened constantly by software\n"
"patents.  We wish to avoid"
                        " the danger that redistributors of a free\n"
"program will individually obtain patent licenses, in effect making the\n"
"program proprietary.  To prevent this, we have made it clear that any\n"
"patent must be licensed for everyone's free use or not licensed at all.\n"
"\n"
"  The precise terms and conditions for copying, distribution and\n"
"modification follow.\n"
"\n"
"                    GNU GENERAL PUBLIC LICENSE\n"
"   TERMS AND CONDITIONS FOR COPYING, DISTRIBUTION AND MODIFICATION\n"
"\n"
"  0. This License applies to any program or other work which contains\n"
"a notice placed by the copyright holder saying it may be distributed\n"
"under the terms of this General Public License.  The \"Program\", below,\n"
"refers to any such program or work, and a \"work based on the Program\"\n"
"means either the Program or any derivative work under copyright law:\n"
"that is to say, a work containing the Program or a portion of it,\n"
"either verbatim or with modifications and/or translated into another\n"
"languag"
                        "e.  (Hereinafter, translation is included without limitation in\n"
"the term \"modification\".)  Each licensee is addressed as \"you\".\n"
"\n"
"Activities other than copying, distribution and modification are not\n"
"covered by this License; they are outside its scope.  The act of\n"
"running the Program is not restricted, and the output from the Program\n"
"is covered only if its contents constitute a work based on the\n"
"Program (independent of having been made by running the Program).\n"
"Whether that is true depends on what the Program does.\n"
"\n"
"  1. You may copy and distribute verbatim copies of the Program's\n"
"source code as you receive it, in any medium, provided that you\n"
"conspicuously and appropriately publish on each copy an appropriate\n"
"copyright notice and disclaimer of warranty; keep intact all the\n"
"notices that refer to this License and to the absence of any warranty;\n"
"and give any other recipients of the Program a copy of this License\n"
"along with the Program.\n"
"\n"
"You"
                        " may charge a fee for the physical act of transferring a copy, and\n"
"you may at your option offer warranty protection in exchange for a fee.\n"
"\n"
"  2. You may modify your copy or copies of the Program or any portion\n"
"of it, thus forming a work based on the Program, and copy and\n"
"distribute such modifications or work under the terms of Section 1\n"
"above, provided that you also meet all of these conditions:\n"
"\n"
"    a) You must cause the modified files to carry prominent notices\n"
"    stating that you changed the files and the date of any change.\n"
"\n"
"    b) You must cause any work that you distribute or publish, that in\n"
"    whole or in part contains or is derived from the Program or any\n"
"    part thereof, to be licensed as a whole at no charge to all third\n"
"    parties under the terms of this License.\n"
"\n"
"    c) If the modified program normally reads commands interactively\n"
"    when run, you must cause it, when started running for such\n"
"    interactive use in the mos"
                        "t ordinary way, to print or display an\n"
"    announcement including an appropriate copyright notice and a\n"
"    notice that there is no warranty (or else, saying that you provide\n"
"    a warranty) and that users may redistribute the program under\n"
"    these conditions, and telling the user how to view a copy of this\n"
"    License.  (Exception: if the Program itself is interactive but\n"
"    does not normally print such an announcement, your work based on\n"
"    the Program is not required to print an announcement.)\n"
"\n"
"These requirements apply to the modified work as a whole.  If\n"
"identifiable sections of that work are not derived from the Program,\n"
"and can be reasonably considered independent and separate works in\n"
"themselves, then this License, and its terms, do not apply to those\n"
"sections when you distribute them as separate works.  But when you\n"
"distribute the same sections as part of a whole which is a work based\n"
"on the Program, the distribution of the whole must be o"
                        "n the terms of\n"
"this License, whose permissions for other licensees extend to the\n"
"entire whole, and thus to each and every part regardless of who wrote it.\n"
"\n"
"Thus, it is not the intent of this section to claim rights or contest\n"
"your rights to work written entirely by you; rather, the intent is to\n"
"exercise the right to control the distribution of derivative or\n"
"collective works based on the Program.\n"
"\n"
"In addition, mere aggregation of another work not based on the Program\n"
"with the Program (or with a work based on the Program) on a volume of\n"
"a storage or distribution medium does not bring the other work under\n"
"the scope of this License.\n"
"\n"
"  3. You may copy and distribute the Program (or a work based on it,\n"
"under Section 2) in object code or executable form under the terms of\n"
"Sections 1 and 2 above provided that you also do one of the following:\n"
"\n"
"    a) Accompany it with the complete corresponding machine-readable\n"
"    source code, which must be "
                        "distributed under the terms of Sections\n"
"    1 and 2 above on a medium customarily used for software interchange; or,\n"
"\n"
"    b) Accompany it with a written offer, valid for at least three\n"
"    years, to give any third party, for a charge no more than your\n"
"    cost of physically performing source distribution, a complete\n"
"    machine-readable copy of the corresponding source code, to be\n"
"    distributed under the terms of Sections 1 and 2 above on a medium\n"
"    customarily used for software interchange; or,\n"
"\n"
"    c) Accompany it with the information you received as to the offer\n"
"    to distribute corresponding source code.  (This alternative is\n"
"    allowed only for noncommercial distribution and only if you\n"
"    received the program in object code or executable form with such\n"
"    an offer, in accord with Subsection b above.)\n"
"\n"
"The source code for a work means the preferred form of the work for\n"
"making modifications to it.  For an executable work, complete "
                        "source\n"
"code means all the source code for all modules it contains, plus any\n"
"associated interface definition files, plus the scripts used to\n"
"control compilation and installation of the executable.  However, as a\n"
"special exception, the source code distributed need not include\n"
"anything that is normally distributed (in either source or binary\n"
"form) with the major components (compiler, kernel, and so on) of the\n"
"operating system on which the executable runs, unless that component\n"
"itself accompanies the executable.\n"
"\n"
"If distribution of executable or object code is made by offering\n"
"access to copy from a designated place, then offering equivalent\n"
"access to copy the source code from the same place counts as\n"
"distribution of the source code, even though third parties are not\n"
"compelled to copy the source along with the object code.\n"
"\n"
"  4. You may not copy, modify, sublicense, or distribute the Program\n"
"except as expressly provided under this License.  Any att"
                        "empt\n"
"otherwise to copy, modify, sublicense or distribute the Program is\n"
"void, and will automatically terminate your rights under this License.\n"
"However, parties who have received copies, or rights, from you under\n"
"this License will not have their licenses terminated so long as such\n"
"parties remain in full compliance.\n"
"\n"
"  5. You are not required to accept this License, since you have not\n"
"signed it.  However, nothing else grants you permission to modify or\n"
"distribute the Program or its derivative works.  These actions are\n"
"prohibited by law if you do not accept this License.  Therefore, by\n"
"modifying or distributing the Program (or any work based on the\n"
"Program), you indicate your acceptance of this License to do so, and\n"
"all its terms and conditions for copying, distributing or modifying\n"
"the Program or works based on it.\n"
"\n"
"  6. Each time you redistribute the Program (or any work based on the\n"
"Program), the recipient automatically receives a license from"
                        " the\n"
"original licensor to copy, distribute or modify the Program subject to\n"
"these terms and conditions.  You may not impose any further\n"
"restrictions on the recipients' exercise of the rights granted herein.\n"
"You are not responsible for enforcing compliance by third parties to\n"
"this License.\n"
"\n"
"  7. If, as a consequence of a court judgment or allegation of patent\n"
"infringement or for any other reason (not limited to patent issues),\n"
"conditions are imposed on you (whether by court order, agreement or\n"
"otherwise) that contradict the conditions of this License, they do not\n"
"excuse you from the conditions of this License.  If you cannot\n"
"distribute so as to satisfy simultaneously your obligations under this\n"
"License and any other pertinent obligations, then as a consequence you\n"
"may not distribute the Program at all.  For example, if a patent\n"
"license would not permit royalty-free redistribution of the Program by\n"
"all those who receive copies directly or indirectly"
                        " through you, then\n"
"the only way you could satisfy both it and this License would be to\n"
"refrain entirely from distribution of the Program.\n"
"\n"
"If any portion of this section is held invalid or unenforceable under\n"
"any particular circumstance, the balance of the section is intended to\n"
"apply and the section as a whole is intended to apply in other\n"
"circumstances.\n"
"\n"
"It is not the purpose of this section to induce you to infringe any\n"
"patents or other property right claims or to contest validity of any\n"
"such claims; this section has the sole purpose of protecting the\n"
"integrity of the free software distribution system, which is\n"
"implemented by public license practices.  Many people have made\n"
"generous contributions to the wide range of software distributed\n"
"through that system in reliance on consistent application of that\n"
"system; it is up to the author/donor to decide if he or she is willing\n"
"to distribute software through any other system and a licensee cannot"
                        "\n"
"impose that choice.\n"
"\n"
"This section is intended to make thoroughly clear what is believed to\n"
"be a consequence of the rest of this License.\n"
"\n"
"  8. If the distribution and/or use of the Program is restricted in\n"
"certain countries either by patents or by copyrighted interfaces, the\n"
"original copyright holder who places the Program under this License\n"
"may add an explicit geographical distribution limitation excluding\n"
"those countries, so that distribution is permitted only in or among\n"
"countries not thus excluded.  In such case, this License incorporates\n"
"the limitation as if written in the body of this License.\n"
"\n"
"  9. The Free Software Foundation may publish revised and/or new versions\n"
"of the General Public License from time to time.  Such new versions will\n"
"be similar in spirit to the present version, but may differ in detail to\n"
"address new problems or concerns.\n"
"\n"
"Each version is given a distinguishing version number.  If the Program\n"
"specifies "
                        "a version number of this License which applies to it and \"any\n"
"later version\", you have the option of following the terms and conditions\n"
"either of that version or of any later version published by the Free\n"
"Software Foundation.  If the Program does not specify a version number of\n"
"this License, you may choose any version ever published by the Free Software\n"
"Foundation.\n"
"\n"
"  10. If you wish to incorporate parts of the Program into other free\n"
"programs whose distribution conditions are different, write to the author\n"
"to ask for permission.  For software which is copyrighted by the Free\n"
"Software Foundation, write to the Free Software Foundation; we sometimes\n"
"make exceptions for this.  Our decision will be guided by the two goals\n"
"of preserving the free status of all derivatives of our free software and\n"
"of promoting the sharing and reuse of software generally.\n"
"\n"
"                            NO WARRANTY\n"
"\n"
"  11. BECAUSE THE PROGRAM IS LICENSED FREE OF CHARGE,"
                        " THERE IS NO WARRANTY\n"
"FOR THE PROGRAM, TO THE EXTENT PERMITTED BY APPLICABLE LAW.  EXCEPT WHEN\n"
"OTHERWISE STATED IN WRITING THE COPYRIGHT HOLDERS AND/OR OTHER PARTIES\n"
"PROVIDE THE PROGRAM \"AS IS\" WITHOUT WARRANTY OF ANY KIND, EITHER EXPRESSED\n"
"OR IMPLIED, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF\n"
"MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.  THE ENTIRE RISK AS\n"
"TO THE QUALITY AND PERFORMANCE OF THE PROGRAM IS WITH YOU.  SHOULD THE\n"
"PROGRAM PROVE DEFECTIVE, YOU ASSUME THE COST OF ALL NECESSARY SERVICING,\n"
"REPAIR OR CORRECTION.\n"
"\n"
"  12. IN NO EVENT UNLESS REQUIRED BY APPLICABLE LAW OR AGREED TO IN WRITING\n"
"WILL ANY COPYRIGHT HOLDER, OR ANY OTHER PARTY WHO MAY MODIFY AND/OR\n"
"REDISTRIBUTE THE PROGRAM AS PERMITTED ABOVE, BE LIABLE TO YOU FOR DAMAGES,\n"
"INCLUDING ANY GENERAL, SPECIAL, INCIDENTAL OR CONSEQUENTIAL DAMAGES ARISING\n"
"OUT OF THE USE OR INABILITY TO USE THE PROGRAM (INCLUDING BUT NOT LIMITED\n"
"TO LOSS OF DATA OR DATA BEING RENDERED INAC"
                        "CURATE OR LOSSES SUSTAINED BY\n"
"YOU OR THIRD PARTIES OR A FAILURE OF THE PROGRAM TO OPERATE WITH ANY OTHER\n"
"PROGRAMS), EVEN IF SUCH HOLDER OR OTHER PARTY HAS BEEN ADVISED OF THE\n"
"POSSIBILITY OF SUCH DAMAGES.\n"
"\n"
"                     END OF TERMS AND CONDITIONS\n"
"\n"
"            How to Apply These Terms to Your New Programs\n"
"\n"
"  If you develop a new program, and you want it to be of the greatest\n"
"possible use to the public, the best way to achieve this is to make it\n"
"free software which everyone can redistribute and change under these terms.\n"
"\n"
"  To do so, attach the following notices to the program.  It is safest\n"
"to attach them to the start of each source file to most effectively\n"
"convey the exclusion of warranty; and each file should have at least\n"
"the \"copyright\" line and a pointer to where the full notice is found.\n"
"\n"
"    <one line to give the program's name and a brief idea of what it does.>\n"
"    Copyright (C) <year>  <name of author>\n"
"\n"
"    This"
                        " program is free software; you can redistribute it and/or modify\n"
"    it under the terms of the GNU General Public License as published by\n"
"    the Free Software Foundation; either version 2 of the License, or\n"
"    (at your option) any later version.\n"
"\n"
"    This program is distributed in the hope that it will be useful,\n"
"    but WITHOUT ANY WARRANTY; without even the implied warranty of\n"
"    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\n"
"    GNU General Public License for more details.\n"
"\n"
"    You should have received a copy of the GNU General Public License along\n"
"    with this program; if not, write to the Free Software Foundation, Inc.,\n"
"    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.\n"
"\n"
"Also add information on how to contact you by electronic and paper mail.\n"
"\n"
"If the program is interactive, make it output a short notice like this\n"
"when it starts in an interactive mode:\n"
"\n"
"    Gnomovision version 69, Copyright (C) year "
                        "name of author\n"
"    Gnomovision comes with ABSOLUTELY NO WARRANTY; for details type `show w'.\n"
"    This is free software, and you are welcome to redistribute it\n"
"    under certain conditions; type `show c' for details.\n"
"\n"
"The hypothetical commands `show w' and `show c' should show the appropriate\n"
"parts of the General Public License.  Of course, the commands you use may\n"
"be called something other than `show w' and `show c'; they could even be\n"
"mouse-clicks or menu items--whatever suits your program.\n"
"\n"
"You should also get your employer (if you work as a programmer) or your\n"
"school, if any, to sign a \"copyright disclaimer\" for the program, if\n"
"necessary.  Here is a sample; alter the names:\n"
"\n"
"  Yoyodyne, Inc., hereby disclaims all copyright interest in the program\n"
"  `Gnomovision' (which makes passes at compilers) written by James Hacker.\n"
"\n"
"  <signature of Ty Coon>, 1 April 1989\n"
"  Ty Coon, President of Vice\n"
"\n"
"This General Public License does not p"
                        "ermit incorporating your program into\n"
"proprietary programs.  If your program is a subroutine library, you may\n"
"consider it more useful to permit linking proprietary applications with the\n"
"library.  If this is what you want to do, use the GNU Lesser General\n"
"Public License instead of this License.\n"
"--8<---------------cut here---------------end--------------->8---"));
        QuaZIPTextEdit->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayout_3->addWidget(QuaZIPTextEdit);

        OpenSSLWidget->addTab(QuaZIPTab, QString());
        sankoreTab = new QWidget();
        sankoreTab->setObjectName(QString::fromUtf8("sankoreTab"));
        horizontalLayout_9 = new QHBoxLayout(sankoreTab);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        sankoreTextEdit = new QPlainTextEdit(sankoreTab);
        sankoreTextEdit->setObjectName(QString::fromUtf8("sankoreTextEdit"));
        sankoreTextEdit->setAcceptDrops(false);
        sankoreTextEdit->setDocumentTitle(QString::fromUtf8(""));
        sankoreTextEdit->setUndoRedoEnabled(false);
        sankoreTextEdit->setPlainText(QString::fromUtf8("Copyright (C) 2013 Groupement d'Int\303\251r\303\252t Public pour l'Education Num\303\251rique en Afrique (GIP ENA)\n"
"\n"
"Open-Sankor\303\251 is free software: you can redistribute it and/or modify\n"
"it under the terms of the GNU General Public License as published by\n"
"the Free Software Foundation, version 3 of the License,\n"
"with a specific linking exception for the OpenSSL project's\n"
"\"OpenSSL\" library (or with modified versions of it that use the\n"
"same license as the \"OpenSSL\" library).\n"
"\n"
"Here is the full text of the GNU General Public License version 3.\n"
"\n"
"--8<---------------cut here---------------start------------->8---\n"
"                    GNU GENERAL PUBLIC LICENSE\n"
"                       Version 3, 29 June 2007\n"
"\n"
" Copyright (C) 2007 Free Software Foundation, Inc. <http://fsf.org/>\n"
" Everyone is permitted to copy and distribute verbatim copies\n"
" of this license document, but changing it is not allowed.\n"
"\n"
"                            Preamble\n"
"\n"
""
                        "  The GNU General Public License is a free, copyleft license for\n"
"software and other kinds of works.\n"
"\n"
"  The licenses for most software and other practical works are designed\n"
"to take away your freedom to share and change the works.  By contrast,\n"
"the GNU General Public License is intended to guarantee your freedom to\n"
"share and change all versions of a program--to make sure it remains free\n"
"software for all its users.  We, the Free Software Foundation, use the\n"
"GNU General Public License for most of our software; it applies also to\n"
"any other work released this way by its authors.  You can apply it to\n"
"your programs, too.\n"
"\n"
"  When we speak of free software, we are referring to freedom, not\n"
"price.  Our General Public Licenses are designed to make sure that you\n"
"have the freedom to distribute copies of free software (and charge for\n"
"them if you wish), that you receive source code or can get it if you\n"
"want it, that you can change the software or use pieces of i"
                        "t in new\n"
"free programs, and that you know you can do these things.\n"
"\n"
"  To protect your rights, we need to prevent others from denying you\n"
"these rights or asking you to surrender the rights.  Therefore, you have\n"
"certain responsibilities if you distribute copies of the software, or if\n"
"you modify it: responsibilities to respect the freedom of others.\n"
"\n"
"  For example, if you distribute copies of such a program, whether\n"
"gratis or for a fee, you must pass on to the recipients the same\n"
"freedoms that you received.  You must make sure that they, too, receive\n"
"or can get the source code.  And you must show them these terms so they\n"
"know their rights.\n"
"\n"
"  Developers that use the GNU GPL protect your rights with two steps:\n"
"(1) assert copyright on the software, and (2) offer you this License\n"
"giving you legal permission to copy, distribute and/or modify it.\n"
"\n"
"  For the developers' and authors' protection, the GPL clearly explains\n"
"that there is no warranty"
                        " for this free software.  For both users' and\n"
"authors' sake, the GPL requires that modified versions be marked as\n"
"changed, so that their problems will not be attributed erroneously to\n"
"authors of previous versions.\n"
"\n"
"  Some devices are designed to deny users access to install or run\n"
"modified versions of the software inside them, although the manufacturer\n"
"can do so.  This is fundamentally incompatible with the aim of\n"
"protecting users' freedom to change the software.  The systematic\n"
"pattern of such abuse occurs in the area of products for individuals to\n"
"use, which is precisely where it is most unacceptable.  Therefore, we\n"
"have designed this version of the GPL to prohibit the practice for those\n"
"products.  If such problems arise substantially in other domains, we\n"
"stand ready to extend this provision to those domains in future versions\n"
"of the GPL, as needed to protect the freedom of users.\n"
"\n"
"  Finally, every program is threatened constantly by software pa"
                        "tents.\n"
"States should not allow patents to restrict development and use of\n"
"software on general-purpose computers, but in those that do, we wish to\n"
"avoid the special danger that patents applied to a free program could\n"
"make it effectively proprietary.  To prevent this, the GPL assures that\n"
"patents cannot be used to render the program non-free.\n"
"\n"
"  The precise terms and conditions for copying, distribution and\n"
"modification follow.\n"
"\n"
"                       TERMS AND CONDITIONS\n"
"\n"
"  0. Definitions.\n"
"\n"
"  \"This License\" refers to version 3 of the GNU General Public License.\n"
"\n"
"  \"Copyright\" also means copyright-like laws that apply to other kinds of\n"
"works, such as semiconductor masks.\n"
"\n"
"  \"The Program\" refers to any copyrightable work licensed under this\n"
"License.  Each licensee is addressed as \"you\".  \"Licensees\" and\n"
"\"recipients\" may be individuals or organizations.\n"
"\n"
"  To \"modify\" a work means to copy from or adapt all or "
                        "part of the work\n"
"in a fashion requiring copyright permission, other than the making of an\n"
"exact copy.  The resulting work is called a \"modified version\" of the\n"
"earlier work or a work \"based on\" the earlier work.\n"
"\n"
"  A \"covered work\" means either the unmodified Program or a work based\n"
"on the Program.\n"
"\n"
"  To \"propagate\" a work means to do anything with it that, without\n"
"permission, would make you directly or secondarily liable for\n"
"infringement under applicable copyright law, except executing it on a\n"
"computer or modifying a private copy.  Propagation includes copying,\n"
"distribution (with or without modification), making available to the\n"
"public, and in some countries other activities as well.\n"
"\n"
"  To \"convey\" a work means any kind of propagation that enables other\n"
"parties to make or receive copies.  Mere interaction with a user through\n"
"a computer network, with no transfer of a copy, is not conveying.\n"
"\n"
"  An interactive user interface di"
                        "splays \"Appropriate Legal Notices\"\n"
"to the extent that it includes a convenient and prominently visible\n"
"feature that (1) displays an appropriate copyright notice, and (2)\n"
"tells the user that there is no warranty for the work (except to the\n"
"extent that warranties are provided), that licensees may convey the\n"
"work under this License, and how to view a copy of this License.  If\n"
"the interface presents a list of user commands or options, such as a\n"
"menu, a prominent item in the list meets this criterion.\n"
"\n"
"  1. Source Code.\n"
"\n"
"  The \"source code\" for a work means the preferred form of the work\n"
"for making modifications to it.  \"Object code\" means any non-source\n"
"form of a work.\n"
"\n"
"  A \"Standard Interface\" means an interface that either is an official\n"
"standard defined by a recognized standards body, or, in the case of\n"
"interfaces specified for a particular programming language, one that\n"
"is widely used among developers working in that language.\n"
""
                        "\n"
"  The \"System Libraries\" of an executable work include anything, other\n"
"than the work as a whole, that (a) is included in the normal form of\n"
"packaging a Major Component, but which is not part of that Major\n"
"Component, and (b) serves only to enable use of the work with that\n"
"Major Component, or to implement a Standard Interface for which an\n"
"implementation is available to the public in source code form.  A\n"
"\"Major Component\", in this context, means a major essential component\n"
"(kernel, window system, and so on) of the specific operating system\n"
"(if any) on which the executable work runs, or a compiler used to\n"
"produce the work, or an object code interpreter used to run it.\n"
"\n"
"  The \"Corresponding Source\" for a work in object code form means all\n"
"the source code needed to generate, install, and (for an executable\n"
"work) run the object code and to modify the work, including scripts to\n"
"control those activities.  However, it does not include the work's\n"
"Syst"
                        "em Libraries, or general-purpose tools or generally available free\n"
"programs which are used unmodified in performing those activities but\n"
"which are not part of the work.  For example, Corresponding Source\n"
"includes interface definition files associated with source files for\n"
"the work, and the source code for shared libraries and dynamically\n"
"linked subprograms that the work is specifically designed to require,\n"
"such as by intimate data communication or control flow between those\n"
"subprograms and other parts of the work.\n"
"\n"
"  The Corresponding Source need not include anything that users\n"
"can regenerate automatically from other parts of the Corresponding\n"
"Source.\n"
"\n"
"  The Corresponding Source for a work in source code form is that\n"
"same work.\n"
"\n"
"  2. Basic Permissions.\n"
"\n"
"  All rights granted under this License are granted for the term of\n"
"copyright on the Program, and are irrevocable provided the stated\n"
"conditions are met.  This License explicitly af"
                        "firms your unlimited\n"
"permission to run the unmodified Program.  The output from running a\n"
"covered work is covered by this License only if the output, given its\n"
"content, constitutes a covered work.  This License acknowledges your\n"
"rights of fair use or other equivalent, as provided by copyright law.\n"
"\n"
"  You may make, run and propagate covered works that you do not\n"
"convey, without conditions so long as your license otherwise remains\n"
"in force.  You may convey covered works to others for the sole purpose\n"
"of having them make modifications exclusively for you, or provide you\n"
"with facilities for running those works, provided that you comply with\n"
"the terms of this License in conveying all material for which you do\n"
"not control copyright.  Those thus making or running the covered works\n"
"for you must do so exclusively on your behalf, under your direction\n"
"and control, on terms that prohibit them from making any copies of\n"
"your copyrighted material outside their relat"
                        "ionship with you.\n"
"\n"
"  Conveying under any other circumstances is permitted solely under\n"
"the conditions stated below.  Sublicensing is not allowed; section 10\n"
"makes it unnecessary.\n"
"\n"
"  3. Protecting Users' Legal Rights From Anti-Circumvention Law.\n"
"\n"
"  No covered work shall be deemed part of an effective technological\n"
"measure under any applicable law fulfilling obligations under article\n"
"11 of the WIPO copyright treaty adopted on 20 December 1996, or\n"
"similar laws prohibiting or restricting circumvention of such\n"
"measures.\n"
"\n"
"  When you convey a covered work, you waive any legal power to forbid\n"
"circumvention of technological measures to the extent such circumvention\n"
"is effected by exercising rights under this License with respect to\n"
"the covered work, and you disclaim any intention to limit operation or\n"
"modification of the work as a means of enforcing, against the work's\n"
"users, your or third parties' legal rights to forbid circumvention of\n"
"te"
                        "chnological measures.\n"
"\n"
"  4. Conveying Verbatim Copies.\n"
"\n"
"  You may convey verbatim copies of the Program's source code as you\n"
"receive it, in any medium, provided that you conspicuously and\n"
"appropriately publish on each copy an appropriate copyright notice;\n"
"keep intact all notices stating that this License and any\n"
"non-permissive terms added in accord with section 7 apply to the code;\n"
"keep intact all notices of the absence of any warranty; and give all\n"
"recipients a copy of this License along with the Program.\n"
"\n"
"  You may charge any price or no price for each copy that you convey,\n"
"and you may offer support or warranty protection for a fee.\n"
"\n"
"  5. Conveying Modified Source Versions.\n"
"\n"
"  You may convey a work based on the Program, or the modifications to\n"
"produce it from the Program, in the form of source code under the\n"
"terms of section 4, provided that you also meet all of these conditions:\n"
"\n"
"    a) The work must carry prominent notices "
                        "stating that you modified\n"
"    it, and giving a relevant date.\n"
"\n"
"    b) The work must carry prominent notices stating that it is\n"
"    released under this License and any conditions added under section\n"
"    7.  This requirement modifies the requirement in section 4 to\n"
"    \"keep intact all notices\".\n"
"\n"
"    c) You must license the entire work, as a whole, under this\n"
"    License to anyone who comes into possession of a copy.  This\n"
"    License will therefore apply, along with any applicable section 7\n"
"    additional terms, to the whole of the work, and all its parts,\n"
"    regardless of how they are packaged.  This License gives no\n"
"    permission to license the work in any other way, but it does not\n"
"    invalidate such permission if you have separately received it.\n"
"\n"
"    d) If the work has interactive user interfaces, each must display\n"
"    Appropriate Legal Notices; however, if the Program has interactive\n"
"    interfaces that do not display Appropriate "
                        "Legal Notices, your\n"
"    work need not make them do so.\n"
"\n"
"  A compilation of a covered work with other separate and independent\n"
"works, which are not by their nature extensions of the covered work,\n"
"and which are not combined with it such as to form a larger program,\n"
"in or on a volume of a storage or distribution medium, is called an\n"
"\"aggregate\" if the compilation and its resulting copyright are not\n"
"used to limit the access or legal rights of the compilation's users\n"
"beyond what the individual works permit.  Inclusion of a covered work\n"
"in an aggregate does not cause this License to apply to the other\n"
"parts of the aggregate.\n"
"\n"
"  6. Conveying Non-Source Forms.\n"
"\n"
"  You may convey a covered work in object code form under the terms\n"
"of sections 4 and 5, provided that you also convey the\n"
"machine-readable Corresponding Source under the terms of this License,\n"
"in one of these ways:\n"
"\n"
"    a) Convey the object code in, or embodied in, a physical pro"
                        "duct\n"
"    (including a physical distribution medium), accompanied by the\n"
"    Corresponding Source fixed on a durable physical medium\n"
"    customarily used for software interchange.\n"
"\n"
"    b) Convey the object code in, or embodied in, a physical product\n"
"    (including a physical distribution medium), accompanied by a\n"
"    written offer, valid for at least three years and valid for as\n"
"    long as you offer spare parts or customer support for that product\n"
"    model, to give anyone who possesses the object code either (1) a\n"
"    copy of the Corresponding Source for all the software in the\n"
"    product that is covered by this License, on a durable physical\n"
"    medium customarily used for software interchange, for a price no\n"
"    more than your reasonable cost of physically performing this\n"
"    conveying of source, or (2) access to copy the\n"
"    Corresponding Source from a network server at no charge.\n"
"\n"
"    c) Convey individual copies of the object code with a"
                        " copy of the\n"
"    written offer to provide the Corresponding Source.  This\n"
"    alternative is allowed only occasionally and noncommercially, and\n"
"    only if you received the object code with such an offer, in accord\n"
"    with subsection 6b.\n"
"\n"
"    d) Convey the object code by offering access from a designated\n"
"    place (gratis or for a charge), and offer equivalent access to the\n"
"    Corresponding Source in the same way through the same place at no\n"
"    further charge.  You need not require recipients to copy the\n"
"    Corresponding Source along with the object code.  If the place to\n"
"    copy the object code is a network server, the Corresponding Source\n"
"    may be on a different server (operated by you or a third party)\n"
"    that supports equivalent copying facilities, provided you maintain\n"
"    clear directions next to the object code saying where to find the\n"
"    Corresponding Source.  Regardless of what server hosts the\n"
"    Corresponding Source, you remai"
                        "n obligated to ensure that it is\n"
"    available for as long as needed to satisfy these requirements.\n"
"\n"
"    e) Convey the object code using peer-to-peer transmission, provided\n"
"    you inform other peers where the object code and Corresponding\n"
"    Source of the work are being offered to the general public at no\n"
"    charge under subsection 6d.\n"
"\n"
"  A separable portion of the object code, whose source code is excluded\n"
"from the Corresponding Source as a System Library, need not be\n"
"included in conveying the object code work.\n"
"\n"
"  A \"User Product\" is either (1) a \"consumer product\", which means any\n"
"tangible personal property which is normally used for personal, family,\n"
"or household purposes, or (2) anything designed or sold for incorporation\n"
"into a dwelling.  In determining whether a product is a consumer product,\n"
"doubtful cases shall be resolved in favor of coverage.  For a particular\n"
"product received by a particular user, \"normally used\" refers to "
                        "a\n"
"typical or common use of that class of product, regardless of the status\n"
"of the particular user or of the way in which the particular user\n"
"actually uses, or expects or is expected to use, the product.  A product\n"
"is a consumer product regardless of whether the product has substantial\n"
"commercial, industrial or non-consumer uses, unless such uses represent\n"
"the only significant mode of use of the product.\n"
"\n"
"  \"Installation Information\" for a User Product means any methods,\n"
"procedures, authorization keys, or other information required to install\n"
"and execute modified versions of a covered work in that User Product from\n"
"a modified version of its Corresponding Source.  The information must\n"
"suffice to ensure that the continued functioning of the modified object\n"
"code is in no case prevented or interfered with solely because\n"
"modification has been made.\n"
"\n"
"  If you convey an object code work under this section in, or with, or\n"
"specifically for use in, a U"
                        "ser Product, and the conveying occurs as\n"
"part of a transaction in which the right of possession and use of the\n"
"User Product is transferred to the recipient in perpetuity or for a\n"
"fixed term (regardless of how the transaction is characterized), the\n"
"Corresponding Source conveyed under this section must be accompanied\n"
"by the Installation Information.  But this requirement does not apply\n"
"if neither you nor any third party retains the ability to install\n"
"modified object code on the User Product (for example, the work has\n"
"been installed in ROM).\n"
"\n"
"  The requirement to provide Installation Information does not include a\n"
"requirement to continue to provide support service, warranty, or updates\n"
"for a work that has been modified or installed by the recipient, or for\n"
"the User Product in which it has been modified or installed.  Access to a\n"
"network may be denied when the modification itself materially and\n"
"adversely affects the operation of the network or violates th"
                        "e rules and\n"
"protocols for communication across the network.\n"
"\n"
"  Corresponding Source conveyed, and Installation Information provided,\n"
"in accord with this section must be in a format that is publicly\n"
"documented (and with an implementation available to the public in\n"
"source code form), and must require no special password or key for\n"
"unpacking, reading or copying.\n"
"\n"
"  7. Additional Terms.\n"
"\n"
"  \"Additional permissions\" are terms that supplement the terms of this\n"
"License by making exceptions from one or more of its conditions.\n"
"Additional permissions that are applicable to the entire Program shall\n"
"be treated as though they were included in this License, to the extent\n"
"that they are valid under applicable law.  If additional permissions\n"
"apply only to part of the Program, that part may be used separately\n"
"under those permissions, but the entire Program remains governed by\n"
"this License without regard to the additional permissions.\n"
"\n"
"  When you co"
                        "nvey a copy of a covered work, you may at your option\n"
"remove any additional permissions from that copy, or from any part of\n"
"it.  (Additional permissions may be written to require their own\n"
"removal in certain cases when you modify the work.)  You may place\n"
"additional permissions on material, added by you to a covered work,\n"
"for which you have or can give appropriate copyright permission.\n"
"\n"
"  Notwithstanding any other provision of this License, for material you\n"
"add to a covered work, you may (if authorized by the copyright holders of\n"
"that material) supplement the terms of this License with terms:\n"
"\n"
"    a) Disclaiming warranty or limiting liability differently from the\n"
"    terms of sections 15 and 16 of this License; or\n"
"\n"
"    b) Requiring preservation of specified reasonable legal notices or\n"
"    author attributions in that material or in the Appropriate Legal\n"
"    Notices displayed by works containing it; or\n"
"\n"
"    c) Prohibiting misrepresentation o"
                        "f the origin of that material, or\n"
"    requiring that modified versions of such material be marked in\n"
"    reasonable ways as different from the original version; or\n"
"\n"
"    d) Limiting the use for publicity purposes of names of licensors or\n"
"    authors of the material; or\n"
"\n"
"    e) Declining to grant rights under trademark law for use of some\n"
"    trade names, trademarks, or service marks; or\n"
"\n"
"    f) Requiring indemnification of licensors and authors of that\n"
"    material by anyone who conveys the material (or modified versions of\n"
"    it) with contractual assumptions of liability to the recipient, for\n"
"    any liability that these contractual assumptions directly impose on\n"
"    those licensors and authors.\n"
"\n"
"  All other non-permissive additional terms are considered \"further\n"
"restrictions\" within the meaning of section 10.  If the Program as you\n"
"received it, or any part of it, contains a notice stating that it is\n"
"governed by this License along w"
                        "ith a term that is a further\n"
"restriction, you may remove that term.  If a license document contains\n"
"a further restriction but permits relicensing or conveying under this\n"
"License, you may add to a covered work material governed by the terms\n"
"of that license document, provided that the further restriction does\n"
"not survive such relicensing or conveying.\n"
"\n"
"  If you add terms to a covered work in accord with this section, you\n"
"must place, in the relevant source files, a statement of the\n"
"additional terms that apply to those files, or a notice indicating\n"
"where to find the applicable terms.\n"
"\n"
"  Additional terms, permissive or non-permissive, may be stated in the\n"
"form of a separately written license, or stated as exceptions;\n"
"the above requirements apply either way.\n"
"\n"
"  8. Termination.\n"
"\n"
"  You may not propagate or modify a covered work except as expressly\n"
"provided under this License.  Any attempt otherwise to propagate or\n"
"modify it is void, and wi"
                        "ll automatically terminate your rights under\n"
"this License (including any patent licenses granted under the third\n"
"paragraph of section 11).\n"
"\n"
"  However, if you cease all violation of this License, then your\n"
"license from a particular copyright holder is reinstated (a)\n"
"provisionally, unless and until the copyright holder explicitly and\n"
"finally terminates your license, and (b) permanently, if the copyright\n"
"holder fails to notify you of the violation by some reasonable means\n"
"prior to 60 days after the cessation.\n"
"\n"
"  Moreover, your license from a particular copyright holder is\n"
"reinstated permanently if the copyright holder notifies you of the\n"
"violation by some reasonable means, this is the first time you have\n"
"received notice of violation of this License (for any work) from that\n"
"copyright holder, and you cure the violation prior to 30 days after\n"
"your receipt of the notice.\n"
"\n"
"  Termination of your rights under this section does not terminate the\n"
""
                        "licenses of parties who have received copies or rights from you under\n"
"this License.  If your rights have been terminated and not permanently\n"
"reinstated, you do not qualify to receive new licenses for the same\n"
"material under section 10.\n"
"\n"
"  9. Acceptance Not Required for Having Copies.\n"
"\n"
"  You are not required to accept this License in order to receive or\n"
"run a copy of the Program.  Ancillary propagation of a covered work\n"
"occurring solely as a consequence of using peer-to-peer transmission\n"
"to receive a copy likewise does not require acceptance.  However,\n"
"nothing other than this License grants you permission to propagate or\n"
"modify any covered work.  These actions infringe copyright if you do\n"
"not accept this License.  Therefore, by modifying or propagating a\n"
"covered work, you indicate your acceptance of this License to do so.\n"
"\n"
"  10. Automatic Licensing of Downstream Recipients.\n"
"\n"
"  Each time you convey a covered work, the recipient automatically"
                        "\n"
"receives a license from the original licensors, to run, modify and\n"
"propagate that work, subject to this License.  You are not responsible\n"
"for enforcing compliance by third parties with this License.\n"
"\n"
"  An \"entity transaction\" is a transaction transferring control of an\n"
"organization, or substantially all assets of one, or subdividing an\n"
"organization, or merging organizations.  If propagation of a covered\n"
"work results from an entity transaction, each party to that\n"
"transaction who receives a copy of the work also receives whatever\n"
"licenses to the work the party's predecessor in interest had or could\n"
"give under the previous paragraph, plus a right to possession of the\n"
"Corresponding Source of the work from the predecessor in interest, if\n"
"the predecessor has it or can get it with reasonable efforts.\n"
"\n"
"  You may not impose any further restrictions on the exercise of the\n"
"rights granted or affirmed under this License.  For example, you may\n"
"not impose"
                        " a license fee, royalty, or other charge for exercise of\n"
"rights granted under this License, and you may not initiate litigation\n"
"(including a cross-claim or counterclaim in a lawsuit) alleging that\n"
"any patent claim is infringed by making, using, selling, offering for\n"
"sale, or importing the Program or any portion of it.\n"
"\n"
"  11. Patents.\n"
"\n"
"  A \"contributor\" is a copyright holder who authorizes use under this\n"
"License of the Program or a work on which the Program is based.  The\n"
"work thus licensed is called the contributor's \"contributor version\".\n"
"\n"
"  A contributor's \"essential patent claims\" are all patent claims\n"
"owned or controlled by the contributor, whether already acquired or\n"
"hereafter acquired, that would be infringed by some manner, permitted\n"
"by this License, of making, using, or selling its contributor version,\n"
"but do not include claims that would be infringed only as a\n"
"consequence of further modification of the contributor version.  For\n"
""
                        "purposes of this definition, \"control\" includes the right to grant\n"
"patent sublicenses in a manner consistent with the requirements of\n"
"this License.\n"
"\n"
"  Each contributor grants you a non-exclusive, worldwide, royalty-free\n"
"patent license under the contributor's essential patent claims, to\n"
"make, use, sell, offer for sale, import and otherwise run, modify and\n"
"propagate the contents of its contributor version.\n"
"\n"
"  In the following three paragraphs, a \"patent license\" is any express\n"
"agreement or commitment, however denominated, not to enforce a patent\n"
"(such as an express permission to practice a patent or covenant not to\n"
"sue for patent infringement).  To \"grant\" such a patent license to a\n"
"party means to make such an agreement or commitment not to enforce a\n"
"patent against the party.\n"
"\n"
"  If you convey a covered work, knowingly relying on a patent license,\n"
"and the Corresponding Source of the work is not available for anyone\n"
"to copy, free of char"
                        "ge and under the terms of this License, through a\n"
"publicly available network server or other readily accessible means,\n"
"then you must either (1) cause the Corresponding Source to be so\n"
"available, or (2) arrange to deprive yourself of the benefit of the\n"
"patent license for this particular work, or (3) arrange, in a manner\n"
"consistent with the requirements of this License, to extend the patent\n"
"license to downstream recipients.  \"Knowingly relying\" means you have\n"
"actual knowledge that, but for the patent license, your conveying the\n"
"covered work in a country, or your recipient's use of the covered work\n"
"in a country, would infringe one or more identifiable patents in that\n"
"country that you have reason to believe are valid.\n"
"\n"
"  If, pursuant to or in connection with a single transaction or\n"
"arrangement, you convey, or propagate by procuring conveyance of, a\n"
"covered work, and grant a patent license to some of the parties\n"
"receiving the covered work authorizing the"
                        "m to use, propagate, modify\n"
"or convey a specific copy of the covered work, then the patent license\n"
"you grant is automatically extended to all recipients of the covered\n"
"work and works based on it.\n"
"\n"
"  A patent license is \"discriminatory\" if it does not include within\n"
"the scope of its coverage, prohibits the exercise of, or is\n"
"conditioned on the non-exercise of one or more of the rights that are\n"
"specifically granted under this License.  You may not convey a covered\n"
"work if you are a party to an arrangement with a third party that is\n"
"in the business of distributing software, under which you make payment\n"
"to the third party based on the extent of your activity of conveying\n"
"the work, and under which the third party grants, to any of the\n"
"parties who would receive the covered work from you, a discriminatory\n"
"patent license (a) in connection with copies of the covered work\n"
"conveyed by you (or copies made from those copies), or (b) primarily\n"
"for and in conn"
                        "ection with specific products or compilations that\n"
"contain the covered work, unless you entered into that arrangement,\n"
"or that patent license was granted, prior to 28 March 2007.\n"
"\n"
"  Nothing in this License shall be construed as excluding or limiting\n"
"any implied license or other defenses to infringement that may\n"
"otherwise be available to you under applicable patent law.\n"
"\n"
"  12. No Surrender of Others' Freedom.\n"
"\n"
"  If conditions are imposed on you (whether by court order, agreement or\n"
"otherwise) that contradict the conditions of this License, they do not\n"
"excuse you from the conditions of this License.  If you cannot convey a\n"
"covered work so as to satisfy simultaneously your obligations under this\n"
"License and any other pertinent obligations, then as a consequence you may\n"
"not convey it at all.  For example, if you agree to terms that obligate you\n"
"to collect a royalty for further conveying from those to whom you convey\n"
"the Program, the only way you c"
                        "ould satisfy both those terms and this\n"
"License would be to refrain entirely from conveying the Program.\n"
"\n"
"  13. Use with the GNU Affero General Public License.\n"
"\n"
"  Notwithstanding any other provision of this License, you have\n"
"permission to link or combine any covered work with a work licensed\n"
"under version 3 of the GNU Affero General Public License into a single\n"
"combined work, and to convey the resulting work.  The terms of this\n"
"License will continue to apply to the part which is the covered work,\n"
"but the special requirements of the GNU Affero General Public License,\n"
"section 13, concerning interaction through a network will apply to the\n"
"combination as such.\n"
"\n"
"  14. Revised Versions of this License.\n"
"\n"
"  The Free Software Foundation may publish revised and/or new versions of\n"
"the GNU General Public License from time to time.  Such new versions will\n"
"be similar in spirit to the present version, but may differ in detail to\n"
"address new problems o"
                        "r concerns.\n"
"\n"
"  Each version is given a distinguishing version number.  If the\n"
"Program specifies that a certain numbered version of the GNU General\n"
"Public License \"or any later version\" applies to it, you have the\n"
"option of following the terms and conditions either of that numbered\n"
"version or of any later version published by the Free Software\n"
"Foundation.  If the Program does not specify a version number of the\n"
"GNU General Public License, you may choose any version ever published\n"
"by the Free Software Foundation.\n"
"\n"
"  If the Program specifies that a proxy can decide which future\n"
"versions of the GNU General Public License can be used, that proxy's\n"
"public statement of acceptance of a version permanently authorizes you\n"
"to choose that version for the Program.\n"
"\n"
"  Later license versions may give you additional or different\n"
"permissions.  However, no additional obligations are imposed on any\n"
"author or copyright holder as a result of your choosing to"
                        " follow a\n"
"later version.\n"
"\n"
"  15. Disclaimer of Warranty.\n"
"\n"
"  THERE IS NO WARRANTY FOR THE PROGRAM, TO THE EXTENT PERMITTED BY\n"
"APPLICABLE LAW.  EXCEPT WHEN OTHERWISE STATED IN WRITING THE COPYRIGHT\n"
"HOLDERS AND/OR OTHER PARTIES PROVIDE THE PROGRAM \"AS IS\" WITHOUT WARRANTY\n"
"OF ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING, BUT NOT LIMITED TO,\n"
"THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR\n"
"PURPOSE.  THE ENTIRE RISK AS TO THE QUALITY AND PERFORMANCE OF THE PROGRAM\n"
"IS WITH YOU.  SHOULD THE PROGRAM PROVE DEFECTIVE, YOU ASSUME THE COST OF\n"
"ALL NECESSARY SERVICING, REPAIR OR CORRECTION.\n"
"\n"
"  16. Limitation of Liability.\n"
"\n"
"  IN NO EVENT UNLESS REQUIRED BY APPLICABLE LAW OR AGREED TO IN WRITING\n"
"WILL ANY COPYRIGHT HOLDER, OR ANY OTHER PARTY WHO MODIFIES AND/OR CONVEYS\n"
"THE PROGRAM AS PERMITTED ABOVE, BE LIABLE TO YOU FOR DAMAGES, INCLUDING ANY\n"
"GENERAL, SPECIAL, INCIDENTAL OR CONSEQUENTIAL DAMAGES ARISING OUT OF THE\n"
"USE OR "
                        "INABILITY TO USE THE PROGRAM (INCLUDING BUT NOT LIMITED TO LOSS OF\n"
"DATA OR DATA BEING RENDERED INACCURATE OR LOSSES SUSTAINED BY YOU OR THIRD\n"
"PARTIES OR A FAILURE OF THE PROGRAM TO OPERATE WITH ANY OTHER PROGRAMS),\n"
"EVEN IF SUCH HOLDER OR OTHER PARTY HAS BEEN ADVISED OF THE POSSIBILITY OF\n"
"SUCH DAMAGES.\n"
"\n"
"  17. Interpretation of Sections 15 and 16.\n"
"\n"
"  If the disclaimer of warranty and limitation of liability provided\n"
"above cannot be given local legal effect according to their terms,\n"
"reviewing courts shall apply local law that most closely approximates\n"
"an absolute waiver of all civil liability in connection with the\n"
"Program, unless a warranty or assumption of liability accompanies a\n"
"copy of the Program in return for a fee.\n"
"\n"
"                     END OF TERMS AND CONDITIONS\n"
"\n"
"            How to Apply These Terms to Your New Programs\n"
"\n"
"  If you develop a new program, and you want it to be of the greatest\n"
"possible use to the public, the best"
                        " way to achieve this is to make it\n"
"free software which everyone can redistribute and change under these terms.\n"
"\n"
"  To do so, attach the following notices to the program.  It is safest\n"
"to attach them to the start of each source file to most effectively\n"
"state the exclusion of warranty; and each file should have at least\n"
"the \"copyright\" line and a pointer to where the full notice is found.\n"
"\n"
"    <one line to give the program's name and a brief idea of what it does.>\n"
"    Copyright (C) <year>  <name of author>\n"
"\n"
"    This program is free software: you can redistribute it and/or modify\n"
"    it under the terms of the GNU General Public License as published by\n"
"    the Free Software Foundation, either version 3 of the License, or\n"
"    (at your option) any later version.\n"
"\n"
"    This program is distributed in the hope that it will be useful,\n"
"    but WITHOUT ANY WARRANTY; without even the implied warranty of\n"
"    MERCHANTABILITY or FITNESS FOR A PARTICULAR P"
                        "URPOSE.  See the\n"
"    GNU General Public License for more details.\n"
"\n"
"    You should have received a copy of the GNU General Public License\n"
"    along with this program.  If not, see <http://www.gnu.org/licenses/>.\n"
"\n"
"Also add information on how to contact you by electronic and paper mail.\n"
"\n"
"  If the program does terminal interaction, make it output a short\n"
"notice like this when it starts in an interactive mode:\n"
"\n"
"    <program>  Copyright (C) <year>  <name of author>\n"
"    This program comes with ABSOLUTELY NO WARRANTY; for details type `show w'.\n"
"    This is free software, and you are welcome to redistribute it\n"
"    under certain conditions; type `show c' for details.\n"
"\n"
"The hypothetical commands `show w' and `show c' should show the appropriate\n"
"parts of the General Public License.  Of course, your program's commands\n"
"might be different; for a GUI interface, you would use an \"about box\".\n"
"\n"
"  You should also get your employer (if you work as a p"
                        "rogrammer) or school,\n"
"if any, to sign a \"copyright disclaimer\" for the program, if necessary.\n"
"For more information on this, and how to apply and follow the GNU GPL, see\n"
"<http://www.gnu.org/licenses/>.\n"
"\n"
"  The GNU General Public License does not permit incorporating your program\n"
"into proprietary programs.  If your program is a subroutine library, you\n"
"may consider it more useful to permit linking proprietary applications with\n"
"the library.  If this is what you want to do, use the GNU Lesser General\n"
"Public License instead of this License.  But first, please read\n"
"<http://www.gnu.org/philosophy/why-not-lgpl.html>.\n"
"--8<---------------cut here---------------end--------------->8---"));
        sankoreTextEdit->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayout_9->addWidget(sankoreTextEdit);

        OpenSSLWidget->addTab(sankoreTab, QString());

        verticalLayout_3->addWidget(OpenSSLWidget);

        mainTabWidget->addTab(thirdPartyLicence, QString());
        aboutTab = new QWidget();
        aboutTab->setObjectName(QString::fromUtf8("aboutTab"));
        aboutTab->setEnabled(true);
        verticalLayout_2 = new QVBoxLayout(aboutTab);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        copyrightTextBrowser = new QTextBrowser(aboutTab);
        copyrightTextBrowser->setObjectName(QString::fromUtf8("copyrightTextBrowser"));
        copyrightTextBrowser->setAcceptDrops(false);
        copyrightTextBrowser->setHtml(QString::fromUtf8("<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu';\">Open-Sankor\303\251 version 2.1.0, Copyright (C) 2010-2013 Groupement d'Int\303\251r\303\252t Public pour l'Education Num\303\251rique en Afrique (GIP ENA)<br /><br />Open-Sankor\303\251 est un logiciel libre : vous pouvez le redistribuer et/ou le modifier en respectant les termes de la GNU General Public Licence (GNU GPL) telle que publi\303\251e par la Fr"
                        "ee Software Foundation en version 3, avec une exception OpenSSL.<br />Vous pouvez consulter et charger le code source du logiciel sur </span><a href=\"https://github.com/Sankore\"><span style=\" font-family:'Ubuntu'; text-decoration: underline; color:#0000ff;\">&lt;https://github.com/Sankore&gt;</span></a><span style=\" font-family:'Ubuntu';\"><br />Open-Sankor\303\251 est distribu\303\251 dans l'espoir qu'il sera utile, mais SANS AUCUNE GARANTIE, sans m\303\252me la garantie implicite de COMMERCIALISATION ou D'ADAPTATION A UN OBJET PARTICULIER.<br />Veuillez consulter la licence GNU General Public Licence situ\303\251e dans l'onglet Licences ou consulter le site </span><a href=\"http://www.gnu.org/licenses/\"><span style=\" font-family:'Ubuntu'; text-decoration: underline; color:#0000ff;\">&lt;http://www.gnu.org/licenses/&gt;</span></a><span style=\" font-family:'Ubuntu';\">.<br /><br />Open-Sankor\303\251 is free software: you can redistribute it and/or modify it under the terms of the GNU General Public Lic"
                        "ense as published by the Free Software Foundation, version 3 of the License, with a specific linking exception for the OpenSSL project's &quot;OpenSSL&quot; library (or with modified versions of it that use the same license as the &quot;OpenSSL&quot; library). You can find the source code of this software at </span><a href=\"https://github.com/Sankore\"><span style=\" font-family:'Ubuntu'; text-decoration: underline; color:#0000ff;\">&lt;https://github.com/Sankore&gt;</span></a><span style=\" font-family:'Ubuntu';\"><br />Open-Sankor\303\251 is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License below for more details.<br /><br /></span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu';\">Contact : <br />Groupement d'Int\303\251r\303\252t Public pour l"
                        "'Education Num\303\251rique en Afrique (GIP ENA)<br />D\303\251l\303\251gation Interminist\303\251rielle \303\240 l'Education Num\303\251rique en Afrique<br />20 Avenue S\303\251gur Paris 75007<br />T\303\251l\303\251phone : 01 43 17 68 08<br />email: </span><a href=\"mailto:contact@sankore.org\"><span style=\" font-family:'Ubuntu'; text-decoration: underline; color:#0000ff;\">contact@sankore.org</span></a><span style=\" font-family:'Ubuntu';\">&quot;</span></p></td></tr></table></body></html>"));
        copyrightTextBrowser->setOpenLinks(false);

        verticalLayout_2->addWidget(copyrightTextBrowser);

        softwareUpdateGroupBox = new QGroupBox(aboutTab);
        softwareUpdateGroupBox->setObjectName(QString::fromUtf8("softwareUpdateGroupBox"));
        softwareUpdateGroupBox->setMinimumSize(QSize(0, 70));
        softwareUpdateGroupBox->setMaximumSize(QSize(16777215, 70));
        checkSoftwareUpdateAtLaunchCheckBox = new QCheckBox(softwareUpdateGroupBox);
        checkSoftwareUpdateAtLaunchCheckBox->setObjectName(QString::fromUtf8("checkSoftwareUpdateAtLaunchCheckBox"));
        checkSoftwareUpdateAtLaunchCheckBox->setEnabled(true);
        checkSoftwareUpdateAtLaunchCheckBox->setGeometry(QRect(10, 30, 551, 21));
        checkSoftwareUpdateAtLaunchCheckBox->setChecked(true);

        verticalLayout_2->addWidget(softwareUpdateGroupBox);

        mainTabWidget->addTab(aboutTab, QString());
        creditsTab = new QWidget();
        creditsTab->setObjectName(QString::fromUtf8("creditsTab"));
        verticalLayout_31 = new QVBoxLayout(creditsTab);
        verticalLayout_31->setObjectName(QString::fromUtf8("verticalLayout_31"));
        credentialTextBrowser = new QTextBrowser(creditsTab);
        credentialTextBrowser->setObjectName(QString::fromUtf8("credentialTextBrowser"));
        credentialTextBrowser->setHtml(QString::fromUtf8("<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:10pt;\">Cr\303\251dits police scolaire Open-Sankor\303\251 : </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Ubuntu'; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:10pt;\"><br /></span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px;"
                        " margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:10pt;\">La police Andika Basic dispose d'une licence Open Font License </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:10pt;\"> \302\251 Sil international</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:10pt;\">Source http://scripts.sil.org/cms/scripts/page.php?site_id=nrsi&amp;id=andika</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Ubuntu'; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span st"
                        "yle=\" font-family:'Ubuntu'; font-size:10pt;\"><br /></span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:10pt;\">Licence OFL (traduction fran\303\247aise non officielle) http://fontforge.sourceforge.net/OFL-Unofficial-fr.html</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Ubuntu'; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:10pt;\"><br /></span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:10pt;\">Les polices Ecolier suivantes sont l'oeuvre de Jean-Marie Douteau et disposent "
                        "d'une licence OFL : </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:10pt;\">- Ecolier Court </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:10pt;\">- Ecolier Ligne Court</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:10pt;\"> \302\251 Jean-Marie Douteau (douteau.ecolier@sfr.fr)</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:10pt;\">Source : http://douteau.ecolier.perso.sfr.fr/page_ecolier.htm</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px"
                        "; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Ubuntu'; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:10pt;\"><br /></span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:10pt;\">Les polices Ecolier suivantes sont l'oeuvre de Jean-Marie Douteau et disposent d'une licence Creative Commons BY NC ND :</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:10pt;\">- Ecolier lignes pointill\303\251s</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; fo"
                        "nt-size:10pt;\">- \303\211colier pointill\303\251s</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:10pt;\">- \303\211colier CP</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:10pt;\">- \303\211colier CP pointill\303\251s</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:10pt;\"> \302\251 Jean-Marie Douteau (douteau.ecolier@sfr.fr)</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:10pt;\">Source : http://douteau.ecolier.perso.sfr.fr/page_ecolier.htm</span></p>\n"
"<p style=\"-qt-paragr"
                        "aph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Ubuntu'; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:10pt;\"><br /></span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:10pt;\">Les polices Cursive sont l'oeuvre d'Antoine Fetet (antoine.fetet@laposte.net) \303\240 partir d'une police propos\303\251e par Jean-Claude Gineau</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:10pt;\">Source : http://lps13.free.fr/contenu/construire/Cursive_standard.zip et http://fr.fontriver.com/font/gino_school_script/</span></p>\n"
""
                        "<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:10pt;\">L'auteur en autorise l'utilisation dans le cadre du logiciel open-Sankor\303\251 pour un usage non commercial</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Ubuntu'; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:10pt;\"><br /></span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:10pt;\">Les polices Script (Ecole et CaseEcole) sont l'oeuvre d'Henri Rogelet</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; ma"
                        "rgin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:10pt;\">Source : http://pointecole.free.fr/polices/SCRIPTCO.zip</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:10pt;\">Source : http://pointecole.free.fr/polices/SCRIPTCA.zip</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:10pt;\"> \302\251 Henri Rogelet &lt;h.rogelet@free.fr&gt;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:10pt;\">Autorisation pour un usage non commercial</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><s"
                        "pan style=\" font-family:'Ubuntu'; font-size:10pt;\">Source : http://pointecole.free.fr/polices.html</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Ubuntu'; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:10pt;\"><br /></span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:10pt;\">La police phon\303\251tique, Alphonet est l'oeuvre d'Henri Rogelet</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:10pt;\">Source : http://pointecole.free.fr/polices/ALPHONET.zip</span></p>\n"
"<p styl"
                        "e=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:10pt;\"> \302\251 Henri Rogelet &lt;h.rogelet@free.fr&gt;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:10pt;\">Autorisation pour un usage non commercial</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:10pt;\">Source : http://pointecole.free.fr/polices.html</span></p></body></html>"));
        credentialTextBrowser->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        credentialTextBrowser->setOpenExternalLinks(true);
        credentialTextBrowser->setOpenLinks(false);

        verticalLayout_31->addWidget(credentialTextBrowser);

        textBrowser = new QTextBrowser(creditsTab);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setAcceptDrops(false);
        textBrowser->setHtml(QString::fromUtf8("<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\">Translations</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">A special thanks to:</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\""
                        "><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">        \342\200\242 Alexander Angelov and Iva Ninova for Bulgarian</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">        \342\200\242 Francesc Busquets and Toni Hortal for Catalan</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">        \342\200\242 Christophe Gallego for Corsican</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">        \342\200\242 Jaroslav Krej\304\215\303\255, Janek Wagner for Czech</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">        \342\200\242 Geert Kraeye and Derk Klomp for Dutch</p>\n"
"<p style=\" margin-top:0px; margin-bottom:"
                        "0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">        \342\200\242 Christian O\303\257h\303\251nart and Fran\303\247ois Bocquet for French</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">        \342\200\242 Hans-Peter Zahno and Klaus Tenner for German</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">        \342\200\242 Yannis Kaskamanidis for Greek</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">        \342\200\242 Lalit Mohan\302\240for Hindi</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">        \342\200\242 Antonello Comi and Marco Menardi for Italian</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-inde"
                        "nt:0; text-indent:0px;\">        \342\200\242 Didier Clerc for Japanese</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">        \342\200\242 Faraniaina Domoina Rabarijaona for Malagasy</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">        \342\200\242 Patricia Fisch and C\303\251sar Marques for Portuguese</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">        \342\200\242 Ilia Ryabokon for Russian</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">        \342\200\242 Anki Chen for Traditional Chinese</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">        \342\200\242 Jaroslav Ryn\303\255k for Slovak</p>\n"
"<p "
                        "style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">        \342\200\242 Dorian Fuentes and Juan Jos\303\251 Guti\303\251rrez Aparicio for Spanish</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">        \342\200\242 Ferhat Ozkasgarli for Turkish</p></body></html>"));

        verticalLayout_31->addWidget(textBrowser);

        mainTabWidget->addTab(creditsTab, QString());

        gridLayout->addWidget(mainTabWidget, 1, 0, 1, 1);

        QWidget::setTabOrder(mainTabWidget, useExternalBrowserCheckBox);
        QWidget::setTabOrder(useExternalBrowserCheckBox, displayBrowserPageCheckBox);
        QWidget::setTabOrder(displayBrowserPageCheckBox, toolbarAtTopRadioButton);
        QWidget::setTabOrder(toolbarAtTopRadioButton, toolbarAtBottomRadioButton);
        QWidget::setTabOrder(toolbarAtBottomRadioButton, defaultSettingsButton);
        QWidget::setTabOrder(defaultSettingsButton, closeButton);

        retranslateUi(preferencesDialog);

        mainTabWidget->setCurrentIndex(0);
        OpenSSLWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(preferencesDialog);
    } // setupUi

    void retranslateUi(QDialog *preferencesDialog)
    {
        preferencesDialog->setWindowTitle(QApplication::translate("preferencesDialog", "Preferences", 0, QApplication::UnicodeUTF8));
        versionLabel->setText(QApplication::translate("preferencesDialog", "version : \342\200\246", 0, QApplication::UnicodeUTF8));
        defaultSettingsButton->setText(QApplication::translate("preferencesDialog", "Default Settings", 0, QApplication::UnicodeUTF8));
        closeButton->setText(QApplication::translate("preferencesDialog", "Close", 0, QApplication::UnicodeUTF8));
        languageGroupBox->setTitle(QApplication::translate("preferencesDialog", "Language", 0, QApplication::UnicodeUTF8));
        languageLabel->setText(QApplication::translate("preferencesDialog", "Select a language", 0, QApplication::UnicodeUTF8));
        closeOpenSankoreAlertLabel->setText(QApplication::translate("preferencesDialog", "The new language will be loaded on next restart", 0, QApplication::UnicodeUTF8));
        quitOpenSankorePushButton->setText(QApplication::translate("preferencesDialog", "Close Open-Sankor\303\251", 0, QApplication::UnicodeUTF8));
        startupGroupBox->setTitle(QApplication::translate("preferencesDialog", "Start up tips", 0, QApplication::UnicodeUTF8));
        startupTipsCheckBox->setText(QApplication::translate("preferencesDialog", "Show start up tips", 0, QApplication::UnicodeUTF8));
        multiDisplayGroupBox->setTitle(QApplication::translate("preferencesDialog", "Multi display", 0, QApplication::UnicodeUTF8));
        displayBrowserPageCheckBox->setText(QApplication::translate("preferencesDialog", "Show internal web page content on secondary screen or projector", 0, QApplication::UnicodeUTF8));
        swapControlAndDisplayScreensCheckBox->setText(QApplication::translate("preferencesDialog", "Swap control display and view display", 0, QApplication::UnicodeUTF8));
        toolbarGroupBox->setTitle(QApplication::translate("preferencesDialog", "Toolbar", 0, QApplication::UnicodeUTF8));
        toolbarAtTopRadioButton->setText(QApplication::translate("preferencesDialog", "Positioned at the Top (recommended for tablets)", 0, QApplication::UnicodeUTF8));
        toolbarAtBottomRadioButton->setText(QApplication::translate("preferencesDialog", "Positioned at the Bottom (recommended for white boards)", 0, QApplication::UnicodeUTF8));
        toolbarDisplayTextCheckBox->setText(QApplication::translate("preferencesDialog", "Display Text Under Button", 0, QApplication::UnicodeUTF8));
        stylusPaletteGroupBox->setTitle(QApplication::translate("preferencesDialog", "Stylus Palette", 0, QApplication::UnicodeUTF8));
        horizontalChoice->setText(QApplication::translate("preferencesDialog", "Horizontal", 0, QApplication::UnicodeUTF8));
        verticalChoice->setText(QApplication::translate("preferencesDialog", "Vertical", 0, QApplication::UnicodeUTF8));
        keyboardGroupBox->setTitle(QApplication::translate("preferencesDialog", "Virtual Keyboard", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("preferencesDialog", "Keyboard button size:", 0, QApplication::UnicodeUTF8));
        modeGroupBox->setTitle(QApplication::translate("preferencesDialog", "Mode", 0, QApplication::UnicodeUTF8));
        modeLabel->setText(QApplication::translate("preferencesDialog", "Mode to start in:", 0, QApplication::UnicodeUTF8));
        startModeComboBox->clear();
        startModeComboBox->insertItems(0, QStringList()
         << QApplication::translate("preferencesDialog", "Board", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "Desktop", 0, QApplication::UnicodeUTF8)
        );
        mainTabWidget->setTabText(mainTabWidget->indexOf(displayTab), QApplication::translate("preferencesDialog", "Display", 0, QApplication::UnicodeUTF8));
        mainTabWidget->setTabText(mainTabWidget->indexOf(penTab), QApplication::translate("preferencesDialog", "Pen", 0, QApplication::UnicodeUTF8));
        mainTabWidget->setTabText(mainTabWidget->indexOf(markerTab), QApplication::translate("preferencesDialog", "Marker", 0, QApplication::UnicodeUTF8));
        internetGroupBox->setTitle(QApplication::translate("preferencesDialog", "Internet", 0, QApplication::UnicodeUTF8));
        useExternalBrowserCheckBox->setText(QApplication::translate("preferencesDialog", "Show Page with External Browser", 0, QApplication::UnicodeUTF8));
        labelHomePage->setText(QApplication::translate("preferencesDialog", "Home Page:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("preferencesDialog", "Proxy User:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("preferencesDialog", "Pass:", 0, QApplication::UnicodeUTF8));
        CommunityGroupBox->setTitle(QApplication::translate("preferencesDialog", "Plan\303\250te Sankor\303\251 ID for exporting file", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("preferencesDialog", "User:", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("preferencesDialog", "Pass: ", 0, QApplication::UnicodeUTF8));
        PSCredentialsPersistenceCheckBox->setText(QApplication::translate("preferencesDialog", "Restore credentials on reboot  ", 0, QApplication::UnicodeUTF8));
        mainTabWidget->setTabText(mainTabWidget->indexOf(networkTab), QApplication::translate("preferencesDialog", "Network", 0, QApplication::UnicodeUTF8));
        LicenceWarningTextBrowser->setHtml(QApplication::translate("preferencesDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu';\">The licences are in English to respect the official and legal approved translation.</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        OpenSSLWidget->setTabText(OpenSSLWidget->indexOf(OpenSSLTab), QApplication::translate("preferencesDialog", "OpenSSL", 0, QApplication::UnicodeUTF8));
        OpenSSLWidget->setTabText(OpenSSLWidget->indexOf(zlibTab), QApplication::translate("preferencesDialog", "zlib", 0, QApplication::UnicodeUTF8));
        OpenSSLWidget->setTabText(OpenSSLWidget->indexOf(XpdfTab), QApplication::translate("preferencesDialog", "Xpdf", 0, QApplication::UnicodeUTF8));
        OpenSSLWidget->setTabText(OpenSSLWidget->indexOf(QuaZIPTab), QApplication::translate("preferencesDialog", "QuaZIP", 0, QApplication::UnicodeUTF8));
        OpenSSLWidget->setTabText(OpenSSLWidget->indexOf(sankoreTab), QApplication::translate("preferencesDialog", "Open-Sankor\303\251", 0, QApplication::UnicodeUTF8));
        mainTabWidget->setTabText(mainTabWidget->indexOf(thirdPartyLicence), QApplication::translate("preferencesDialog", "Licences", 0, QApplication::UnicodeUTF8));
        softwareUpdateGroupBox->setTitle(QApplication::translate("preferencesDialog", "Software Update", 0, QApplication::UnicodeUTF8));
        checkSoftwareUpdateAtLaunchCheckBox->setText(QApplication::translate("preferencesDialog", "Check software update at launch", 0, QApplication::UnicodeUTF8));
        mainTabWidget->setTabText(mainTabWidget->indexOf(aboutTab), QApplication::translate("preferencesDialog", "About", 0, QApplication::UnicodeUTF8));
        mainTabWidget->setTabText(mainTabWidget->indexOf(creditsTab), QApplication::translate("preferencesDialog", "Credits", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class preferencesDialog: public Ui_preferencesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFERENCES_H
