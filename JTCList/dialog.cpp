#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->listWidget->addItem("Enter Racquet Below then push add");

}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_pushButton_Add_clicked()
{
    QString racquetName;
    racquetName = ui->Enterracquet->text();
    if (racquetName.isEmpty())
    {
        racquetName = "Empty";
    }
    ui->listWidget->addItem(racquetName);

}

void Dialog::on_pushButton_Remove_clicked()
{
    delete ui->listWidget->currentItem();
}

void Dialog::on_pushButton_change_clicked()
{
    QString replacestring;
    replacestring = ui->Enterracquet->text();
    ui->listWidget->currentItem()->setText(replacestring);

}

void Dialog::on_pushButton_exit_clicked()
{
    close();
}
