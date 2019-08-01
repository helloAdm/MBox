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

	

private:
	Ui::MBoxClass ui;

	QMediaPlayer* musicplayer = new QMediaPlayer();
	QMediaPlaylist *musiclist = new QMediaPlaylist();

	QVector<int> list1;

private slots:
	//void on_quitButton_clicked();//�ر�

	void on_palyButton_clicked();//���Ű�ť
	void on_musicVoiceButton_clicked();//����verticalSlider
};
