﻿#ifndef ADDFRIEND_H
#define ADDFRIEND_H

#include <QMainWindow>
#include "mysocket.h"
namespace Ui {
class AddFriend;
}

class AddFriend : public QMainWindow
{
    Q_OBJECT

public:
    QString *port;
    QString *ip;
    MySocket *mysocket;
    QString *username;
    QString friendname;
    QString nickname;
    explicit AddFriend(QWidget *parent = 0);
    ~AddFriend();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::AddFriend *ui;
};

#endif // ADDFRIEND_H
