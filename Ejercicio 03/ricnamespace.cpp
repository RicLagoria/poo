#include "ricnamespace.h"
#include <iostream>

namespace ricnamespace {
    void MyClass::myFunction() {
        std::cout << "Dentro de MyNamespace::MyClass::myFunction()" << std::endl;
    }

    void myFunctionOutsideClass() {
        std::cout << "Dentro de MyNamespace::myFunctionOutsideClass()" << std::endl;
    }
}
