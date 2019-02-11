#ifndef LOGIN_H
#define LOGIN_H
#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <QCoreApplication>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>
#include <QMainWindow>

class login
{
public:
    login();
    QSqlDatabase db;
    void dbClose();
    bool dbOpen();
};

#endif // LOGIN_H