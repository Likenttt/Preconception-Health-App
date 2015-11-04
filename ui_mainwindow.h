/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout_8;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout_7;
    QPushButton *backButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *loadButton;
    QPushButton *moreInfo;
    QGridLayout *gridLayout_5;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_12;
    QGridLayout *gridLayout_11;
    QRadioButton *radioButton2;
    QRadioButton *radioButton1;
    QRadioButton *radioButton3;
    QSpacerItem *verticalSpacer_3;
    QTextBrowser *textBrowser;
    QPushButton *showMe;
    QWidget *groupBox;
    QGridLayout *gridLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->resize(881, 757);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMaximumSize(QSize(1463, 996));
        MainWindow->setToolTipDuration(0);
        MainWindow->setLayoutDirection(Qt::LeftToRight);
        MainWindow->setStyleSheet(QStringLiteral(""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setEnabled(true);
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        centralWidget->setMinimumSize(QSize(0, 0));
        centralWidget->setLayoutDirection(Qt::LeftToRight);
        gridLayout_3 = new QGridLayout(centralWidget);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy1);
        groupBox_2->setMinimumSize(QSize(50, 50));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setItalic(true);
        font.setUnderline(true);
        font.setWeight(75);
        groupBox_2->setFont(font);
        groupBox_2->setAutoFillBackground(true);
        groupBox_2->setFlat(true);
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout_8 = new QGridLayout();
        gridLayout_8->setSpacing(0);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_8->addItem(verticalSpacer, 1, 0, 1, 1);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setSpacing(0);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        backButton = new QPushButton(groupBox_2);
        backButton->setObjectName(QStringLiteral("backButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(backButton->sizePolicy().hasHeightForWidth());
        backButton->setSizePolicy(sizePolicy2);
        backButton->setMinimumSize(QSize(62, 100));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        backButton->setFont(font1);
        backButton->setFocusPolicy(Qt::NoFocus);
        backButton->setStyleSheet(QLatin1String("QPushButton {background:  rgba(128,128,128,0.3);\n"
"       \n"
"               background-position:left top;\n"
" border: 2px solid #C4C4C3;\n"
"border-color:darkgray;    \n"
"border-bottom-color: black; /* same as the pane color */\n"
"    border-radius: 22px;\n"
"    color: rgba(255,255,255,.7);\n"
"    min-width: 8ex;\n"
"    padding: 15px;\n"
"	border-width: 4px;}"));

        gridLayout_7->addWidget(backButton, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_2, 0, 1, 1, 1);

        loadButton = new QPushButton(groupBox_2);
        loadButton->setObjectName(QStringLiteral("loadButton"));
        sizePolicy2.setHeightForWidth(loadButton->sizePolicy().hasHeightForWidth());
        loadButton->setSizePolicy(sizePolicy2);
        loadButton->setMinimumSize(QSize(62, 100));
        loadButton->setFont(font1);
        loadButton->setFocusPolicy(Qt::NoFocus);
        loadButton->setStyleSheet(QLatin1String("QPushButton {background:  rgba(128,128,128,0.3);\n"
"       \n"
"               background-position:left top;\n"
" border: 2px solid #C4C4C3;\n"
"border-color:darkgray;    \n"
"border-bottom-color: black; /* same as the pane color */\n"
"    border-radius: 22px;\n"
"    color: rgba(255,255,255,.7);\n"
"    min-width: 8ex;\n"
"    padding: 15px;\n"
"	border-width: 4px;}"));

        gridLayout_7->addWidget(loadButton, 0, 2, 1, 1);


        gridLayout_8->addLayout(gridLayout_7, 7, 0, 1, 1);

        moreInfo = new QPushButton(groupBox_2);
        moreInfo->setObjectName(QStringLiteral("moreInfo"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(moreInfo->sizePolicy().hasHeightForWidth());
        moreInfo->setSizePolicy(sizePolicy3);
        moreInfo->setMinimumSize(QSize(62, 40));
        moreInfo->setFont(font1);
        moreInfo->setFocusPolicy(Qt::NoFocus);
        moreInfo->setStyleSheet(QLatin1String("QPushButton {background:  rgba(128,128,128,0.3);\n"
"       \n"
"               background-position:left top;\n"
" border: 2px solid #C4C4C3;\n"
"border-color:darkgray;    \n"
"border-bottom-color: black; /* same as the pane color */\n"
"    border-radius: 22px;\n"
"    color: rgba(255,255,255,.7);\n"
"    min-width: 8ex;\n"
"    padding: 15px;\n"
"	border-width: 4px;}"));

        gridLayout_8->addWidget(moreInfo, 0, 0, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(0);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));

        gridLayout_8->addLayout(gridLayout_5, 6, 0, 1, 1);

        groupBox_3 = new QGroupBox(groupBox_2);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        sizePolicy3.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy3);
        groupBox_3->setMinimumSize(QSize(0, 50));
        groupBox_3->setFont(font1);
        groupBox_3->setLayoutDirection(Qt::LeftToRight);
        groupBox_3->setAlignment(Qt::AlignCenter);
        groupBox_3->setFlat(true);
        gridLayout_12 = new QGridLayout(groupBox_3);
        gridLayout_12->setSpacing(0);
        gridLayout_12->setContentsMargins(11, 11, 11, 11);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        gridLayout_12->setContentsMargins(0, 0, 0, 0);
        gridLayout_11 = new QGridLayout();
        gridLayout_11->setSpacing(0);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        radioButton2 = new QRadioButton(groupBox_3);
        radioButton2->setObjectName(QStringLiteral("radioButton2"));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        radioButton2->setFont(font2);
        radioButton2->setFocusPolicy(Qt::NoFocus);
        radioButton2->setStyleSheet(QLatin1String("QRadioButton {background:  rgba(128,128,128,0.3);\n"
"       \n"
"               background-position:left top;\n"
" border: 2px solid #C4C4C3;\n"
"border-color:darkgray;    \n"
"border-bottom-color: black; /* same as the pane color */\n"
"    border-radius: 22px;\n"
"    color: rgba(255,255,255,.7);\n"
"    min-width: 8ex;\n"
"    padding: 15px;\n"
"	border-width: 4px;}"));

        gridLayout_11->addWidget(radioButton2, 0, 1, 1, 1);

        radioButton1 = new QRadioButton(groupBox_3);
        radioButton1->setObjectName(QStringLiteral("radioButton1"));
        radioButton1->setFont(font2);
        radioButton1->setFocusPolicy(Qt::NoFocus);
        radioButton1->setStyleSheet(QLatin1String("QRadioButton {background:  rgba(128,128,128,0.3);\n"
"       \n"
"               background-position:left top;\n"
" border: 2px solid #C4C4C3;\n"
"border-color:darkgray;    \n"
"border-bottom-color: black; /* same as the pane color */\n"
"    border-radius: 22px;\n"
"    color: rgba(255,255,255,.7);\n"
"    min-width: 8ex;\n"
"    padding: 15px;\n"
"	border-width: 4px;}"));

        gridLayout_11->addWidget(radioButton1, 0, 0, 1, 1);

        radioButton3 = new QRadioButton(groupBox_3);
        radioButton3->setObjectName(QStringLiteral("radioButton3"));
        radioButton3->setFont(font2);
        radioButton3->setFocusPolicy(Qt::NoFocus);
        radioButton3->setStyleSheet(QLatin1String("QRadioButton {background:  rgba(128,128,128,0.3);\n"
"       \n"
"               background-position:left top;\n"
" border: 2px solid #C4C4C3;\n"
"border-color:darkgray;    \n"
"border-bottom-color: black; /* same as the pane color */\n"
"    border-radius: 22px;\n"
"    color: rgba(255,255,255,.7);\n"
"    min-width: 8ex;\n"
"    padding: 15px;\n"
"	border-width: 4px;}"));

        gridLayout_11->addWidget(radioButton3, 0, 2, 1, 1);


        gridLayout_12->addLayout(gridLayout_11, 1, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_12->addItem(verticalSpacer_3, 0, 0, 1, 1);


        gridLayout_8->addWidget(groupBox_3, 4, 0, 1, 1);

        textBrowser = new QTextBrowser(groupBox_2);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        QFont font3;
        font3.setPointSize(20);
        textBrowser->setFont(font3);
        textBrowser->setAcceptDrops(false);
        textBrowser->setLayoutDirection(Qt::LeftToRight);
        textBrowser->setFrameShape(QFrame::NoFrame);
        textBrowser->setFrameShadow(QFrame::Plain);
        textBrowser->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        textBrowser->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse);
        textBrowser->setOpenExternalLinks(false);

        gridLayout_8->addWidget(textBrowser, 2, 0, 1, 1);

        showMe = new QPushButton(groupBox_2);
        showMe->setObjectName(QStringLiteral("showMe"));
        sizePolicy2.setHeightForWidth(showMe->sizePolicy().hasHeightForWidth());
        showMe->setSizePolicy(sizePolicy2);
        showMe->setMinimumSize(QSize(62, 20));
        showMe->setFont(font1);
        showMe->setFocusPolicy(Qt::NoFocus);
        showMe->setStyleSheet(QLatin1String("QPushButton {background:  rgba(128,128,128,0.3);\n"
"       \n"
"               background-position:left top;\n"
" border: 2px solid #C4C4C3;\n"
"border-color:darkgray;    \n"
"border-bottom-color: black; /* same as the pane color */\n"
"    border-radius: 22px;\n"
"    color: rgba(255,255,255,.7);\n"
"    min-width: 8ex;\n"
"    padding: 15px;\n"
"	border-width: 4px;}"));

        gridLayout_8->addWidget(showMe, 5, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout_8, 0, 0, 1, 1);


        gridLayout_3->addWidget(groupBox_2, 0, 1, 1, 1);

        groupBox = new QWidget(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        sizePolicy1.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy1);
        QFont font4;
        font4.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font4.setPointSize(16);
        font4.setBold(true);
        font4.setWeight(75);
        font4.setKerning(false);
        pushButton_2->setFont(font4);
        pushButton_2->setFocusPolicy(Qt::NoFocus);
        pushButton_2->setStyleSheet(QLatin1String("QPushButton {\n"
"border-image: url( :/simb)10 -500  20 0  ;\n"
"             \n"
"               \n"
" \n"
" border-radius: 22px;\n"
"   color: #66FFFF;\n"
"    min-width: 8ex;\n"
"    padding: 15px;\n"
"	border-width: 4px;\n"
"    border-radius: 22px;\n"
"  \n"
" \n"
"\n"
"}"));

        gridLayout->addWidget(pushButton_2, 0, 0, 1, 2);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        pushButton->setFont(font1);
        pushButton->setFocusPolicy(Qt::NoFocus);
        pushButton->setStyleSheet(QLatin1String("QPushButton {\n"
"    border-image: url( :/ahc)10 -500  20 0 ;\n"
"\n"
"\n"
"    border-radius: 22px;\n"
"    color: #66FFFF;;\n"
"    min-width: 8ex;\n"
"    padding: 15px;\n"
"	border-width: 4px;}"));

        gridLayout->addWidget(pushButton, 1, 0, 1, 2);

        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        sizePolicy1.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy1);
        pushButton_3->setFont(font1);
        pushButton_3->setFocusPolicy(Qt::NoFocus);
        pushButton_3->setStyleSheet(QLatin1String("QPushButton {\n"
"     border-image: url( :/nut)10 -500  20 0 ;\n"
"\n"
"    border-radius: 22px;\n"
"color: #66FFFF;\n"
"    min-width: 8ex;\n"
"    padding: 15px;\n"
"	border-width: 4px;}"));

        gridLayout->addWidget(pushButton_3, 2, 0, 1, 2);

        pushButton_4 = new QPushButton(groupBox);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        sizePolicy1.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy1);
        pushButton_4->setFont(font1);
        pushButton_4->setFocusPolicy(Qt::NoFocus);
        pushButton_4->setStyleSheet(QLatin1String("QPushButton {\n"
"    border-image: url( :/pa)10 -500  20 0 ;\n"
"\n"
"\n"
"    border-radius: 22px;\n"
"color: #66FFFF;\n"
"    min-width: 8ex;\n"
"    padding: 15px;\n"
"	border-width: 4px;}"));

        gridLayout->addWidget(pushButton_4, 3, 0, 1, 2);

        pushButton_5 = new QPushButton(groupBox);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        sizePolicy1.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy1);
        pushButton_5->setFont(font1);
        pushButton_5->setFocusPolicy(Qt::NoFocus);
        pushButton_5->setStyleSheet(QLatin1String("QPushButton {\n"
"        border-image: url( :/smoke)10 -475  10 10  ;\n"
"\n"
"			\n"
"\n"
"    border-radius: 22px;\n"
"color: #66FFFF;\n"
"    min-width: 8ex;\n"
"    padding: 15px;\n"
"	border-width: 4px;}"));

        gridLayout->addWidget(pushButton_5, 4, 0, 1, 2);

        pushButton_6 = new QPushButton(groupBox);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        sizePolicy1.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy1);
        pushButton_6->setFont(font1);
        pushButton_6->setFocusPolicy(Qt::NoFocus);
        pushButton_6->setStyleSheet(QLatin1String("QPushButton {\n"
"      border-image: url( :/mh)10 -500  20 0 ;\n"
"\n"
"    border-radius: 22px;color: #66FFFF;\n"
"    min-width: 8ex;\n"
"    padding: 15px;\n"
"	border-width: 4px;}"));

        gridLayout->addWidget(pushButton_6, 5, 0, 1, 2);

        pushButton_7 = new QPushButton(groupBox);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        sizePolicy1.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy1);
        pushButton_7->setFont(font1);
        pushButton_7->setFocusPolicy(Qt::NoFocus);
        pushButton_7->setStyleSheet(QLatin1String("QPushButton {\n"
"    border-image: url( :/ipv)10 -500  20 0 ;\n"
"\n"
"    border-radius: 22px;\n"
" color: #66FFFF;\n"
"    min-width: 8ex;\n"
"    padding: 15px;\n"
"	border-width: 4px;}"));

        gridLayout->addWidget(pushButton_7, 6, 0, 1, 2);

        pushButton_8 = new QPushButton(groupBox);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        sizePolicy1.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy1);
        pushButton_8->setFont(font1);
        pushButton_8->setFocusPolicy(Qt::NoFocus);
        pushButton_8->setStyleSheet(QLatin1String("QPushButton {\n"
"       border-image: url( :/danda)10 -500  20 0 ;\n"
"\n"
"    border-radius: 22px;\n"
" color: #66FFFF;\n"
"    min-width: 8ex;\n"
"    padding: 15px;\n"
"	border-width: 4px;}"));

        gridLayout->addWidget(pushButton_8, 7, 0, 1, 2);

        pushButton_9 = new QPushButton(groupBox);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        sizePolicy1.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy1);
        pushButton_9->setFont(font1);
        pushButton_9->setFocusPolicy(Qt::NoFocus);
        pushButton_9->setStyleSheet(QLatin1String("QPushButton {\n"
"       border-image: url( :/env)10 -500  20 0 ;\n"
"\n"
"    border-radius: 22px;\n"
"color: #66FFFF;\n"
"    min-width: 8ex;\n"
"    padding: 15px;\n"
"	border-width: 4px;}"));

        gridLayout->addWidget(pushButton_9, 8, 0, 1, 2);

        pushButton_10 = new QPushButton(groupBox);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        sizePolicy2.setHeightForWidth(pushButton_10->sizePolicy().hasHeightForWidth());
        pushButton_10->setSizePolicy(sizePolicy2);
        pushButton_10->setMinimumSize(QSize(62, 100));
        pushButton_10->setFont(font1);
        pushButton_10->setFocusPolicy(Qt::NoFocus);
        pushButton_10->setStyleSheet(QLatin1String("QPushButton {background:  rgba(128,128,128,0.3);\n"
"       \n"
"               background-position:left top;\n"
" border: 2px solid #C4C4C3;\n"
"border-color:darkgray;    \n"
"border-bottom-color: black; /* same as the pane color */\n"
"    border-radius: 22px;\n"
"    color: rgba(255,255,255,.7);\n"
"    min-width: 8ex;\n"
"    padding: 15px;\n"
"	border-width: 4px;}"));

        gridLayout->addWidget(pushButton_10, 9, 0, 1, 1);

        pushButton_11 = new QPushButton(groupBox);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        sizePolicy2.setHeightForWidth(pushButton_11->sizePolicy().hasHeightForWidth());
        pushButton_11->setSizePolicy(sizePolicy2);
        pushButton_11->setMinimumSize(QSize(62, 100));
        pushButton_11->setFont(font1);
        pushButton_11->setFocusPolicy(Qt::NoFocus);
        pushButton_11->setStyleSheet(QLatin1String("QPushButton {background:  rgba(128,128,128,0.3);\n"
"       \n"
"               background-position:left top;\n"
" border: 2px solid #C4C4C3;\n"
"border-color:darkgray;    \n"
"border-bottom-color: black; /* same as the pane color */\n"
"    border-radius: 22px;\n"
"    color: rgba(255,255,255,.7);\n"
"    min-width: 8ex;\n"
"    padding: 15px;\n"
"	border-width: 4px;}"));

        gridLayout->addWidget(pushButton_11, 9, 1, 1, 1);

        pushButton_2->raise();
        pushButton->raise();
        pushButton_4->raise();
        pushButton_6->raise();
        pushButton_3->raise();
        pushButton_11->raise();
        pushButton_8->raise();
        pushButton_9->raise();
        pushButton_5->raise();
        pushButton->raise();
        pushButton_2->raise();
        pushButton_4->raise();
        pushButton_7->raise();
        pushButton_6->raise();
        pushButton_10->raise();
        pushButton_3->raise();

        gridLayout_3->addWidget(groupBox, 0, 0, 2, 1);

        MainWindow->setCentralWidget(centralWidget);
        groupBox_2->raise();
        pushButton_2->raise();
        pushButton_3->raise();
        pushButton_5->raise();
        pushButton_6->raise();
        pushButton_7->raise();
        groupBox->raise();

        retranslateUi(MainWindow);
        QObject::connect(showMe, SIGNAL(clicked()), groupBox_3, SLOT(show()));
        QObject::connect(showMe, SIGNAL(clicked()), showMe, SLOT(hide()));
        QObject::connect(loadButton, SIGNAL(clicked()), MainWindow, SLOT(forwardLayout()));
        QObject::connect(backButton, SIGNAL(clicked()), MainWindow, SLOT(backLayout()));
        QObject::connect(showMe, SIGNAL(clicked()), MainWindow, SLOT(loadAnswer()));
        QObject::connect(pushButton_8, SIGNAL(clicked()), MainWindow, SLOT(initAandD()));
        QObject::connect(radioButton1, SIGNAL(clicked()), MainWindow, SLOT(setRadio1()));
        QObject::connect(radioButton2, SIGNAL(clicked()), MainWindow, SLOT(setRadio2()));
        QObject::connect(radioButton3, SIGNAL(clicked()), MainWindow, SLOT(setradio3()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), MainWindow, SLOT(initSIMB()));
        QObject::connect(pushButton, SIGNAL(clicked()), MainWindow, SLOT(initAHC()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), MainWindow, SLOT(initHE()));
        QObject::connect(pushButton_4, SIGNAL(clicked()), MainWindow, SLOT(initPA()));
        QObject::connect(pushButton_5, SIGNAL(clicked()), MainWindow, SLOT(initSmoke()));
        QObject::connect(pushButton_6, SIGNAL(clicked()), MainWindow, SLOT(initMH()));
        QObject::connect(pushButton_7, SIGNAL(clicked()), MainWindow, SLOT(initIPV()));
        QObject::connect(pushButton_9, SIGNAL(clicked()), MainWindow, SLOT(initHENV()));
        QObject::connect(moreInfo, SIGNAL(clicked()), MainWindow, SLOT(resetCurrentQuiz()));
        QObject::connect(moreInfo, SIGNAL(clicked()), moreInfo, SLOT(hide()));
        QObject::connect(pushButton_10, SIGNAL(clicked()), MainWindow, SLOT(initAbout()));
        QObject::connect(pushButton_11, SIGNAL(clicked()), MainWindow, SLOT(quizReset()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QString());
        groupBox_2->setTitle(QString());
        backButton->setText(QApplication::translate("MainWindow", "<", 0));
        loadButton->setText(QApplication::translate("MainWindow", ">", 0));
        moreInfo->setText(QApplication::translate("MainWindow", "Reset Quiz", 0));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Rate Your Knowledge", 0));
        radioButton2->setText(QApplication::translate("MainWindow", "Almost", 0));
        radioButton1->setText(QApplication::translate("MainWindow", "No Clue", 0));
        radioButton3->setText(QApplication::translate("MainWindow", "Got it!", 0));
        showMe->setText(QApplication::translate("MainWindow", "Show Answer", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "dfadfadf", 0));
        pushButton->setText(QString());
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
        pushButton_5->setText(QString());
        pushButton_6->setText(QString());
        pushButton_7->setText(QString());
        pushButton_8->setText(QString());
        pushButton_9->setText(QString());
        pushButton_10->setText(QApplication::translate("MainWindow", "About", 0));
        pushButton_11->setText(QApplication::translate("MainWindow", "Reset Scores", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
