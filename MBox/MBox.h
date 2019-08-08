#pragma once

#include <QtWidgets/QWidget>
#include "ui_MBox.h"
#include <QMediaPlaylist>
#include <QMediaPlayer>

class MBox : public QWidget
{
	Q_OBJECT

public:
	MBox(QWidget *parent = Q_NULLPTR);

	inline void init_list();
	inline QString PlayStyle();
	inline QString PaseStyle();

	
	void updatePosition(qint64 position);
	void updateDuration(qint64 duration);

private:
	Ui::MBoxClass ui;

	QMediaPlayer* musicplayer = new QMediaPlayer();
	QMediaPlaylist *musiclist = new QMediaPlaylist();

	QVector<int> list1;

private slots:
	//void on_quitButton_clicked();//¹Ø±Õ

	void on_palyButton_clicked();//²¥·Å°´Å¥
	void on_musicVoiceButton_clicked();//Òþ²ØverticalSlider
};
