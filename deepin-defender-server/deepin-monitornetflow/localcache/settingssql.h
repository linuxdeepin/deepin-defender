// SPDX-FileCopyrightText: 2019 - 2022 UnionTech Software Technology Co., Ltd.
//
// SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

//#include "../common/common.h"
#include "../common/gsettingkey.h"
//#include "../common/comdata.h"

#include <QObject>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>

class QXmlStreamReader;

class SettingsSql : public QObject
{
    Q_OBJECT

public:
    explicit SettingsSql(const QString &connName, QObject *parent = nullptr);
    ~SettingsSql();

    bool setValue(const QString &key, const QVariant &value, const bool isDefault = false);
    QVariant getValue(const QString &key);

public Q_SLOTS:
    void initDb();

Q_SIGNALS:

private:
    // 解析gsetting xml文件，并根据文件内容设置默认值
    void setDefaultKeyValues();
    // 从xml中读取默认值，并向数据库中写入
    void readAndSetKeyDefaultValueFromXml(QXmlStreamReader *xmlReader, QString &keyName, QString &keyType);

private:
    QString m_connName;
    QString m_localCacheDbPath;
    QSqlDatabase m_db;
    QSqlQuery m_sqlQuery;
};
