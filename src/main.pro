TEMPLATE = app
TARGET = boilerplate
#for console app
CONFIG -= app_bundle

LIBS += -Lboilerplatelib -lboilerplate
PRE_TARGETDEPS += boilerplatelib/libboilerplate.a

SOURCES += main.cpp
include(boilerplatelib/boilerplatelib.pri)

