//This program is free software: you can redistribute it and/or modify
//it under the terms of the GNU General Public License as published by
//the Free Software Foundation, either version 3 of the License, or
//(at your option) any later version.

//This program is distributed in the hope that it will be useful,
//but WITHOUT ANY WARRANTY; without even the implied warranty of
//MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//GNU General Public License for more details.

#include "historyform.h"
#include "ui_historyform.h"

using namespace Huggle;

HistoryForm::HistoryForm(QWidget *parent) : QDockWidget(parent), ui(new Ui::HistoryForm)
{
    ui->setupUi(this);
    ui->pushButton->setEnabled(false);
    //localize me
    ui->pushButton->setText("No edit info");
}

HistoryForm::~HistoryForm()
{
    delete ui;
}

void HistoryForm::Update(WikiEdit *edit)
{
    this->CurrentEdit = edit;
    this->ui->pushButton->setText("Retrieve history");
    this->ui->pushButton->setEnabled(true);
}

void HistoryForm::on_pushButton_clicked()
{
    //localize me
    ui->pushButton->setText("Retrieving history");
    ui->pushButton->setEnabled(false);
}