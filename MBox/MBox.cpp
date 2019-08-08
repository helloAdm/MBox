#include "MBox.h"
#include <qmediaplayer.h>
#include <QDir>


MBox::MBox(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	ui.sereachEdit->setText(QStringLiteral("ÊäÈë¸èÊÖ»ò¸èÇú"));
	ui.verticalSlider->hide();
	ui.horizontalSlider->setValue(0);
	

	init_list();
	connect(ui.paseButton, SIGNAL(clicked()), this, SLOT(on_palyButton_clicked()));
	connect(musicplayer, &QMediaPlayer::positionChanged, this, &MBox::updatePosition);
	connect(musicplayer, &QMediaPlayer::durationChanged, this, &MBox::updateDuration);
}

inline void MBox::init_list()
{
	int i = 0;
	QDir dir("F:/musicPath");

	QStringList stringlist_song;
	QFileInfoList fileinfolist;
	QFileInfo fileinfo;
	QString songPath, songName;

	stringlist_song << "*.mp3";
	dir.setNameFilters(stringlist_song);
	fileinfolist = dir.entryInfoList();

	while (i < fileinfolist.length())
	{
		fileinfo = fileinfolist.at(i);
		songPath = fileinfo.filePath();
		songName = fileinfo.baseName();


		if (!songPath.isEmpty())
		{
			QListWidgetItem* item1 = new QListWidgetItem;
			item1->setIcon(QIcon(":/image/image/image/musicIcon.png"));
			item1->setText(songName);
			ui.listWidget_6->addItem(item1);
			musiclist->addMedia(QUrl::fromLocalFile(songPath));
			list1.push_back(0);
			songPath.push_back(songPath);
		}

		i++;
	}

}

inline QString MBox::PaseStyle()
{
	return 
		"QPushButton{"
			"background-image:url(:/image/image/image/pase.png);"
			"background-repeat:no-repeat;"
			"background-position:center center;"
			"border:none;"
		"}"

		"QPushButton:hover{"
			"background-repeat:no-repeat;"
			"background-position:center center;"
			"background-image:url(:/image/image/image-hover/pase-hover.png);"
		"}"
		
		"QPushButton:pressed{"
			"background-repeat:no-repeat;"
			"background-position:center center;"
			"background-image:url(:/image/image/image/pase.png);"
		"}";
}

inline QString MBox::PlayStyle()
{
	return 
		"QPushButton{"
			"background-image:url(:/image/image/button/play.png);"
			"background-repeat:no-repeat;"
			"background-position:center center;"
			"border:none;"
		"}"

		"QPushButton:hover{"
			"background-repeat:no-repeat;"
			"background-position:center center;"
			"background-image:url(:/image/image/button-hover/play-hover.png);"
		"}"
		
		"QPushButton:pressed{"
			"background-repeat:no-repeat;"
			"background-position:center center;"
			"background-image:url(:/image/image/button/play.png);"
		"}";
}

void MBox::updatePosition(qint64 position)
{
	ui.horizontalSlider->setValue(position);

}

void MBox::updateDuration(qint64 duration)
{
	ui.horizontalSlider->setRange(0, duration);
	ui.horizontalSlider->setEnabled(duration>0);
	ui.horizontalSlider->setPageStep(duration / 10);
}

void MBox::on_palyButton_clicked()
{
	if (ui.listWidget_6->count() == 0)
	{
		return;
	}

	if (musicplayer->state() == QMediaPlayer::PlayingState)
	{
		ui.paseButton->setIcon(QIcon(":/image/image/button/pase.png"));
		ui.paseButton->setStyleSheet(PaseStyle());
		musicplayer->pause();
	}
	else
	{
		ui.paseButton->setIcon(QIcon(":/image/image/button/play.png"));
		ui.paseButton->setStyleSheet(PlayStyle());
		musiclist->setPlaybackMode(QMediaPlaylist::Loop);
		musicplayer->setPlaylist(musiclist);
		musicplayer->play();
	}
}

void MBox::on_musicVoiceButton_clicked()
{
	
	//ListFocus();

	if (ui.verticalSlider->isHidden())
		ui.verticalSlider->show();
	else
	{
		ui.verticalSlider->hide();
	}
}

//void MBox::on_quitButton_clicked()
//{
//	QCoreApplication::quit;
//}