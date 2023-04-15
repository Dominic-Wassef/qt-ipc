/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -a calculatoradaptor slavecalculator.xml
 *
 * qdbusxml2cpp is Copyright (C) 2019 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "calculatoradaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class CalculatorInterfaceAdaptor
 */

CalculatorInterfaceAdaptor::CalculatorInterfaceAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

CalculatorInterfaceAdaptor::~CalculatorInterfaceAdaptor()
{
    // destructor
}

double CalculatorInterfaceAdaptor::divide(double divident, double divisor)
{
    // handle method call com.blikoon.CalculatorInterface.divide
    double out0;
    QMetaObject::invokeMethod(parent(), "divide", Q_RETURN_ARG(double, out0), Q_ARG(double, divident), Q_ARG(double, divisor));
    return out0;
}

double CalculatorInterfaceAdaptor::multiply(double factor1, double factor2)
{
    // handle method call com.blikoon.CalculatorInterface.multiply
    double out0;
    QMetaObject::invokeMethod(parent(), "multiply", Q_RETURN_ARG(double, out0), Q_ARG(double, factor1), Q_ARG(double, factor2));
    return out0;
}
