#pragma once

#include <QtWidgets/QWidget>
#include "ui_MBox.h"

class MBox : public QWidget
{
	Q_OBJECT

public:
	MBox(QWidget *parent = Q_NULLPTR);

private:
	Ui::MBoxClass ui;
};
