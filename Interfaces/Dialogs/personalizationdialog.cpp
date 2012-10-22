#include "personalizationdialog.h"
#include "ui_personalizationdialog.h"
#include <QMessageBox>

PersonalizationDialog::PersonalizationDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PersonalizationDialog)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::SubWindow | Qt::FramelessWindowHint);
}

PersonalizationDialog::~PersonalizationDialog()
{
    delete ui;
}

void PersonalizationDialog::on_okPushButton_clicked()
{
    if (ui->nameLineEdit->text() == "")
    {
         QMessageBox msgBox;
         msgBox.setText("Введите имя");
    }

    if (ui->surnameLineEdit->text() == "")
    {
        QMessageBox msgBox;
        msgBox.setText("Введите фамилию");
    }
    if(ui->groupLineEdit->text() == "")
    {
        QMessageBox msgBox;
        msgBox.setText("Введите группу");
    }

}

void PersonalizationDialog::on_canselPushButton_clicked()
{
    this->close();
}
