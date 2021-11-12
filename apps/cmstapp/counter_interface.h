/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -p counter_interface.h: code/counter/org.monkey_business_enterprises.counter.xml
 *
 * qdbusxml2cpp is Copyright (C) 2020 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef COUNTER_INTERFACE_H
#define COUNTER_INTERFACE_H

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

/*
 * Proxy class for interface net.connman.Counter
 */
class NetConnmanCounterInterface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "net.connman.Counter"; }

public:
    NetConnmanCounterInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = nullptr);

    ~NetConnmanCounterInterface();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<> Release()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("Release"), argumentList);
    }

    inline QDBusPendingReply<> Usage(const QDBusObjectPath &in0, const QVariantMap &in1, const QVariantMap &in2)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0) << QVariant::fromValue(in1) << QVariant::fromValue(in2);
        return asyncCallWithArgumentList(QStringLiteral("Usage"), argumentList);
    }

Q_SIGNALS: // SIGNALS
};

namespace net {
  namespace connman {
    typedef ::NetConnmanCounterInterface Counter;
  }
}
#endif