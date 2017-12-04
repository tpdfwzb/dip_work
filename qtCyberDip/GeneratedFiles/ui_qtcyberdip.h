/********************************************************************************
** Form generated from reading UI file 'qtcyberdip.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTCYBERDIP_H
#define UI_QTCYBERDIP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ShrinkableQLabel.h"

QT_BEGIN_NAMESPACE

class Ui_qtCyberDip
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_5;
    QTabWidget *mainTabWidget;
    QWidget *comTab;
    QHBoxLayout *horizontalLayout_4;
    QGroupBox *comLogBox;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *comMainLog;
    QGridLayout *comSendGridLayout;
    QPushButton *comSendButton;
    QLineEdit *comSendEdit;
    QPushButton *comClcButton;
    QGroupBox *comContrlBox;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *comPortGridLayout;
    QLabel *comPortLabel;
    QComboBox *comSelList;
    QCheckBox *comCheckS;
    QPushButton *comConnectButton;
    QSpacerItem *verticalSpacer;
    QGridLayout *comDirectionGridLayout;
    QPushButton *comRightButton;
    QPushButton *comDownButton;
    QPushButton *comLeftButton;
    QPushButton *comUpButton;
    QPushButton *comInitButton;
    QLabel *comDeltaLabel;
    QDoubleSpinBox *comSpinBox;
    QLabel *comPosLabel;
    QSpacerItem *verticalSpacer_4;
    QGridLayout *comButtonGridLayout;
    QPushButton *comReturnButton;
    QPushButton *comHitButton;
    QWidget *bbqTab;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *bbqListBox;
    QVBoxLayout *verticalLayout_5;
    QListWidget *bbqListDevices;
    QGridLayout *gridLayout_4;
    QLabel *bbqIPText;
    QLineEdit *bbqIP;
    QPushButton *bbqConnect;
    QGroupBox *bbqUSBBox;
    QVBoxLayout *verticalLayout_6;
    QGridLayout *bbqBitGridLayout;
    QSpinBox *bbqSpinBitrate;
    QComboBox *bbqCbQuality;
    QPushButton *bbqBootstrapUSB;
    QPushButton *bbqConnectUSB;
    QSpacerItem *verticalSpacer_2;
    QPushButton *bbqDebugLog;
    QCheckBox *bbqCbHighQuality;
    QCheckBox *bbqShowFps;
    QWidget *capTab;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *capListWinBox;
    QHBoxLayout *horizontalLayout;
    QListWidget *capList;
    QGroupBox *capControlBox;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLineEdit *capHandleEdit;
    QComboBox *capScaleBox;
    QLabel *capHandleText;
    QLabel *capScaleText;
    QPushButton *capScanButton;
    QPushButton *capStartButton;
    QSpacerItem *verticalSpacer_3;
    QPushButton *capClcButton;
    QWidget *vodTab;
    QHBoxLayout *horizontalLayout_8;
    QGroupBox *vodPlayBox;
    QVBoxLayout *verticalLayout_8;
    ShrinkableQLabel *vodDisplay;
    QGroupBox *vodControlBox;
    QVBoxLayout *verticalLayout_7;
    QLabel *vodPathLabel;
    QLineEdit *vodPathEdit;
    QPushButton *vodBrowseButton;
    QPushButton *vodPlayButton;
    QSpacerItem *verticalSpacer_5;
    QPushButton *vodPauseButton;

    void setupUi(QMainWindow *qtCyberDip)
    {
        if (qtCyberDip->objectName().isEmpty())
            qtCyberDip->setObjectName(QStringLiteral("qtCyberDip"));
        qtCyberDip->setWindowModality(Qt::NonModal);
        qtCyberDip->resize(700, 436);
        centralWidget = new QWidget(qtCyberDip);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout_5 = new QHBoxLayout(centralWidget);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        mainTabWidget = new QTabWidget(centralWidget);
        mainTabWidget->setObjectName(QStringLiteral("mainTabWidget"));
        mainTabWidget->setContextMenuPolicy(Qt::DefaultContextMenu);
        mainTabWidget->setTabPosition(QTabWidget::North);
        mainTabWidget->setTabShape(QTabWidget::Rounded);
        mainTabWidget->setUsesScrollButtons(true);
        mainTabWidget->setMovable(true);
        mainTabWidget->setTabBarAutoHide(false);
        comTab = new QWidget();
        comTab->setObjectName(QStringLiteral("comTab"));
        horizontalLayout_4 = new QHBoxLayout(comTab);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        comLogBox = new QGroupBox(comTab);
        comLogBox->setObjectName(QStringLiteral("comLogBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(16);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comLogBox->sizePolicy().hasHeightForWidth());
        comLogBox->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(comLogBox);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        comMainLog = new QTextEdit(comLogBox);
        comMainLog->setObjectName(QStringLiteral("comMainLog"));
        comMainLog->setUndoRedoEnabled(false);
        comMainLog->setReadOnly(true);

        verticalLayout_2->addWidget(comMainLog);

        comSendGridLayout = new QGridLayout();
        comSendGridLayout->setSpacing(6);
        comSendGridLayout->setObjectName(QStringLiteral("comSendGridLayout"));
        comSendButton = new QPushButton(comLogBox);
        comSendButton->setObjectName(QStringLiteral("comSendButton"));
        comSendButton->setEnabled(false);

        comSendGridLayout->addWidget(comSendButton, 0, 1, 1, 1);

        comSendEdit = new QLineEdit(comLogBox);
        comSendEdit->setObjectName(QStringLiteral("comSendEdit"));
        comSendEdit->setMinimumSize(QSize(0, 23));
        comSendEdit->setMaxLength(256);

        comSendGridLayout->addWidget(comSendEdit, 0, 0, 1, 1);

        comClcButton = new QPushButton(comLogBox);
        comClcButton->setObjectName(QStringLiteral("comClcButton"));

        comSendGridLayout->addWidget(comClcButton, 0, 2, 1, 1);


        verticalLayout_2->addLayout(comSendGridLayout);


        horizontalLayout_4->addWidget(comLogBox);

        comContrlBox = new QGroupBox(comTab);
        comContrlBox->setObjectName(QStringLiteral("comContrlBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(9);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comContrlBox->sizePolicy().hasHeightForWidth());
        comContrlBox->setSizePolicy(sizePolicy1);
        comContrlBox->setMinimumSize(QSize(0, 0));
        comContrlBox->setMaximumSize(QSize(400, 16777215));
        comContrlBox->setCursor(QCursor(Qt::ArrowCursor));
        verticalLayout_3 = new QVBoxLayout(comContrlBox);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        comPortGridLayout = new QGridLayout();
        comPortGridLayout->setSpacing(6);
        comPortGridLayout->setObjectName(QStringLiteral("comPortGridLayout"));
        comPortLabel = new QLabel(comContrlBox);
        comPortLabel->setObjectName(QStringLiteral("comPortLabel"));
        comPortLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        comPortGridLayout->addWidget(comPortLabel, 0, 0, 1, 1);

        comSelList = new QComboBox(comContrlBox);
        comSelList->setObjectName(QStringLiteral("comSelList"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(comSelList->sizePolicy().hasHeightForWidth());
        comSelList->setSizePolicy(sizePolicy2);
        comSelList->setMinimumSize(QSize(0, 0));

        comPortGridLayout->addWidget(comSelList, 0, 1, 1, 1);

        comCheckS = new QCheckBox(comContrlBox);
        comCheckS->setObjectName(QStringLiteral("comCheckS"));

        comPortGridLayout->addWidget(comCheckS, 0, 2, 1, 1);


        verticalLayout_3->addLayout(comPortGridLayout);

        comConnectButton = new QPushButton(comContrlBox);
        comConnectButton->setObjectName(QStringLiteral("comConnectButton"));
        sizePolicy2.setHeightForWidth(comConnectButton->sizePolicy().hasHeightForWidth());
        comConnectButton->setSizePolicy(sizePolicy2);
        comConnectButton->setMinimumSize(QSize(0, 40));
        QFont font;
        font.setFamily(QStringLiteral("Trebuchet MS"));
        font.setPointSize(10);
        comConnectButton->setFont(font);

        verticalLayout_3->addWidget(comConnectButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        comDirectionGridLayout = new QGridLayout();
        comDirectionGridLayout->setSpacing(6);
        comDirectionGridLayout->setObjectName(QStringLiteral("comDirectionGridLayout"));
        comRightButton = new QPushButton(comContrlBox);
        comRightButton->setObjectName(QStringLiteral("comRightButton"));
        comRightButton->setEnabled(false);
        comRightButton->setMinimumSize(QSize(0, 40));

        comDirectionGridLayout->addWidget(comRightButton, 3, 3, 1, 1);

        comDownButton = new QPushButton(comContrlBox);
        comDownButton->setObjectName(QStringLiteral("comDownButton"));
        comDownButton->setEnabled(false);
        comDownButton->setMinimumSize(QSize(0, 40));
        comDownButton->setCheckable(false);
        comDownButton->setAutoDefault(false);

        comDirectionGridLayout->addWidget(comDownButton, 4, 1, 1, 1);

        comLeftButton = new QPushButton(comContrlBox);
        comLeftButton->setObjectName(QStringLiteral("comLeftButton"));
        comLeftButton->setEnabled(false);
        comLeftButton->setMinimumSize(QSize(0, 40));

        comDirectionGridLayout->addWidget(comLeftButton, 3, 0, 1, 1);

        comUpButton = new QPushButton(comContrlBox);
        comUpButton->setObjectName(QStringLiteral("comUpButton"));
        comUpButton->setEnabled(false);
        comUpButton->setMinimumSize(QSize(0, 40));

        comDirectionGridLayout->addWidget(comUpButton, 2, 1, 1, 1);

        comInitButton = new QPushButton(comContrlBox);
        comInitButton->setObjectName(QStringLiteral("comInitButton"));
        comInitButton->setEnabled(true);
        comInitButton->setMinimumSize(QSize(0, 40));

        comDirectionGridLayout->addWidget(comInitButton, 3, 1, 1, 1);

        comDeltaLabel = new QLabel(comContrlBox);
        comDeltaLabel->setObjectName(QStringLiteral("comDeltaLabel"));
        comDeltaLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        comDirectionGridLayout->addWidget(comDeltaLabel, 5, 0, 1, 1);

        comSpinBox = new QDoubleSpinBox(comContrlBox);
        comSpinBox->setObjectName(QStringLiteral("comSpinBox"));
        comSpinBox->setMinimumSize(QSize(0, 25));
        comSpinBox->setValue(5);

        comDirectionGridLayout->addWidget(comSpinBox, 5, 1, 1, 1);

        comPosLabel = new QLabel(comContrlBox);
        comPosLabel->setObjectName(QStringLiteral("comPosLabel"));
        comPosLabel->setWordWrap(false);

        comDirectionGridLayout->addWidget(comPosLabel, 5, 3, 1, 1);


        verticalLayout_3->addLayout(comDirectionGridLayout);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_4);

        comButtonGridLayout = new QGridLayout();
        comButtonGridLayout->setSpacing(6);
        comButtonGridLayout->setObjectName(QStringLiteral("comButtonGridLayout"));
        comReturnButton = new QPushButton(comContrlBox);
        comReturnButton->setObjectName(QStringLiteral("comReturnButton"));
        comReturnButton->setEnabled(false);
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(comReturnButton->sizePolicy().hasHeightForWidth());
        comReturnButton->setSizePolicy(sizePolicy3);
        comReturnButton->setMinimumSize(QSize(0, 40));

        comButtonGridLayout->addWidget(comReturnButton, 0, 0, 1, 1);

        comHitButton = new QPushButton(comContrlBox);
        comHitButton->setObjectName(QStringLiteral("comHitButton"));
        comHitButton->setEnabled(false);
        sizePolicy3.setHeightForWidth(comHitButton->sizePolicy().hasHeightForWidth());
        comHitButton->setSizePolicy(sizePolicy3);
        comHitButton->setMinimumSize(QSize(0, 40));

        comButtonGridLayout->addWidget(comHitButton, 0, 1, 1, 1);


        verticalLayout_3->addLayout(comButtonGridLayout);


        horizontalLayout_4->addWidget(comContrlBox);

        mainTabWidget->addTab(comTab, QString());
        bbqTab = new QWidget();
        bbqTab->setObjectName(QStringLiteral("bbqTab"));
        horizontalLayout_2 = new QHBoxLayout(bbqTab);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        bbqListBox = new QGroupBox(bbqTab);
        bbqListBox->setObjectName(QStringLiteral("bbqListBox"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(5);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(bbqListBox->sizePolicy().hasHeightForWidth());
        bbqListBox->setSizePolicy(sizePolicy4);
        bbqListBox->setMinimumSize(QSize(261, 0));
        verticalLayout_5 = new QVBoxLayout(bbqListBox);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        bbqListDevices = new QListWidget(bbqListBox);
        bbqListDevices->setObjectName(QStringLiteral("bbqListDevices"));

        verticalLayout_5->addWidget(bbqListDevices);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        bbqIPText = new QLabel(bbqListBox);
        bbqIPText->setObjectName(QStringLiteral("bbqIPText"));
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(bbqIPText->sizePolicy().hasHeightForWidth());
        bbqIPText->setSizePolicy(sizePolicy5);
        bbqIPText->setMinimumSize(QSize(120, 0));
        QFont font1;
        font1.setFamily(QStringLiteral("Trebuchet MS"));
        font1.setPointSize(9);
        font1.setBold(false);
        font1.setWeight(50);
        bbqIPText->setFont(font1);
        bbqIPText->setWordWrap(true);

        gridLayout_4->addWidget(bbqIPText, 0, 0, 1, 1);

        bbqIP = new QLineEdit(bbqListBox);
        bbqIP->setObjectName(QStringLiteral("bbqIP"));
        sizePolicy2.setHeightForWidth(bbqIP->sizePolicy().hasHeightForWidth());
        bbqIP->setSizePolicy(sizePolicy2);
        bbqIP->setAlignment(Qt::AlignCenter);
        bbqIP->setCursorMoveStyle(Qt::LogicalMoveStyle);

        gridLayout_4->addWidget(bbqIP, 0, 1, 1, 1);


        verticalLayout_5->addLayout(gridLayout_4);

        bbqConnect = new QPushButton(bbqListBox);
        bbqConnect->setObjectName(QStringLiteral("bbqConnect"));
        bbqConnect->setMinimumSize(QSize(0, 50));
        QFont font2;
        font2.setFamily(QStringLiteral("Trebuchet MS"));
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        bbqConnect->setFont(font2);
        bbqConnect->setAutoExclusive(false);

        verticalLayout_5->addWidget(bbqConnect);


        horizontalLayout_2->addWidget(bbqListBox);

        bbqUSBBox = new QGroupBox(bbqTab);
        bbqUSBBox->setObjectName(QStringLiteral("bbqUSBBox"));
        QSizePolicy sizePolicy6(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(4);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(bbqUSBBox->sizePolicy().hasHeightForWidth());
        bbqUSBBox->setSizePolicy(sizePolicy6);
        bbqUSBBox->setMaximumSize(QSize(400, 16777215));
        verticalLayout_6 = new QVBoxLayout(bbqUSBBox);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        bbqBitGridLayout = new QGridLayout();
        bbqBitGridLayout->setSpacing(6);
        bbqBitGridLayout->setObjectName(QStringLiteral("bbqBitGridLayout"));
        bbqSpinBitrate = new QSpinBox(bbqUSBBox);
        bbqSpinBitrate->setObjectName(QStringLiteral("bbqSpinBitrate"));
        sizePolicy3.setHeightForWidth(bbqSpinBitrate->sizePolicy().hasHeightForWidth());
        bbqSpinBitrate->setSizePolicy(sizePolicy3);
        bbqSpinBitrate->setMinimumSize(QSize(0, 25));
        bbqSpinBitrate->setMinimum(500);
        bbqSpinBitrate->setMaximum(10000);
        bbqSpinBitrate->setValue(4500);

        bbqBitGridLayout->addWidget(bbqSpinBitrate, 0, 0, 1, 1);

        bbqCbQuality = new QComboBox(bbqUSBBox);
        bbqCbQuality->setObjectName(QStringLiteral("bbqCbQuality"));
        bbqCbQuality->setMinimumSize(QSize(0, 25));

        bbqBitGridLayout->addWidget(bbqCbQuality, 0, 1, 1, 1);


        verticalLayout_6->addLayout(bbqBitGridLayout);

        bbqBootstrapUSB = new QPushButton(bbqUSBBox);
        bbqBootstrapUSB->setObjectName(QStringLiteral("bbqBootstrapUSB"));
        bbqBootstrapUSB->setMinimumSize(QSize(120, 50));

        verticalLayout_6->addWidget(bbqBootstrapUSB);

        bbqConnectUSB = new QPushButton(bbqUSBBox);
        bbqConnectUSB->setObjectName(QStringLiteral("bbqConnectUSB"));
        bbqConnectUSB->setEnabled(false);
        bbqConnectUSB->setMinimumSize(QSize(120, 50));

        verticalLayout_6->addWidget(bbqConnectUSB);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_2);

        bbqDebugLog = new QPushButton(bbqUSBBox);
        bbqDebugLog->setObjectName(QStringLiteral("bbqDebugLog"));
        sizePolicy3.setHeightForWidth(bbqDebugLog->sizePolicy().hasHeightForWidth());
        bbqDebugLog->setSizePolicy(sizePolicy3);
        bbqDebugLog->setMinimumSize(QSize(0, 25));

        verticalLayout_6->addWidget(bbqDebugLog);

        bbqCbHighQuality = new QCheckBox(bbqUSBBox);
        bbqCbHighQuality->setObjectName(QStringLiteral("bbqCbHighQuality"));
        bbqCbHighQuality->setChecked(false);

        verticalLayout_6->addWidget(bbqCbHighQuality);

        bbqShowFps = new QCheckBox(bbqUSBBox);
        bbqShowFps->setObjectName(QStringLiteral("bbqShowFps"));
        bbqShowFps->setChecked(true);

        verticalLayout_6->addWidget(bbqShowFps);


        horizontalLayout_2->addWidget(bbqUSBBox);

        mainTabWidget->addTab(bbqTab, QString());
        capTab = new QWidget();
        capTab->setObjectName(QStringLiteral("capTab"));
        horizontalLayout_3 = new QHBoxLayout(capTab);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        capListWinBox = new QGroupBox(capTab);
        capListWinBox->setObjectName(QStringLiteral("capListWinBox"));
        QSizePolicy sizePolicy7(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy7.setHorizontalStretch(16);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(capListWinBox->sizePolicy().hasHeightForWidth());
        capListWinBox->setSizePolicy(sizePolicy7);
        horizontalLayout = new QHBoxLayout(capListWinBox);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        capList = new QListWidget(capListWinBox);
        capList->setObjectName(QStringLiteral("capList"));
        QSizePolicy sizePolicy8(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(capList->sizePolicy().hasHeightForWidth());
        capList->setSizePolicy(sizePolicy8);

        horizontalLayout->addWidget(capList);


        horizontalLayout_3->addWidget(capListWinBox);

        capControlBox = new QGroupBox(capTab);
        capControlBox->setObjectName(QStringLiteral("capControlBox"));
        sizePolicy1.setHeightForWidth(capControlBox->sizePolicy().hasHeightForWidth());
        capControlBox->setSizePolicy(sizePolicy1);
        capControlBox->setMaximumSize(QSize(400, 16777215));
        verticalLayout = new QVBoxLayout(capControlBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        capHandleEdit = new QLineEdit(capControlBox);
        capHandleEdit->setObjectName(QStringLiteral("capHandleEdit"));

        gridLayout->addWidget(capHandleEdit, 1, 1, 1, 1);

        capScaleBox = new QComboBox(capControlBox);
        capScaleBox->setObjectName(QStringLiteral("capScaleBox"));
        capScaleBox->setMinimumSize(QSize(0, 0));
        capScaleBox->setCurrentText(QStringLiteral(""));

        gridLayout->addWidget(capScaleBox, 1, 2, 1, 1);

        capHandleText = new QLabel(capControlBox);
        capHandleText->setObjectName(QStringLiteral("capHandleText"));
        capHandleText->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        gridLayout->addWidget(capHandleText, 0, 1, 1, 1);

        capScaleText = new QLabel(capControlBox);
        capScaleText->setObjectName(QStringLiteral("capScaleText"));
        capScaleText->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        gridLayout->addWidget(capScaleText, 0, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);

        capScanButton = new QPushButton(capControlBox);
        capScanButton->setObjectName(QStringLiteral("capScanButton"));
        capScanButton->setMinimumSize(QSize(0, 30));

        verticalLayout->addWidget(capScanButton);

        capStartButton = new QPushButton(capControlBox);
        capStartButton->setObjectName(QStringLiteral("capStartButton"));
        capStartButton->setMinimumSize(QSize(0, 50));
        capStartButton->setFont(font);

        verticalLayout->addWidget(capStartButton);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        capClcButton = new QPushButton(capControlBox);
        capClcButton->setObjectName(QStringLiteral("capClcButton"));
        capClcButton->setMinimumSize(QSize(0, 30));

        verticalLayout->addWidget(capClcButton);


        horizontalLayout_3->addWidget(capControlBox);

        mainTabWidget->addTab(capTab, QString());
        vodTab = new QWidget();
        vodTab->setObjectName(QStringLiteral("vodTab"));
        horizontalLayout_8 = new QHBoxLayout(vodTab);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        vodPlayBox = new QGroupBox(vodTab);
        vodPlayBox->setObjectName(QStringLiteral("vodPlayBox"));
        QSizePolicy sizePolicy9(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy9.setHorizontalStretch(5);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(vodPlayBox->sizePolicy().hasHeightForWidth());
        vodPlayBox->setSizePolicy(sizePolicy9);
        verticalLayout_8 = new QVBoxLayout(vodPlayBox);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        vodDisplay = new ShrinkableQLabel(vodPlayBox);
        vodDisplay->setObjectName(QStringLiteral("vodDisplay"));
        QSizePolicy sizePolicy10(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy10.setHorizontalStretch(0);
        sizePolicy10.setVerticalStretch(0);
        sizePolicy10.setHeightForWidth(vodDisplay->sizePolicy().hasHeightForWidth());
        vodDisplay->setSizePolicy(sizePolicy10);
        vodDisplay->setMouseTracking(true);
        vodDisplay->setFocusPolicy(Qt::NoFocus);
        vodDisplay->setAutoFillBackground(true);
        vodDisplay->setInteractive(false);
        vodDisplay->setSceneRect(QRectF(0, 0, 0, 0));

        verticalLayout_8->addWidget(vodDisplay);


        horizontalLayout_8->addWidget(vodPlayBox);

        vodControlBox = new QGroupBox(vodTab);
        vodControlBox->setObjectName(QStringLiteral("vodControlBox"));
        QSizePolicy sizePolicy11(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy11.setHorizontalStretch(2);
        sizePolicy11.setVerticalStretch(0);
        sizePolicy11.setHeightForWidth(vodControlBox->sizePolicy().hasHeightForWidth());
        vodControlBox->setSizePolicy(sizePolicy11);
        verticalLayout_7 = new QVBoxLayout(vodControlBox);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        vodPathLabel = new QLabel(vodControlBox);
        vodPathLabel->setObjectName(QStringLiteral("vodPathLabel"));
        vodPathLabel->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        verticalLayout_7->addWidget(vodPathLabel);

        vodPathEdit = new QLineEdit(vodControlBox);
        vodPathEdit->setObjectName(QStringLiteral("vodPathEdit"));
        sizePolicy2.setHeightForWidth(vodPathEdit->sizePolicy().hasHeightForWidth());
        vodPathEdit->setSizePolicy(sizePolicy2);

        verticalLayout_7->addWidget(vodPathEdit);

        vodBrowseButton = new QPushButton(vodControlBox);
        vodBrowseButton->setObjectName(QStringLiteral("vodBrowseButton"));
        QSizePolicy sizePolicy12(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy12.setHorizontalStretch(0);
        sizePolicy12.setVerticalStretch(0);
        sizePolicy12.setHeightForWidth(vodBrowseButton->sizePolicy().hasHeightForWidth());
        vodBrowseButton->setSizePolicy(sizePolicy12);
        vodBrowseButton->setMinimumSize(QSize(0, 30));

        verticalLayout_7->addWidget(vodBrowseButton);

        vodPlayButton = new QPushButton(vodControlBox);
        vodPlayButton->setObjectName(QStringLiteral("vodPlayButton"));
        sizePolicy12.setHeightForWidth(vodPlayButton->sizePolicy().hasHeightForWidth());
        vodPlayButton->setSizePolicy(sizePolicy12);
        vodPlayButton->setMinimumSize(QSize(0, 50));
        vodPlayButton->setFont(font);

        verticalLayout_7->addWidget(vodPlayButton);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_5);

        vodPauseButton = new QPushButton(vodControlBox);
        vodPauseButton->setObjectName(QStringLiteral("vodPauseButton"));
        vodPauseButton->setEnabled(false);
        vodPauseButton->setMinimumSize(QSize(0, 30));

        verticalLayout_7->addWidget(vodPauseButton);


        horizontalLayout_8->addWidget(vodControlBox);

        mainTabWidget->addTab(vodTab, QString());

        horizontalLayout_5->addWidget(mainTabWidget);

        qtCyberDip->setCentralWidget(centralWidget);

        retranslateUi(qtCyberDip);

        mainTabWidget->setCurrentIndex(0);
        bbqConnect->setDefault(true);
        bbqCbQuality->setCurrentIndex(1);
        capScaleBox->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(qtCyberDip);
    } // setupUi

    void retranslateUi(QMainWindow *qtCyberDip)
    {
        qtCyberDip->setWindowTitle(QApplication::translate("qtCyberDip", "qtCyberDip", 0));
        comLogBox->setTitle(QApplication::translate("qtCyberDip", "COM Log", 0));
        comSendButton->setText(QApplication::translate("qtCyberDip", "Send", 0));
        comClcButton->setText(QApplication::translate("qtCyberDip", "Clear", 0));
        comContrlBox->setTitle(QApplication::translate("qtCyberDip", "COM Control", 0));
        comPortLabel->setText(QApplication::translate("qtCyberDip", "Port:", 0));
        comCheckS->setText(QApplication::translate("qtCyberDip", "1s", 0));
        comConnectButton->setText(QApplication::translate("qtCyberDip", "CONNECT", 0));
        comRightButton->setText(QApplication::translate("qtCyberDip", "\342\206\222", 0));
        comDownButton->setText(QApplication::translate("qtCyberDip", "\342\206\223", 0));
        comLeftButton->setText(QApplication::translate("qtCyberDip", "\342\206\220", 0));
        comUpButton->setText(QApplication::translate("qtCyberDip", "\342\206\221", 0));
        comInitButton->setText(QString());
        comDeltaLabel->setText(QApplication::translate("qtCyberDip", "Delta:", 0));
        comPosLabel->setText(QApplication::translate("qtCyberDip", "<html><head/><body><p>X:--</p><p>Y:--</p></body></html>", 0));
        comReturnButton->setText(QApplication::translate("qtCyberDip", "Return", 0));
        comHitButton->setText(QApplication::translate("qtCyberDip", "Hit", 0));
        mainTabWidget->setTabText(mainTabWidget->indexOf(comTab), QApplication::translate("qtCyberDip", "SerialPort", 0));
        bbqListBox->setTitle(QApplication::translate("qtCyberDip", "List of detected devices (rooted)", 0));
        bbqIPText->setText(QApplication::translate("qtCyberDip", "Or manually enter IP:", 0));
        bbqIP->setInputMask(QApplication::translate("qtCyberDip", "999.999.999.999", 0));
        bbqConnect->setText(QApplication::translate("qtCyberDip", "CONNECT", 0));
        bbqUSBBox->setTitle(QApplication::translate("qtCyberDip", "Connect via USB (not root)", 0));
        bbqSpinBitrate->setSuffix(QApplication::translate("qtCyberDip", "kbps", 0));
        bbqSpinBitrate->setPrefix(QApplication::translate("qtCyberDip", "Bitrate: ", 0));
        bbqCbQuality->clear();
        bbqCbQuality->insertItems(0, QStringList()
         << QApplication::translate("qtCyberDip", "1080p", 0)
         << QApplication::translate("qtCyberDip", "720p", 0)
         << QApplication::translate("qtCyberDip", "540p", 0)
         << QApplication::translate("qtCyberDip", "360p", 0)
        );
        bbqCbQuality->setCurrentText(QApplication::translate("qtCyberDip", "720p", 0));
        bbqBootstrapUSB->setText(QApplication::translate("qtCyberDip", "Start USB service", 0));
        bbqConnectUSB->setText(QApplication::translate("qtCyberDip", "Connect via USB", 0));
        bbqDebugLog->setText(QApplication::translate("qtCyberDip", "Show debug log (for support)", 0));
        bbqCbHighQuality->setText(QApplication::translate("qtCyberDip", "HD processing (slower)", 0));
        bbqShowFps->setText(QApplication::translate("qtCyberDip", "Show FPS", 0));
        mainTabWidget->setTabText(mainTabWidget->indexOf(bbqTab), QApplication::translate("qtCyberDip", "bbqClient", 0));
        capListWinBox->setTitle(QApplication::translate("qtCyberDip", "List of Windows", 0));
        capControlBox->setTitle(QApplication::translate("qtCyberDip", "Capture Control", 0));
        capHandleText->setText(QApplication::translate("qtCyberDip", "Handle:", 0));
        capScaleText->setText(QApplication::translate("qtCyberDip", "Scale:", 0));
        capScanButton->setText(QApplication::translate("qtCyberDip", "Scan", 0));
        capStartButton->setText(QApplication::translate("qtCyberDip", "CAPTURE", 0));
        capClcButton->setText(QApplication::translate("qtCyberDip", "Clear", 0));
        mainTabWidget->setTabText(mainTabWidget->indexOf(capTab), QApplication::translate("qtCyberDip", "ScreenCapture", 0));
        vodPlayBox->setTitle(QApplication::translate("qtCyberDip", "Preview", 0));
        vodControlBox->setTitle(QApplication::translate("qtCyberDip", "Video Control", 0));
        vodPathLabel->setText(QApplication::translate("qtCyberDip", "Path:", 0));
        vodBrowseButton->setText(QApplication::translate("qtCyberDip", "Browse", 0));
        vodPlayButton->setText(QApplication::translate("qtCyberDip", "PLAY", 0));
        vodPauseButton->setText(QApplication::translate("qtCyberDip", "Pause", 0));
        mainTabWidget->setTabText(mainTabWidget->indexOf(vodTab), QApplication::translate("qtCyberDip", "VideoInput", 0));
    } // retranslateUi

};

namespace Ui {
    class qtCyberDip: public Ui_qtCyberDip {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTCYBERDIP_H
