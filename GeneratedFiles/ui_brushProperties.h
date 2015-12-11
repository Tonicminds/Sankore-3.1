/********************************************************************************
** Form generated from reading UI file 'brushProperties.ui'
**
** Created: Fri 6. Nov 10:33:52 2015
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BRUSHPROPERTIES_H
#define UI_BRUSHPROPERTIES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include "gui/UBCircleFrame.h"
#include "gui/UBColorPicker.h"

QT_BEGIN_NAMESPACE

class Ui_brushProperties
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *nSpacer;
    QSpacerItem *nwSpacer;
    QFrame *colorFrame;
    QVBoxLayout *verticalLayout;
    QFrame *lightBackgroundFrame;
    QHBoxLayout *lightBackgroundLayout;
    QLabel *lightBackgroundLabel;
    QSpacerItem *horizontalSpacer;
    UBColorPicker *lightBackgroundColorPicker0;
    QFrame *darkBackgroundFrame;
    QHBoxLayout *darkBackgroundLayout;
    QLabel *darkBackgroundLabel;
    QSpacerItem *horizontalSpacer_2;
    UBColorPicker *darkBackgroundColorPicker0;
    QSpacerItem *neSpacer;
    QFrame *opacityFrame;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *wSpacer_2;
    QLabel *opacityLabel;
    QSlider *opacitySlider;
    QSpacerItem *eSpacer_2;
    QSpacerItem *cSpacer;
    QGroupBox *lineWidthGroupBox;
    QGridLayout *gridLayout_2;
    QSpacerItem *wSpacer;
    QSpacerItem *eSpacer;
    QSlider *fineSlider;
    QLabel *mediumLabel;
    QSlider *mediumSlider;
    QLabel *strongLabel;
    QSlider *strongSlider;
    UBCircleFrame *fineDisplayFrame;
    UBCircleFrame *mediumDisplayFrame;
    UBCircleFrame *strongDisplayFrame;
    QLabel *fineLabel;
    QFrame *pressureFrame;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *swSpacer;
    QCheckBox *pressureSensitiveCheckBox;
    QSpacerItem *seSpacer;

    void setupUi(QFrame *brushProperties)
    {
        if (brushProperties->objectName().isEmpty())
            brushProperties->setObjectName(QString::fromUtf8("brushProperties"));
        brushProperties->resize(605, 808);
        brushProperties->setFrameShape(QFrame::NoFrame);
        brushProperties->setFrameShadow(QFrame::Plain);
        gridLayout = new QGridLayout(brushProperties);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        nSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(nSpacer, 0, 1, 1, 1);

        nwSpacer = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(nwSpacer, 1, 0, 1, 1);

        colorFrame = new QFrame(brushProperties);
        colorFrame->setObjectName(QString::fromUtf8("colorFrame"));
        colorFrame->setFrameShape(QFrame::NoFrame);
        colorFrame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(colorFrame);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lightBackgroundFrame = new QFrame(colorFrame);
        lightBackgroundFrame->setObjectName(QString::fromUtf8("lightBackgroundFrame"));
        lightBackgroundFrame->setFrameShape(QFrame::NoFrame);
        lightBackgroundFrame->setFrameShadow(QFrame::Raised);
        lightBackgroundLayout = new QHBoxLayout(lightBackgroundFrame);
        lightBackgroundLayout->setObjectName(QString::fromUtf8("lightBackgroundLayout"));
        lightBackgroundLabel = new QLabel(lightBackgroundFrame);
        lightBackgroundLabel->setObjectName(QString::fromUtf8("lightBackgroundLabel"));

        lightBackgroundLayout->addWidget(lightBackgroundLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        lightBackgroundLayout->addItem(horizontalSpacer);

        lightBackgroundColorPicker0 = new UBColorPicker(lightBackgroundFrame);
        lightBackgroundColorPicker0->setObjectName(QString::fromUtf8("lightBackgroundColorPicker0"));
        lightBackgroundColorPicker0->setMinimumSize(QSize(32, 32));
        lightBackgroundColorPicker0->setFrameShape(QFrame::StyledPanel);
        lightBackgroundColorPicker0->setFrameShadow(QFrame::Raised);

        lightBackgroundLayout->addWidget(lightBackgroundColorPicker0);


        verticalLayout->addWidget(lightBackgroundFrame);

        darkBackgroundFrame = new QFrame(colorFrame);
        darkBackgroundFrame->setObjectName(QString::fromUtf8("darkBackgroundFrame"));
        darkBackgroundFrame->setFrameShape(QFrame::NoFrame);
        darkBackgroundFrame->setFrameShadow(QFrame::Raised);
        darkBackgroundLayout = new QHBoxLayout(darkBackgroundFrame);
        darkBackgroundLayout->setObjectName(QString::fromUtf8("darkBackgroundLayout"));
        darkBackgroundLabel = new QLabel(darkBackgroundFrame);
        darkBackgroundLabel->setObjectName(QString::fromUtf8("darkBackgroundLabel"));

        darkBackgroundLayout->addWidget(darkBackgroundLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        darkBackgroundLayout->addItem(horizontalSpacer_2);

        darkBackgroundColorPicker0 = new UBColorPicker(darkBackgroundFrame);
        darkBackgroundColorPicker0->setObjectName(QString::fromUtf8("darkBackgroundColorPicker0"));
        darkBackgroundColorPicker0->setMinimumSize(QSize(32, 32));
        darkBackgroundColorPicker0->setFrameShape(QFrame::StyledPanel);
        darkBackgroundColorPicker0->setFrameShadow(QFrame::Raised);

        darkBackgroundLayout->addWidget(darkBackgroundColorPicker0);


        verticalLayout->addWidget(darkBackgroundFrame);


        gridLayout->addWidget(colorFrame, 1, 1, 1, 1);

        neSpacer = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(neSpacer, 1, 2, 1, 1);

        opacityFrame = new QFrame(brushProperties);
        opacityFrame->setObjectName(QString::fromUtf8("opacityFrame"));
        opacityFrame->setFrameShape(QFrame::NoFrame);
        opacityFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(opacityFrame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        wSpacer_2 = new QSpacerItem(154, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(wSpacer_2);

        opacityLabel = new QLabel(opacityFrame);
        opacityLabel->setObjectName(QString::fromUtf8("opacityLabel"));

        horizontalLayout->addWidget(opacityLabel);

        opacitySlider = new QSlider(opacityFrame);
        opacitySlider->setObjectName(QString::fromUtf8("opacitySlider"));
        opacitySlider->setMinimum(20);
        opacitySlider->setMaximum(100);
        opacitySlider->setValue(50);
        opacitySlider->setOrientation(Qt::Horizontal);
        opacitySlider->setTickPosition(QSlider::TicksAbove);
        opacitySlider->setTickInterval(20);

        horizontalLayout->addWidget(opacitySlider);

        eSpacer_2 = new QSpacerItem(156, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(eSpacer_2);


        gridLayout->addWidget(opacityFrame, 2, 0, 1, 3);

        cSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(cSpacer, 3, 1, 1, 1);

        lineWidthGroupBox = new QGroupBox(brushProperties);
        lineWidthGroupBox->setObjectName(QString::fromUtf8("lineWidthGroupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineWidthGroupBox->sizePolicy().hasHeightForWidth());
        lineWidthGroupBox->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(lineWidthGroupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        wSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(wSpacer, 1, 1, 1, 1);

        eSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(eSpacer, 1, 3, 1, 1);

        fineSlider = new QSlider(lineWidthGroupBox);
        fineSlider->setObjectName(QString::fromUtf8("fineSlider"));
        fineSlider->setMinimum(5);
        fineSlider->setMaximum(500);
        fineSlider->setValue(5);
        fineSlider->setOrientation(Qt::Horizontal);
        fineSlider->setTickPosition(QSlider::TicksAbove);
        fineSlider->setTickInterval(100);

        gridLayout_2->addWidget(fineSlider, 1, 2, 1, 1);

        mediumLabel = new QLabel(lineWidthGroupBox);
        mediumLabel->setObjectName(QString::fromUtf8("mediumLabel"));

        gridLayout_2->addWidget(mediumLabel, 2, 0, 1, 1);

        mediumSlider = new QSlider(lineWidthGroupBox);
        mediumSlider->setObjectName(QString::fromUtf8("mediumSlider"));
        mediumSlider->setMinimum(5);
        mediumSlider->setMaximum(500);
        mediumSlider->setOrientation(Qt::Horizontal);
        mediumSlider->setTickPosition(QSlider::TicksAbove);
        mediumSlider->setTickInterval(100);

        gridLayout_2->addWidget(mediumSlider, 2, 2, 1, 1);

        strongLabel = new QLabel(lineWidthGroupBox);
        strongLabel->setObjectName(QString::fromUtf8("strongLabel"));

        gridLayout_2->addWidget(strongLabel, 3, 0, 1, 1);

        strongSlider = new QSlider(lineWidthGroupBox);
        strongSlider->setObjectName(QString::fromUtf8("strongSlider"));
        strongSlider->setMinimum(5);
        strongSlider->setMaximum(500);
        strongSlider->setOrientation(Qt::Horizontal);
        strongSlider->setTickPosition(QSlider::TicksAbove);
        strongSlider->setTickInterval(100);

        gridLayout_2->addWidget(strongSlider, 3, 2, 1, 1);

        fineDisplayFrame = new UBCircleFrame(lineWidthGroupBox);
        fineDisplayFrame->setObjectName(QString::fromUtf8("fineDisplayFrame"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(60);
        sizePolicy1.setVerticalStretch(60);
        sizePolicy1.setHeightForWidth(fineDisplayFrame->sizePolicy().hasHeightForWidth());
        fineDisplayFrame->setSizePolicy(sizePolicy1);
        fineDisplayFrame->setMinimumSize(QSize(60, 60));
        fineDisplayFrame->setFrameShape(QFrame::StyledPanel);
        fineDisplayFrame->setFrameShadow(QFrame::Raised);

        gridLayout_2->addWidget(fineDisplayFrame, 1, 4, 1, 1);

        mediumDisplayFrame = new UBCircleFrame(lineWidthGroupBox);
        mediumDisplayFrame->setObjectName(QString::fromUtf8("mediumDisplayFrame"));
        sizePolicy1.setHeightForWidth(mediumDisplayFrame->sizePolicy().hasHeightForWidth());
        mediumDisplayFrame->setSizePolicy(sizePolicy1);
        mediumDisplayFrame->setMinimumSize(QSize(60, 60));
        mediumDisplayFrame->setFrameShape(QFrame::StyledPanel);
        mediumDisplayFrame->setFrameShadow(QFrame::Raised);

        gridLayout_2->addWidget(mediumDisplayFrame, 2, 4, 1, 1);

        strongDisplayFrame = new UBCircleFrame(lineWidthGroupBox);
        strongDisplayFrame->setObjectName(QString::fromUtf8("strongDisplayFrame"));
        sizePolicy1.setHeightForWidth(strongDisplayFrame->sizePolicy().hasHeightForWidth());
        strongDisplayFrame->setSizePolicy(sizePolicy1);
        strongDisplayFrame->setMinimumSize(QSize(60, 60));
        strongDisplayFrame->setFrameShape(QFrame::StyledPanel);
        strongDisplayFrame->setFrameShadow(QFrame::Raised);

        gridLayout_2->addWidget(strongDisplayFrame, 3, 4, 1, 1);

        fineLabel = new QLabel(lineWidthGroupBox);
        fineLabel->setObjectName(QString::fromUtf8("fineLabel"));

        gridLayout_2->addWidget(fineLabel, 1, 0, 1, 1);


        gridLayout->addWidget(lineWidthGroupBox, 4, 0, 1, 3);

        pressureFrame = new QFrame(brushProperties);
        pressureFrame->setObjectName(QString::fromUtf8("pressureFrame"));
        pressureFrame->setFrameShape(QFrame::NoFrame);
        pressureFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(pressureFrame);
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        swSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(swSpacer);

        pressureSensitiveCheckBox = new QCheckBox(pressureFrame);
        pressureSensitiveCheckBox->setObjectName(QString::fromUtf8("pressureSensitiveCheckBox"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pressureSensitiveCheckBox->sizePolicy().hasHeightForWidth());
        pressureSensitiveCheckBox->setSizePolicy(sizePolicy2);

        horizontalLayout_4->addWidget(pressureSensitiveCheckBox);

        seSpacer = new QSpacerItem(198, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(seSpacer);


        gridLayout->addWidget(pressureFrame, 5, 0, 1, 3);


        retranslateUi(brushProperties);

        QMetaObject::connectSlotsByName(brushProperties);
    } // setupUi

    void retranslateUi(QFrame *brushProperties)
    {
        brushProperties->setWindowTitle(QString());
        lightBackgroundLabel->setText(QApplication::translate("brushProperties", "On Light Background", 0, QApplication::UnicodeUTF8));
        darkBackgroundLabel->setText(QApplication::translate("brushProperties", "On Dark Background", 0, QApplication::UnicodeUTF8));
        opacityLabel->setText(QApplication::translate("brushProperties", "Opacity", 0, QApplication::UnicodeUTF8));
        lineWidthGroupBox->setTitle(QApplication::translate("brushProperties", "Line Width", 0, QApplication::UnicodeUTF8));
        mediumLabel->setText(QApplication::translate("brushProperties", "Medium", 0, QApplication::UnicodeUTF8));
        strongLabel->setText(QApplication::translate("brushProperties", "Strong", 0, QApplication::UnicodeUTF8));
        fineLabel->setText(QApplication::translate("brushProperties", "Fine", 0, QApplication::UnicodeUTF8));
        pressureSensitiveCheckBox->setText(QApplication::translate("brushProperties", "Pen is Pressure Sensitive", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class brushProperties: public Ui_brushProperties {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BRUSHPROPERTIES_H
