#include "server.h"
#include "ui_server.h"
#include "widget.h"



Server::Server(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Server)
{
    ui->setupUi(this);

}

Server::~Server()
{
    delete ui;
}

void Server::on_chat_btn_clicked()
{
    this -> hide();
    emit ChatStart();


}

void Server::on_exit_btn_clicked()
{
    this -> close();
}
void Server::connected()
{
    this -> show();
}
