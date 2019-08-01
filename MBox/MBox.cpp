#include "MBox.h"
#include <qmediaplayer.h>
#include <QDir>


MBox::MBox(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	ui.sereachEdit->setText(QStringLiteral("ÊäÈë¸èÊÖ»ò¸èÇú"));
	ui.verticalSlider->hide();
	
	

	init_list();
	connect(ui.paseButton, SIGNAL(clicked()), this, SLOT(on_palyButton_clicked()));
}

inline void MBox::init_list()
{
	int i = 0;
	QDir dir("C:/Users/John/Desktop/musicPath");

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


void MBox::on_palyButton_clicked()
{
	musiclist->setPlaybackMode(QMediaPlaylist::Loop);
	musicplayer->setPlaylist(musiclist);
	musicplayer->play();
	


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