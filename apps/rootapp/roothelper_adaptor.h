/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -a roothelper_adaptor.h: code/roothelper/org.monkey_business_enterprises.roothelper.xml
 *
 * qdbusxml2cpp is Copyright (C) 2020 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef ROOTHELPER_ADAPTOR_H
#define ROOTHELPER_ADAPTOR_H

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
QT_BEGIN_NAMESPACE
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;
QT_END_NAMESPACE

/*
 * Adaptor class for interface org.cmst.roothelper
 */
class RoothelperAdaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "org.cmst.roothelper")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"org.cmst.roothelper\">\n"
"    <method name=\"startHelper\"/>\n"
"    <method name=\"getFileList\">\n"
"      <arg direction=\"out\" type=\"as\"/>\n"
"      <arg direction=\"in\" type=\"s\"/>\n"
"    </method>\n"
"    <method name=\"readFile\">\n"
"      <arg direction=\"out\" type=\"s\"/>\n"
"      <arg direction=\"in\" type=\"s\"/>\n"
"      <arg direction=\"in\" type=\"s\"/>\n"
"    </method>\n"
"    <method name=\"deleteFile\">\n"
"      <arg direction=\"out\" type=\"b\"/>\n"
"      <arg direction=\"in\" type=\"s\"/>\n"
"      <arg direction=\"in\" type=\"s\"/>\n"
"    </method>\n"
"    <method name=\"saveFile\">\n"
"      <arg direction=\"out\" type=\"x\"/>\n"
"      <arg direction=\"in\" type=\"s\"/>\n"
"      <arg direction=\"in\" type=\"s\"/>\n"
"      <arg direction=\"in\" type=\"s\"/>\n"
"    </method>\n"
"    <method name=\"isConnected\">\n"
"      <arg direction=\"out\" type=\"b\"/>\n"
"    </method>\n"
"  </interface>\n"
        "")
public:
    RoothelperAdaptor(QObject *parent);
    virtual ~RoothelperAdaptor();

public: // PROPERTIES
public Q_SLOTS: // METHODS
    bool deleteFile(const QString &in0, const QString &in1);
    QStringList getFileList(const QString &in0);
    bool isConnected();
    QString readFile(const QString &in0, const QString &in1);
    qlonglong saveFile(const QString &in0, const QString &in1, const QString &in2);
    void startHelper();
Q_SIGNALS: // SIGNALS
};

#endif
