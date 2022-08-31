/****************************************************************************
**
** Copyright (C) 2017 Ford Motor Company
** Contact: https://www.qt.io/licensing/
**
** This file is part of the QtRemoteObjects module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:GPL-EXCEPT$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see https://www.qt.io/terms-conditions. For further
** information use the contact form at https://www.qt.io/contact-us.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3 as published by the Free Software
** Foundation with exceptions as appearing in the file LICENSE.GPL3-EXCEPT
** included in the packaging of this file. Please review the following
** information to ensure the GNU General Public License requirements will
** be met: https://www.gnu.org/licenses/gpl-3.0.html.
**
** $QT_END_LICENSE$
**
****************************************************************************/

#pragma once
// This is an autogenerated file.
// Do not edit this file, any changes made will be lost the next time it is generated.

#include <QObject>


#include <QString>
class PodI
{
    Q_GADGET
    Q_PROPERTY(int i READ i WRITE setI)
public:
    explicit PodI() : _i() {}
    explicit PodI(int i) : _i(i) {}
    PodI(const PodI& other)
    {
        QtRemoteObjects::copyStoredProperties(&other, this);
    }

    PodI &operator=(const PodI &other)
    {
        if (this != &other)
            QtRemoteObjects::copyStoredProperties(&other, this);
        return *this;
    }

    int i() const { return _i; }
    void setI(int i) { if (i != _i) { _i = i; } }
private:
    int _i;
};

inline QDataStream &operator<<(QDataStream &ds, const PodI &obj) {
    QtRemoteObjects::copyStoredProperties(&obj, ds);
    return ds;
}

inline QDataStream &operator>>(QDataStream &ds, PodI &obj) {
    QtRemoteObjects::copyStoredProperties(ds, &obj);
    return ds;
}

class PodF
{
    Q_GADGET
    Q_PROPERTY(float f READ f WRITE setF)
public:
    explicit PodF() : _f() {}
    explicit PodF(float f) : _f(f) {}
    PodF(const PodF& other)
    {
        QtRemoteObjects::copyStoredProperties(&other, this);
    }

    PodF &operator=(const PodF &other)
    {
        if (this != &other)
            QtRemoteObjects::copyStoredProperties(&other, this);
        return *this;
    }

    float f() const { return _f; }
    void setF(float f) { if (f != _f) { _f = f; } }
private:
    float _f;
};

inline QDataStream &operator<<(QDataStream &ds, const PodF &obj) {
    QtRemoteObjects::copyStoredProperties(&obj, ds);
    return ds;
}

inline QDataStream &operator>>(QDataStream &ds, PodF &obj) {
    QtRemoteObjects::copyStoredProperties(ds, &obj);
    return ds;
}

class PodS
{
    Q_GADGET
    Q_PROPERTY(QString s READ s WRITE setS)
public:
    explicit PodS() : _s() {}
    explicit PodS(QString s) : _s(s) {}
    PodS(const PodS& other)
    {
        QtRemoteObjects::copyStoredProperties(&other, this);
    }

    PodS &operator=(const PodS &other)
    {
        if (this != &other)
            QtRemoteObjects::copyStoredProperties(&other, this);
        return *this;
    }

    QString s() const { return _s; }
    void setS(QString s) { if (s != _s) { _s = s; } }
private:
    QString _s;
};

inline QDataStream &operator<<(QDataStream &ds, const PodS &obj) {
    QtRemoteObjects::copyStoredProperties(&obj, ds);
    return ds;
}

inline QDataStream &operator>>(QDataStream &ds, PodS &obj) {
    QtRemoteObjects::copyStoredProperties(ds, &obj);
    return ds;
}

class PodIFS
{
    Q_GADGET
    Q_PROPERTY(int i READ i WRITE setI)
    Q_PROPERTY(float f READ f WRITE setF)
    Q_PROPERTY(QString s READ s WRITE setS)
public:
    explicit PodIFS() : _i(), _f(), _s() {}
    explicit PodIFS(int i, float f, QString s) : _i(i), _f(f), _s(s) {}
    PodIFS(const PodIFS& other)
    {
        QtRemoteObjects::copyStoredProperties(&other, this);
    }

    PodIFS &operator=(const PodIFS &other)
    {
        if (this != &other)
            QtRemoteObjects::copyStoredProperties(&other, this);
        return *this;
    }

    int i() const { return _i; }
    void setI(int i) { if (i != _i) { _i = i; } }
    float f() const { return _f; }
    void setF(float f) { if (f != _f) { _f = f; } }
    QString s() const { return _s; }
    void setS(QString s) { if (s != _s) { _s = s; } }
private:
    int _i;
    float _f;
    QString _s;
};

inline QDataStream &operator<<(QDataStream &ds, const PodIFS &obj) {
    QtRemoteObjects::copyStoredProperties(&obj, ds);
    return ds;
}

inline QDataStream &operator>>(QDataStream &ds, PodIFS &obj) {
    QtRemoteObjects::copyStoredProperties(ds, &obj);
    return ds;
}

