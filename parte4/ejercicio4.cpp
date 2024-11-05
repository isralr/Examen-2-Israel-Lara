#include "ejercicio4.h"
#include <iostream>
#include <algorithm>

void precio() {
    double coste[3];
    std::cout << "Ingrese el precio de los productos: ";

    for (int i = 0; i < 3; i++) {
        std::cin >> coste[i];
    }
    //Ayuda por Copilot
    std::sort(coste, coste + 3, std::greater<double>());

    std::cout << "Precios ordenados de mayor a menor: ";
    for (int i = 0; i < 3; i++) {
        std::cout << coste[i] << " ";
    }
    std::cout << std::endl;
    //Acaba la ayuda por Copilot

    double total = coste[0] + coste[1];

    std::cout << "El total de la compra es: " << total << std::endl;
}