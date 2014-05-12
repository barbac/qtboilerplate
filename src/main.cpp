#include <QCoreApplication>

#include <QVariant>

#include "boilerplatelib.h"

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

    LibQO obj(0);
    obj.setProperty("myProperty", 44);
    qDebug("var: %d", obj.property("myProperty").toInt());

    qDebug("running %s", __FILE__);
    qDebug("random number: %d", LibClass::getRandomNumber());

    return 0;
    //return app.exec();
}
