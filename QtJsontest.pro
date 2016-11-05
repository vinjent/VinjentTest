QT += core
QT -= gui

TARGET = QtJsontest
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    person.cpp \
    personjsonserializer.cpp \
    personcontainer.cpp

HEADERS += \
    jsonserializable.h \
    person.h \
    personjsonserializer.h \
    personcontainer.h

