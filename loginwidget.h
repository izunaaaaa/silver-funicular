#ifndef LOGINWIDGET_H
#define LOGINWIDGET_H

#include <QWidget>
#include <QTcpServer>
#include <QTcpSocket>

namespace Ui {
class LoginWidget;
}

class LoginWidget : public QWidget
{
    Q_OBJECT


public:
    explicit LoginWidget(QWidget *parent = nullptr);
    ~LoginWidget();


private slots:
    void on_join_btn_clicked();
    void on_exit_btn_clicked();

private:
    Ui::LoginWidget *ui;



signals:
    void loginInfo();

};

#endif // LOGINWIDGET_H00000000000
