// Ejemplo_clases.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "cAnimal.h"
using namespace std;

int main()
{
    string hola = "hola";
    cout << "Hello World!" + hola << endl;
    cin >> hola;
    cout << hola;
    cAnimal* perro = new cAnimal("perro", 2, 'M', 30, false);
    delete perro;
}

