#pragma once

#include <QObject>

class LibClass
{
public:
    LibClass();
    static int getRandomNumber();
};

class LibQO : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int myProperty NOTIFY myPropertyChanged MEMBER m_pro)

    int m_pro = 2;

signals:
    void myPropertyChanged();
public:
    explicit LibQO(QObject *parent);
};
