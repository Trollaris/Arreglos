#include <cstdlib>
#include <iostream>
#include "Arreglo.h"
#include "ArregloInt.h"
#include <conio.h>

int main() {
    std::cout << "size of a float: " << sizeof(float) << "\n";
    std::cout << "size of a int: " << sizeof(int) << "\n";
    std::cout << "size of a char: " << sizeof(char) << "\n";
    std::cout << "size of a bool: " << sizeof(bool) << "\n";
    std::cout << "size of a string: " << sizeof(std::string) << "\n";
    std::cout << "size of Arreglo: " << sizeof(Arreglo) << "\n";
    // Arreglo estatico

    std::cout << "Ejemplo de Arreglos\n";

    //arreglo estático 

    int edades[] = { 18, 22, 32, 45, 61, 56, 98 };
    //se necesita una variable que guarde el tamano o longitud de el arreglo edades
    size_t edadesCount = 7;

    std::cout << "edades : " << edades << "\n";

    //iterar e imprimir los elementos del arreglo
    for (int i = 0; i <= 16; i++) {
        std::cout <<
            "0x" << (edades + i) <<
            " = " << edades[i] << "\n";
    }

    *(edades + 3) = 555;

    //volver a imprimir edades
    for (int i = 0; i < edadesCount; i++) {
        std::cout << edades[i] << "\n";
    }

    //ejemplo con clase Arreglo
    size_t arrsize = 20;

    Arreglo* myArreglo = new Arreglo(arrsize);
    std::cout << "arreglo size " << myArreglo->count() << "\n";

    myArreglo->setval(0, 1.0);
    myArreglo->setval(3, 0.999);
    myArreglo->setval(6, 5.184);
    myArreglo->setval(10, 3.1416);
    myArreglo->setval(12, 2.7182);
    myArreglo->setval(15, 1.618);
    myArreglo->setval(25, 0.9999);


    //imprimir contenido del arreglo
    myArreglo->print();

    puts("cambiando tamaño a 10");
    //redimensionar a 10
    myArreglo->SetSize(10);
    myArreglo->print();

    ArregloInt* myArregloInt = new ArregloInt(arrsize);
    std::cout << "arreglo size " << myArreglo->count() << "\n";

    myArregloInt->setvalInt(0, 1.0);
    myArregloInt->setvalInt(3, 0.999);
    myArregloInt->setvalInt(6, 5.184);
    myArregloInt->setvalInt(10, 3.1416);
    myArregloInt->setvalInt(12, 2.7182);
    myArregloInt->setvalInt(15, 1.618);
    myArregloInt->setvalInt(25, 0.9999);

    myArregloInt->printInt();

    puts("cambiando tamaño a 1");

    myArregloInt->SetSizeInt(1);
    myArregloInt->printInt();

    //system("pause");

    return 0;
}