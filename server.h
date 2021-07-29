#ifndef SERVER_H
#define SERVER_H

#include <QWidget>
#include "loginwidget.h"
#include <QTcpServer>
#include <QTcpSocket>


namespace Ui {
class Server;
}

class Server : public QWidget
{
    Q_OBJECT
    int page;

public:
    explicit Server(QWidget *parent = nullptr);

    ~Server();


private slots:
    void on_chat_btn_clicked();
    void on_exit_btn_clicked();
    void connected();
private:
    Ui::Server *ui;


signals:
    void ChatStart();
};

#endif // SERVER_H
