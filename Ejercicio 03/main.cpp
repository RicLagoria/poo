#include <QCoreApplication>
#include "ricnamespace.h"

int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);

    // Uso de MyClass dentro de MyNamespace
    ricnamespace::MyClass myObject;
    myObject.myFunction();

    // Uso de una función fuera de una clase en MyNamespace
    ricnamespace::myFunctionOutsideClass();

    return a.exec();
}
