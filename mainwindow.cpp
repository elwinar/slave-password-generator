#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QCryptographicHash>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

void MainWindow::compute()
{
    QString string = ui->masterPasswordField->text() + ui->slaveKeyField->text();
    QString hash(QCryptographicHash::hash(QByteArray(string.toStdString().c_str()), QCryptographicHash::Md5).toHex());
    QString chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789&#@',.()[]{}<>+-/*";
    QString password = "";
    bool error;
    for(int i = 0; i < hash.length() / 2; ++i)
    {
        password.append(chars.at(hash.mid(i * 2, 2).toInt(&error, 16) % chars.length()));
    }
    ui->slavePasswordField->setText(password);
}

MainWindow::~MainWindow()
{
    delete ui;
}
