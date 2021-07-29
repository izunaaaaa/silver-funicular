#include "loginwidget.h"
#include "ui_loginwidget.h"
#include <QValidator>




LoginWidget::LoginWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LoginWidget)
{
    ui->setupUi(this);
    QString ipRange = "(?:[0-1]?[0-9]?[0-9]|2[0-4][0-9]|25[0-5])";

        QRegExp ipRegex ("^" + ipRange
                             + "." + ipRange
                             + "." + ipRange
                             + "." + ipRange + "$");

        QRegExpValidator *ipValidator = new QRegExpValidator(ipRegex, this);
        ui->lineEdit->setValidator(ipValidator);
        QString name = ui->lineEdit_2-> text();




}

LoginWidget::~LoginWidget()
{
    delete ui;
}
void LoginWidget::on_join_btn_clicked()
{

   emit loginInfo();
   this -> hide();
}

void LoginWidget::on_exit_btn_clicked()
{
    this -> close();
}
