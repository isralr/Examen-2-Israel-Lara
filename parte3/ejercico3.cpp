#include "ejercico3.h"
#include <iostream>

void notas() {
    int numNotas = 8;
    int notas[numNotas];
    int suma = 0;
    int promedio = 0;

    std::cout << "Ingrese notas obtenidas del 1-10 de los proyectos: ";
    for (int i = 0; i < numNotas; i++) {
        std::cin >> notas[i];
        suma += notas[i];
    }
    promedio = suma / numNotas;
    std::cout << "El promedio de las notas es: " << promedio << std::endl;

}