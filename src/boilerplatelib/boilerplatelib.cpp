#include "boilerplatelib.h"

LibClass::LibClass()
{

}

int LibClass::getRandomNumber()
{
    return 4;  //chosen from a random web comic
}


LibQO::LibQO(QObject *parent) :
    QObject(parent)
{

}
