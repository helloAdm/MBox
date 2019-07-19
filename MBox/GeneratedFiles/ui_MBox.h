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
    QStackedWidget *stackedWidget;
    QWidget *page;
    QListWidget *listWidget;
    QWidget *page_2;
    QPushButton *addButton;
    QPushButton *faceButton;
    QPushButton *setButton;
    QPushButton *trButton;
    QPushButton *minButton;
    QPushButton *maxButton;
    QPushButton *pushButton;

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
        stackedWidget = new QStackedWidget(frame);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(12, 110, 350, 531));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        listWidget = new QListWidget(page);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(0, 0, 350, 531));
        listWidget->setStyleSheet(QString::fromUtf8("QListWidget{\n"
"	font: 75 12pt;\n"
"	background-color:transparent;\n"
"}\n"
"\n"
"QListWidget::item{\n"
"	color:rgb(120,120,120);\n"
"	border:none;\n"
"	margin-top:3px;\n"
"}\n"
"\n"
"QListWidget::item:hover{\n"
"	padding-left:4px;\n"
"	margin-top:3px;\n"
"	color:rgb(100,100,100);\n"
"	background-color:rgba(255,255,255,0.2);\n"
"}\n"
"\n"
"QListWidget::item:selected{\n"
"	outline:none;\n"
"	margin-top:3px;\n"
"	padding-left:4px;\n"
"	background-color:rgba(255,255,255,0.5);\n"
"	color:rgb(0,0,0);\n"
"}\n"
"\n"
"QListWidget::item:!active{\n"
"	margin-top:3px;\n"
"	border:none;\n"
"	background-color:rgba(255,255,255,0);\n"
"	color:rgb(120,120,120);\n"
"}\n"
"\n"
"\n"
"\n"
""));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        stackedWidget->addWidget(page_2);
        addButton = new QPushButton(frame);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setGeometry(QRect(936, 0, 32, 32));
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
        faceButton->setGeometry(QRect(988, 0, 32, 32));
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
        setButton->setGeometry(QRect(1040, 0, 32, 32));
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
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(1185, 0, 32, 32));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        retranslateUi(MBoxClass);

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
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MBoxClass: public Ui_MBoxClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MBOX_H
