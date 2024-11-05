#include "ejercicio2.h"
#include <iostream>

void dia() {
    int num;
    std::cout << "Ingresa un numero del 1 al 7 para ver que dia de la semana es: " << std::endl;
    std::cin >> num;

    switch (num) {
        case 1:
            std::cout << "Lunes" << std::endl;
        break;
        case 2:
            std::cout << "Martes" << std::endl;
        break;
        case 3:
            std::cout << "Miercoles" << std::endl;
        break;
        case 4:
            std::cout << "Jueves" << std::endl;
        break;
        case 5:
            std::cout << "Viernes" << std::endl;
        break;
        case 6:
            std::cout << "Sabado" << std::endl;
        break;
        case 7:
            std::cout << "Domingo" << std::endl;
        break;
    }
}