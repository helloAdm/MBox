/********************************************************************************
** Form generated from reading UI file 'MBox.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MBOX_H
#define UI_MBOX_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MBoxClass
{
public:
    QFrame *frame;
    QSlider *horizontalSlider;
    QPushButton *addButton;
    QPushButton *faceButton;
    QPushButton *setButton;
    QPushButton *trButton;
    QPushButton *minButton;
    QPushButton *maxButton;
    QPushButton *quitButton;
    QPushButton *musicButton;
    QPushButton *likeButton;
    QPushButton *listButton;
    QPushButton *palyRecButton;
    QPushButton *preButton;
    QPushButton *paseButton;
    QPushButton *nextButton;
    QPushButton *positionButton;
    QPushButton *playListButton;
    QPushButton *musicVoiceButton;
    QPushButton *iLikeButton;
    QPushButton *loopButton;
    QPushButton *leftButton;
    QPushButton *lefArrowButton;
    QPushButton *sereachButton;
    QLineEdit *sereachEdit;
    QListWidget *listWidget_5;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QListWidget *listWidget_3;
    QWidget *page_3;
    QListWidget *listWidget_2;
    QWidget *page_2;
    QListWidget *listWidget;
    QWidget *page_4;
    QListWidget *listWidget_4;
    QWidget *page_5;
    QListWidget *listWidget_6;
    QSlider *verticalSlider;

    void setupUi(QWidget *MBoxClass)
    {
        if (MBoxClass->objectName().isEmpty())
            MBoxClass->setObjectName(QString::fromUtf8("MBoxClass"));
        MBoxClass->setWindowModality(Qt::NonModal);
        MBoxClass->resize(1220, 720);
        MBoxClass->setMaximumSize(QSize(1220, 720));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/image/title.png"), QSize(), QIcon::Normal, QIcon::Off);
        MBoxClass->setWindowIcon(icon);
        MBoxClass->setStyleSheet(QString::fromUtf8("QWidget{\n"
"background-repeat:no-repeat;\n"
"}"));
        frame = new QFrame(MBoxClass);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setEnabled(true);
        frame->setGeometry(QRect(0, 0, 1220, 720));
        frame->setMaximumSize(QSize(1220, 720));
        frame->setStyleSheet(QString::fromUtf8("#frame{\n"
"border-radius:5px;border-image: url(:/image/image/background/bg1.jpg);\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalSlider = new QSlider(frame);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(300, 650, 661, 31));
        horizontalSlider->setCursor(QCursor(Qt::PointingHandCursor));
        horizontalSlider->setStyleSheet(QString::fromUtf8("\n"
"    QSlider::add-page:Horizontal\n"
"     {     \n"
"background-color: rgba(255, 255, 255,100);\n"
"        height:4px;  \n"
"     } \n"
"     QSlider::sub-page:Horizontal   \n"
"    {  \n"
"background-color: rgb(255, 255, 255);\n"
"        height:4px;\n"
"     }\n"
"    QSlider::groove:Horizontal   \n"
"    { \n"
"        background:transparent; \n"
"        height:4px;\n"
"    }  \n"
"    QSlider::handle:Horizontal  \n"
"    { \n"
"        height:16px; \n"
"        width:16px; \n"
"	\n"
"	border-image: url(:/image/image/button/handle.png);\n"
"  margin: -6 0px; \n"
"    }\n"
"      \n"
""));
        horizontalSlider->setOrientation(Qt::Horizontal);
        addButton = new QPushButton(frame);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setGeometry(QRect(936, 20, 32, 32));
        addButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color:transparent;\n"
"	background-image: url(:/image/image/button/add.png);\n"
"	background-repeat:no-repeat;\n"
"	background-position:center center;\n"
"	border:none;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	background-image: url(://image/image/button-hover/add-hover.png);\n"
"	background-repeat:no-repeat;\n"
"	background-position:center center;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-image: url(:/image/image/button/add.png);\n"
"	background-repeat:no-repeat;\n"
"	background-position:center center;\n"
"}\n"
"\n"
""));
        faceButton = new QPushButton(frame);
        faceButton->setObjectName(QString::fromUtf8("faceButton"));
        faceButton->setGeometry(QRect(988, 20, 32, 32));
        faceButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-image: url(:/image/image/button/face.png);\n"
"	background-repeat:no-repeat;\n"
"	background-position:center center;\n"
"	border:none;\n"
"	color:transparent;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	background-image: url(:/image/image/button-hover/face-hover.png);\n"
"	background-repeat:no-repeat;\n"
"	background-position:center center;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-image: url(:/image/image/face.png);\n"
"	background-repeat:no-repeat;\n"
"	background-position:center center;\n"
"}\n"
""));
        setButton = new QPushButton(frame);
        setButton->setObjectName(QString::fromUtf8("setButton"));
        setButton->setGeometry(QRect(1040, 20, 32, 32));
        setButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color: rgba(255, 255, 255,0);\n"
"	background-image: url(:/image/image/button/setting.png);\n"
"	background-repeat:no-repeat;\n"
"	background-position:center center;\n"
"	border:none;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	background-image: url(:/image/image/button-hover/setting-hover.png);\n"
"	background-repeat:no-repeat;\n"
"	background-position:center center;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-image: url(:/image/image/button/setting.png);\n"
"	background-repeat:no-repeat;\n"
"	background-position:center center;\n"
"}\n"
"\n"
""));
        trButton = new QPushButton(frame);
        trButton->setObjectName(QString::fromUtf8("trButton"));
        trButton->setGeometry(QRect(1088, 0, 32, 32));
        trButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius:0px;\n"
"	background-image: url(:/image/image/button/tr.png);\n"
"	background-color: rgba(255, 255, 255,0);\n"
"	background-repeat:no-repeat;\n"
"	border:none;\n"
"	background-position:center center;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	background-color: rgb(255, 255, 255,100);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: rgba(95, 95, 95,100);\n"
"	border-color:rgba(255,255,255,30);\n"
"	border-style:inset;\n"
"	color:rgba(0,0,0,100);\n"
"}\n"
""));
        minButton = new QPushButton(frame);
        minButton->setObjectName(QString::fromUtf8("minButton"));
        minButton->setGeometry(QRect(1120, 0, 32, 32));
        minButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius:0px;\n"
"	background-image: url(:/image/image/button/min.png);\n"
"	background-color: rgba(255, 255, 255,0);\n"
"	background-repeat:no-repeat;\n"
"	border:none;\n"
"	background-position:center center;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	background-color: rgb(255, 255, 255,100);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: rgba(95, 95, 95,100);\n"
"	border-color:rgba(255,255,255,30);\n"
"	border-style:inset;\n"
"	color:rgba(0,0,0,100);\n"
"}\n"
""));
        maxButton = new QPushButton(frame);
        maxButton->setObjectName(QString::fromUtf8("maxButton"));
        maxButton->setGeometry(QRect(1152, 0, 32, 32));
        maxButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius:0px;\n"
"	background-image: url(:/image/image/button/max.png);\n"
"	background-color: rgba(255, 255, 255,0);\n"
"	background-repeat:no-repeat;\n"
"	border:none;\n"
"	background-position:center center;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	background-color: rgb(255, 255, 255,100);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: rgba(95, 95, 95,100);\n"
"	border-color:rgba(255,255,255,30);\n"
"	border-style:inset;\n"
"	color:rgba(0,0,0,100);\n"
"}\n"
""));
        quitButton = new QPushButton(frame);
        quitButton->setObjectName(QString::fromUtf8("quitButton"));
        quitButton->setGeometry(QRect(1185, 0, 32, 32));
        quitButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius:0px;\n"
"	background-image: url(:/image/image/button/quit.png);\n"
"	background-color: rgba(255, 255, 255,0);\n"
"	background-repeat:no-repeat;\n"
"	border:none;\n"
"	background-position:center center;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	background-color: rgba(230,0,0,0.5);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: rgba(95, 95, 95,100);\n"
"	border-color:rgba(255,255,255,30);\n"
"	border-style:inset;\n"
"	color:rgba(0,0,0,100);\n"
"}\n"
""));
        musicButton = new QPushButton(frame);
        musicButton->setObjectName(QString::fromUtf8("musicButton"));
        musicButton->setGeometry(QRect(10, 60, 32, 32));
        musicButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background-image: url(:/image/image/button/music.png);\n"
"	background-repeat:no-repeat;\n"
"	background-position:center center;\n"
"	border:none;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	background-image: url(:/image/image/button-hover/music-hover.png);\n"
"	background-repeat:no-repeat;\n"
"	background-position:center center;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-image: url(:/image/image/button/music.png);\n"
"	background-repeat:no-repeat;\n"
"	background-position:center center;\n"
"}\n"
""));
        likeButton = new QPushButton(frame);
        likeButton->setObjectName(QString::fromUtf8("likeButton"));
        likeButton->setGeometry(QRect(80, 60, 32, 32));
        likeButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-image: url(:/image/image/button/like.png);\n"
"	background-repeat:no-repeat;\n"
"	background-position:center center;\n"
"	border:none;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	background-image: url(:/image/image/button-hover/like-hover.png);\n"
"	background-repeat:no-repeat;\n"
"	background-position:center center;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-image: url(:/image/image/button/like.png);\n"
"	background-repeat:no-repeat;\n"
"	background-position:center center;\n"
"}\n"
""));
        listButton = new QPushButton(frame);
        listButton->setObjectName(QString::fromUtf8("listButton"));
        listButton->setGeometry(QRect(160, 60, 32, 32));
        listButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-image: url(:/image/image/button/list.png);\n"
"	background-repeat:no-repeat;\n"
"	background-position:center center;\n"
"	border:none;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	background-image: url(:/image/image/button-hover/list-hover.png);\n"
"	background-repeat:no-repeat;\n"
"	background-position:center center;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-image: url(:/image/image/button/list.png);\n"
"	background-repeat:no-repeat;\n"
"	background-position:center center;\n"
"}\n"
""));
        palyRecButton = new QPushButton(frame);
        palyRecButton->setObjectName(QString::fromUtf8("palyRecButton"));
        palyRecButton->setGeometry(QRect(240, 60, 32, 32));
        palyRecButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-image: url(:/image/image/button/play-resently.png);\n"
"	background-repeat:no-repeat;\n"
"	background-position:center center;\n"
"	border:none;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	background-image: url(:/image/image/button-hover/play-resently-hover.png);\n"
"	background-repeat:no-repeat;\n"
"	background-position:center center;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-image: url(:/image/image/button/play-resently.png);\n"
"	background-repeat:no-repeat;\n"
"	background-position:center center;\n"
"}\n"
""));
        preButton = new QPushButton(frame);
        preButton->setObjectName(QString::fromUtf8("preButton"));
        preButton->setGeometry(QRect(10, 648, 48, 48));
        preButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-image: url(:/image/image/button/pre.png);\n"
"	background-repeat:no-repeat;\n"
"	background-position:center center;\n"
"	border:none;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	background-image: url(:/image/image/button-hover/pre-hover.png);\n"
"	background-repeat:no-repeat;\n"
"	background-position:center center;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-image: url(:/image/image/button/pre.png);\n"
"	background-repeat:no-repeat;\n"
"	background-position:center center;\n"
"}\n"
""));
        paseButton = new QPushButton(frame);
        paseButton->setObjectName(QString::fromUtf8("paseButton"));
        paseButton->setGeometry(QRect(120, 648, 48, 48));
        paseButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-image: url(:/image/image/button/pase.png);\n"
"	background-repeat:no-repeat;\n"
"	background-position:center center;\n"
"	border:none;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	\n"
"	background-image: url(:/image/image/button-hover/pase-hover.png);\n"
"	background-repeat:no-repeat;\n"
"	background-position:center center;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	\n"
"	background-image: url(:/image/image/button/pase.png);\n"
"	background-repeat:no-repeat;\n"
"	background-position:center center;\n"
"}\n"
""));
        nextButton = new QPushButton(frame);
        nextButton->setObjectName(QString::fromUtf8("nextButton"));
        nextButton->setGeometry(QRect(230, 648, 48, 48));
        nextButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-image: url(:/image/image/button/next.png);\n"
"	background-repeat:no-repeat;\n"
"	background-position:center center;\n"
"	border:none;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	background-image: url(:/image/image/button-hover/next-hover.png);\n"
"	background-repeat:no-repeat;\n"
"	background-position:center center;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-image: url(:/image/image/button/next.png);\n"
"	background-repeat:no-repeat;\n"
"	background-position:center center;\n"
"}\n"
""));
        positionButton = new QPushButton(frame);
        positionButton->setObjectName(QString::fromUtf8("positionButton"));
        positionButton->setGeometry(QRect(1090, 650, 32, 32));
        positionButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-image: url(:/image/image/button/position.png);\n"
"	background-repeat:no-repeat;\n"
"	background-position:center center;\n"
"	border:none;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	background-image: url(:/image/image/button-hover/position-hover.png);\n"
"	background-repeat:no-repeat;\n"
"	background-position:center center;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-image: url(:/image/image/button/position.png);\n"
"	background-repeat:no-repeat;\n"
"	background-position:center center;\n"
"}\n"
""));
        playListButton = new QPushButton(frame);
        playListButton->setObjectName(QString::fromUtf8("playListButton"));
        playListButton->setGeometry(QRect(1130, 650, 32, 32));
        playListButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-image: url(:/image/image/button/playlist.png);\n"
"	background-repeat:no-repeat;\n"
"	background-position:center center;\n"
"	border:none;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	background-image: url(:/image/image/button-hover/playlist-hover.png);\n"
"	background-repeat:no-repeat;\n"
"	background-position:center center;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-image: url(:/image/image/button/playlist.png);\n"
"	background-repeat:no-repeat;\n"
"	background-position:center center;\n"
"}"));
        musicVoiceButton = new QPushButton(frame);
        musicVoiceButton->setObjectName(QString::fromUtf8("musicVoiceButton"));
        musicVoiceButton->setGeometry(QRect(1170, 650, 32, 32));
        musicVoiceButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	\n"
"	background-image: url(:/image/image/button/music-voice.png);\n"
"	background-repeat:no-repeat;\n"
"	background-position:center center;\n"
"	border:none;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	background-image: url(:/image/image/button-hover/music-voice-hover.png);\n"
"	background-repeat:no-repeat;\n"
"	background-position:center center;\n"
"}\n"
"\n"
"QPushButton:pressed{	\n"
"	background-image: url(:/image/image/button/music-voice.png);\n"
"	background-repeat:no-repeat;\n"
"	background-position:center center;\n"
"}\n"
""));
        iLikeButton = new QPushButton(frame);
        iLikeButton->setObjectName(QString::fromUtf8("iLikeButton"));
        iLikeButton->setGeometry(QRect(1010, 650, 32, 32));
        iLikeButton->setStyleSheet(QString::fromUtf8("QPushButton{	\n"
"	background-image: url(:/image/image/button/Ilike.png);\n"
"	background-repeat:no-repeat;\n"
"	background-position:center center;\n"
"	border:none;\n"
"}\n"
"\n"
"QPushButton:hover{	\n"
"	background-image: url(:/image/image/button-hover/Ilike-hover.png);\n"
"	background-repeat:no-repeat;\n"
"	background-position:center center;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	\n"
"	background-image: url(:/image/image/button/Ilike.png);\n"
"	background-repeat:no-repeat;\n"
"	background-position:center center;\n"
"}\n"
""));
        loopButton = new QPushButton(frame);
        loopButton->setObjectName(QString::fromUtf8("loopButton"));
        loopButton->setGeometry(QRect(1050, 650, 32, 32));
        loopButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-image: url(:/image/image/button/loop.png);\n"
"	background-repeat:no-repeat;\n"
"	background-position:center center;\n"
"	border:none;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	background-image: url(:/image/image/button-hover/loop-hover.png);\n"
"	background-repeat:no-repeat;\n"
"	background-position:center center;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-image: url(:/image/image/button/loop.png);\n"
"	background-repeat:no-repeat;\n"
"	background-position:center center;\n"
"}\n"
""));
        leftButton = new QPushButton(frame);
        leftButton->setObjectName(QString::fromUtf8("leftButton"));
        leftButton->setGeometry(QRect(320, 60, 32, 32));
        leftButton->setStyleSheet(QString::fromUtf8("QPushButton{	\n"
"	background-image: url(:/image/image/button/left.png);\n"
"	background-repeat:no-repeat;\n"
"	background-position:center center;\n"
"	border:none;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	\n"
"	background-image: url(:/image/image/button-hover/left-hover.png);\n"
"	background-repeat:no-repeat;\n"
"	background-position:center center;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-image: url(:/image/image/button/left.png);\n"
"	background-repeat:no-repeat;\n"
"	background-position:center center;\n"
"}\n"
""));
        lefArrowButton = new QPushButton(frame);
        lefArrowButton->setObjectName(QString::fromUtf8("lefArrowButton"));
        lefArrowButton->setGeometry(QRect(884, 20, 32, 32));
        lefArrowButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color:transparent;\n"
"	background-image: url(:/image/image/button/left-arrow.png);\n"
"	background-repeat:no-repeat;\n"
"	background-position:center center;\n"
"	border:none;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	background-image: url(:/image/image/button-hover/left-arrow-hover.png);\n"
"	background-repeat:no-repeat;\n"
"	background-position:center center;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-image: url(:/image/image/button/left-arrow.png);\n"
"	background-repeat:no-repeat;\n"
"	background-position:center center;\n"
"\n"
"}\n"
""));
        sereachButton = new QPushButton(frame);
        sereachButton->setObjectName(QString::fromUtf8("sereachButton"));
        sereachButton->setGeometry(QRect(750, 20, 32, 32));
        sereachButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-image: url(:/image/image/button/sereach.png);\n"
"	background-repeat:no-repeat;\n"
"	background-position:center center;\n"
"	border:none;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	background-image: url(:/image/image/button-hover/sereach-hover.png);\n"
"	background-repeat:no-repeat;\n"
"	background-position:center center;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-image: url(:/image/image/button/sereach.png);\n"
"	background-repeat:no-repeat;\n"
"	background-position:center center;\n"
"}\n"
""));
        sereachEdit = new QLineEdit(frame);
        sereachEdit->setObjectName(QString::fromUtf8("sereachEdit"));
        sereachEdit->setGeometry(QRect(400, 20, 341, 32));
        sereachEdit->setCursor(QCursor(Qt::IBeamCursor));
        sereachEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background-color: rgba(255, 255, 255,150);\n"
"border-style:outset;\n"
"\n"
"border-width:0px;\n"
"\n"
"border-radius:10px;\n"
"border-color: rgba(0,0,0,100);\n"
"font: 10pt \"\345\271\274\345\234\206\";\n"
"color:rgb(180,180,180);\n"
"padding:6px;\n"
"}"));
        sereachEdit->setInputMethodHints(Qt::ImhNone);
        listWidget_5 = new QListWidget(frame);
        listWidget_5->setObjectName(QString::fromUtf8("listWidget_5"));
        listWidget_5->setGeometry(QRect(440, 210, 350, 531));
        listWidget_5->viewport()->setProperty("cursor", QVariant(QCursor(Qt::PointingHandCursor)));
        listWidget_5->setContextMenuPolicy(Qt::CustomContextMenu);
        listWidget_5->setStyleSheet(QString::fromUtf8("QListWidget{\n"
"font: 75 12pt \"Comic Sans MS\";\n"
"background-color:transparent;\n"
"\n"
"}\n"
"QListWidget::item{\n"
"color:rgb(120,120,120);\n"
"border:none;\n"
"margin-top:3px;\n"
"\n"
"}\n"
"QListWidget::item:hover{\n"
"padding-left:4px;\n"
"margin-top:3px;\n"
"color:rgb(100,100,100);\n"
"background-color:rgba(255,255,255,0.2);\n"
"\n"
"\n"
"\n"
"}\n"
"QListWidget::item:selected{\n"
"outline:none;\n"
"margin-top:3px;\n"
"padding-left:4px;\n"
"background-color:rgba(255,255,255,0.5);\n"
"color:rgb(0,0,0);\n"
"}\n"
"QListWidget::item:!active{\n"
"margin-top:3px;\n"
"border:none;\n"
"background-color:rgba(255,255,255,0);\n"
"color:rgb(120,120,120);\n"
"}\n"
"\n"
"\n"
"\n"
""));
        listWidget_5->setFrameShape(QFrame::NoFrame);
        listWidget_5->setLineWidth(0);
        listWidget_5->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        listWidget_5->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidget_5->setSelectionMode(QAbstractItemView::SingleSelection);
        listWidget_5->setSelectionBehavior(QAbstractItemView::SelectItems);
        stackedWidget = new QStackedWidget(frame);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setEnabled(true);
        stackedWidget->setGeometry(QRect(12, 110, 350, 531));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        listWidget_3 = new QListWidget(page);
        listWidget_3->setObjectName(QString::fromUtf8("listWidget_3"));
        listWidget_3->setGeometry(QRect(0, 0, 350, 531));
        QFont font;
        font.setFamily(QString::fromUtf8("Comic Sans MS"));
        font.setPointSize(12);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(9);
        listWidget_3->setFont(font);
        listWidget_3->viewport()->setProperty("cursor", QVariant(QCursor(Qt::PointingHandCursor)));
        listWidget_3->setContextMenuPolicy(Qt::CustomContextMenu);
        listWidget_3->setStyleSheet(QString::fromUtf8("QListWidget{\n"
"font: 75 12pt \"Comic Sans MS\";\n"
"background-color:transparent;\n"
"\n"
"}\n"
"QListWidget::item{\n"
"color:rgb(120,120,120);\n"
"border:none;\n"
"margin-top:3px;\n"
"\n"
"}\n"
"QListWidget::item:hover{\n"
"padding-left:4px;\n"
"margin-top:3px;\n"
"color:rgb(100,100,100);\n"
"background-color:rgba(255,255,255,0.2);\n"
"\n"
"\n"
"\n"
"}\n"
"QListWidget::item:selected{\n"
"outline:none;\n"
"margin-top:3px;\n"
"padding-left:4px;\n"
"background-color:rgba(255,255,255,0.5);\n"
"color:rgb(0,0,0);\n"
"}\n"
"QListWidget::item:!active{\n"
"margin-top:3px;\n"
"border:none;\n"
"background-color:rgba(255,255,255,0);\n"
"color:rgb(120,120,120);\n"
"}\n"
"\n"
"\n"
"\n"
""));
        listWidget_3->setFrameShape(QFrame::NoFrame);
        listWidget_3->setFrameShadow(QFrame::Sunken);
        listWidget_3->setLineWidth(0);
        listWidget_3->setMidLineWidth(0);
        listWidget_3->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        listWidget_3->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidget_3->setDefaultDropAction(Qt::CopyAction);
        listWidget_3->setAlternatingRowColors(false);
        listWidget_3->setSelectionMode(QAbstractItemView::SingleSelection);
        listWidget_3->setSelectionBehavior(QAbstractItemView::SelectItems);
        listWidget_3->setLayoutMode(QListView::SinglePass);
        listWidget_3->setSelectionRectVisible(false);
        stackedWidget->addWidget(page);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        listWidget_2 = new QListWidget(page_3);
        listWidget_2->setObjectName(QString::fromUtf8("listWidget_2"));
        listWidget_2->setGeometry(QRect(0, 0, 350, 531));
        listWidget_2->setFont(font);
        listWidget_2->viewport()->setProperty("cursor", QVariant(QCursor(Qt::PointingHandCursor)));
        listWidget_2->setContextMenuPolicy(Qt::CustomContextMenu);
        listWidget_2->setStyleSheet(QString::fromUtf8("QListWidget{\n"
"font: 75 12pt \"Comic Sans MS\";\n"
"background-color:transparent;\n"
"\n"
"}\n"
"QListWidget::item{\n"
"color:rgb(120,120,120);\n"
"border:none;\n"
"margin-top:3px;\n"
"\n"
"}\n"
"QListWidget::item:hover{\n"
"padding-left:4px;\n"
"margin-top:3px;\n"
"color:rgb(100,100,100);\n"
"background-color:rgba(255,255,255,0.2);\n"
"\n"
"\n"
"\n"
"}\n"
"QListWidget::item:selected{\n"
"outline:none;\n"
"margin-top:3px;\n"
"padding-left:4px;\n"
"background-color:rgba(255,255,255,0.5);\n"
"color:rgb(0,0,0);\n"
"}\n"
"QListWidget::item:!active{\n"
"margin-top:3px;\n"
"border:none;\n"
"background-color:rgba(255,255,255,0);\n"
"color:rgb(120,120,120);\n"
"}\n"
"\n"
"\n"
"\n"
""));
        listWidget_2->setFrameShape(QFrame::NoFrame);
        listWidget_2->setFrameShadow(QFrame::Plain);
        listWidget_2->setLineWidth(0);
        listWidget_2->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        listWidget_2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidget_2->setSelectionMode(QAbstractItemView::SingleSelection);
        listWidget_2->setBatchSize(100);
        stackedWidget->addWidget(page_3);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        listWidget = new QListWidget(page_2);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(0, 0, 350, 531));
        listWidget->setFont(font);
        listWidget->viewport()->setProperty("cursor", QVariant(QCursor(Qt::PointingHandCursor)));
        listWidget->setContextMenuPolicy(Qt::CustomContextMenu);
        listWidget->setStyleSheet(QString::fromUtf8("QListWidget{\n"
"font: 75 12pt \"Comic Sans MS\";\n"
"background-color:transparent;\n"
"\n"
"}\n"
"QListWidget::item{\n"
"color:rgb(120,120,120);\n"
"border:none;\n"
"margin-top:3px;\n"
"\n"
"}\n"
"QListWidget::item:hover{\n"
"padding-left:4px;\n"
"margin-top:3px;\n"
"color:rgb(100,100,100);\n"
"background-color:rgba(255,255,255,0.2);\n"
"\n"
"\n"
"\n"
"}\n"
"QListWidget::item:selected{\n"
"outline:none;\n"
"margin-top:3px;\n"
"padding-left:4px;\n"
"background-color:rgba(255,255,255,0.5);\n"
"color:rgb(0,0,0);\n"
"}\n"
"QListWidget::item:!active{\n"
"margin-top:3px;\n"
"border:none;\n"
"background-color:rgba(255,255,255,0);\n"
"color:rgb(120,120,120);\n"
"}\n"
"\n"
"\n"
"\n"
""));
        listWidget->setFrameShape(QFrame::NoFrame);
        listWidget->setFrameShadow(QFrame::Plain);
        listWidget->setLineWidth(0);
        listWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        listWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        listWidget->setSortingEnabled(false);
        stackedWidget->addWidget(page_2);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        listWidget_4 = new QListWidget(page_4);
        listWidget_4->setObjectName(QString::fromUtf8("listWidget_4"));
        listWidget_4->setGeometry(QRect(0, 0, 350, 531));
        listWidget_4->viewport()->setProperty("cursor", QVariant(QCursor(Qt::PointingHandCursor)));
        listWidget_4->setContextMenuPolicy(Qt::CustomContextMenu);
        listWidget_4->setStyleSheet(QString::fromUtf8("QListWidget{\n"
"font: 75 12pt \"Comic Sans MS\";\n"
"background-color:transparent;\n"
"\n"
"}\n"
"QListWidget::item{\n"
"color:rgb(120,120,120);\n"
"border:none;\n"
"margin-top:3px;\n"
"\n"
"}\n"
"QListWidget::item:hover{\n"
"padding-left:4px;\n"
"margin-top:3px;\n"
"color:rgb(100,100,100);\n"
"background-color:rgba(255,255,255,0.2);\n"
"\n"
"\n"
"\n"
"}\n"
"QListWidget::item:selected{\n"
"outline:none;\n"
"margin-top:3px;\n"
"padding-left:4px;\n"
"background-color:rgba(255,255,255,0.5);\n"
"color:rgb(0,0,0);\n"
"}\n"
"QListWidget::item:!active{\n"
"margin-top:3px;\n"
"border:none;\n"
"background-color:rgba(255,255,255,0);\n"
"color:rgb(120,120,120);\n"
"}\n"
"\n"
"\n"
"\n"
""));
        listWidget_4->setFrameShape(QFrame::NoFrame);
        listWidget_4->setFrameShadow(QFrame::Raised);
        listWidget_4->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        listWidget_4->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        listWidget_6 = new QListWidget(page_5);
        listWidget_6->setObjectName(QString::fromUtf8("listWidget_6"));
        listWidget_6->setGeometry(QRect(0, 0, 350, 531));
        listWidget_6->viewport()->setProperty("cursor", QVariant(QCursor(Qt::PointingHandCursor)));
        listWidget_6->setContextMenuPolicy(Qt::CustomContextMenu);
        listWidget_6->setStyleSheet(QString::fromUtf8("QListWidget{\n"
"font: 75 12pt \"Comic Sans MS\";\n"
"background-color:transparent;\n"
"\n"
"}\n"
"QListWidget::item{\n"
"color:rgb(120,120,120);\n"
"border:none;\n"
"margin-top:3px;\n"
"\n"
"}\n"
"QListWidget::item:hover{\n"
"padding-left:4px;\n"
"margin-top:3px;\n"
"color:rgb(100,100,100);\n"
"background-color:rgba(255,255,255,0.2);\n"
"\n"
"\n"
"\n"
"}\n"
"QListWidget::item:selected{\n"
"outline:none;\n"
"margin-top:3px;\n"
"padding-left:4px;\n"
"background-color:rgba(255,255,255,0.5);\n"
"color:rgb(0,0,0);\n"
"}\n"
"QListWidget::item:!active{\n"
"margin-top:3px;\n"
"border:none;\n"
"background-color:rgba(255,255,255,0);\n"
"color:rgb(120,120,120);\n"
"}\n"
"\n"
"\n"
"\n"
""));
        listWidget_6->setFrameShape(QFrame::NoFrame);
        listWidget_6->setLineWidth(0);
        listWidget_6->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        listWidget_6->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidget_6->setSelectionMode(QAbstractItemView::SingleSelection);
        listWidget_6->setSelectionBehavior(QAbstractItemView::SelectItems);
        stackedWidget->addWidget(page_5);
        verticalSlider = new QSlider(frame);
        verticalSlider->setObjectName(QString::fromUtf8("verticalSlider"));
        verticalSlider->setEnabled(true);
        verticalSlider->setGeometry(QRect(1170, 460, 35, 181));
        verticalSlider->setCursor(QCursor(Qt::PointingHandCursor));
        verticalSlider->setStyleSheet(QString::fromUtf8("QSlider{  \n"
"	background-color: rgba(255,255,255,0.2);\n"
"	min-width:5px; \n"
"	max-width:5px;\n"
"	border:15px solid rgba(255,255,255,0.2); \n"
"}\n"
"\n"
"QSlider::add-page:vertical{\n"
"	background-color: rgb(250, 250, 0);\n"
"	width:4px;\n"
"}\n"
"\n"
"QSlider::sub-page:vertical{\n"
"	background-color: rgba(255,255,255,0.5); \n"
"	width:4px;\n"
"}\n"
"\n"
"QSlider::groove:vertical{\n"
"	background:transparent;\n"
"	width:6px;\n"
"}\n"
"\n"
"QSlider::handle:vertical{\n"
"	height: 13px;\n"
"	width:13px;\n"
"	margin: -0 -4px; \n"
"	border-image: url(:/image/image/button/handle2.png);\n"
"}"));
        verticalSlider->setOrientation(Qt::Vertical);
        verticalSlider->setTickPosition(QSlider::NoTicks);
        trButton->raise();
        horizontalSlider->raise();
        addButton->raise();
        faceButton->raise();
        setButton->raise();
        minButton->raise();
        maxButton->raise();
        quitButton->raise();
        musicButton->raise();
        likeButton->raise();
        listButton->raise();
        palyRecButton->raise();
        preButton->raise();
        paseButton->raise();
        nextButton->raise();
        positionButton->raise();
        playListButton->raise();
        musicVoiceButton->raise();
        iLikeButton->raise();
        loopButton->raise();
        leftButton->raise();
        lefArrowButton->raise();
        sereachButton->raise();
        sereachEdit->raise();
        listWidget_5->raise();
        stackedWidget->raise();
        verticalSlider->raise();

        retranslateUi(MBoxClass);
        QObject::connect(quitButton, SIGNAL(clicked()), MBoxClass, SLOT(close()));

        stackedWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(MBoxClass);
    } // setupUi

    void retranslateUi(QWidget *MBoxClass)
    {
        MBoxClass->setWindowTitle(QCoreApplication::translate("MBoxClass", "MBox", nullptr));
        addButton->setText(QString());
        faceButton->setText(QString());
        setButton->setText(QString());
        trButton->setText(QString());
        minButton->setText(QString());
        maxButton->setText(QString());
        quitButton->setText(QString());
        musicButton->setText(QString());
        likeButton->setText(QString());
        listButton->setText(QString());
        palyRecButton->setText(QString());
        preButton->setText(QString());
        paseButton->setText(QString());
        nextButton->setText(QString());
        positionButton->setText(QString());
        playListButton->setText(QString());
        musicVoiceButton->setText(QString());
        iLikeButton->setText(QString());
        loopButton->setText(QString());
        leftButton->setText(QString());
        lefArrowButton->setText(QString());
        sereachButton->setText(QString());
#if QT_CONFIG(tooltip)
        sereachEdit->setToolTip(QCoreApplication::translate("MBoxClass", "\350\276\223\345\205\245\346\255\214\346\233\262\346\210\226\346\255\214\346\211\213", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        sereachEdit->setStatusTip(QCoreApplication::translate("MBoxClass", "\350\276\223\345\205\245\346\255\214\346\233\262", nullptr));
#endif // QT_CONFIG(statustip)
    } // retranslateUi

};

namespace Ui {
    class MBoxClass: public Ui_MBoxClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MBOX_H
