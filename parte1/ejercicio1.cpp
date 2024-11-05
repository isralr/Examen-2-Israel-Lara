#include <iostream>
#include "ejercicio1.h"


void identificar() {
    int num;
    std::cout << "Ingrese un numero entero: ";
    std::cin >> num;

    if(num == 0) {
        std::cout << "El numero " << num << " es cero" << std::endl;
    }else if(num > 0) {
        std::cout << "El numero " << num << " es positivo" << std::endl;
    }else {
        std::cout << "El numero " << num << " es negativo" << std::endl;
    }
}