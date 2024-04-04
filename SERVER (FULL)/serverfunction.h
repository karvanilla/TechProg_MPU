#ifndef serverfunction_h
#define serverfunction_h

#include <QCoreApplication>
#include <QString>
#include <stdio.h>
#include "database.h"
#include "tasks.h"
#include "task1.h"
#include "task2.h"
#include <QDebug>
#include <QCoreApplication>
#include <QJsonDocument>
#include <QJsonValue>
#include <QJsonArray>
#include <QJsonObject>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QList>
#include <QLatin1Char>
#include <QCryptographicHash>

/*
parsing is a function that processes client messages: extracts the command and arguments, and then calls the corresponding function
Argument data - message received from the client
Return value is the response of the corresponding function
*/

QByteArray parse(QString request);
QByteArray auth(QString log, QString pass);
QByteArray reg(QString log, QString pass, QString email);
QByteArray checkTask(QString taskId, QString variant, QString answer, QString userToken);
QByteArray getTask(QString taskType);
QByteArray getTask1(QString taskType);
QByteArray getTask2(QString taskType);
QByteArray getUserStat(QString Token);
QString removeLastTwoCharacters(QString request);

#endif
