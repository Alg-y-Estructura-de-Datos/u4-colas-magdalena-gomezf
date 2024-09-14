#include <iostream>
//Implementar una función que suprima de la cola todos los elementos mayores que un número
//“n” dado como límite. Al final se debe imprimir la cola depurada sin perder el orden que había
//desde la cola original.
using namespace std;
#include "Cola/Cola.h"

void funcionBuscar(Cola<int>& cola1, int n) {
    Cola<int> Colaaux;

    while (!cola1.esVacia()) {
        int aux = cola1.desencolar();
        if (aux < n) {
            Colaaux.encolar(aux);
        }
    }
    while (!Colaaux.esVacia()) {
        int aux = Colaaux.desencolar();
        cola1.encolar(aux);
        cout << aux << " - ";
    }
}
int main() {

    Cola<int> cola1;
    cout << "Ejercicio N° 2" << endl;

    cola1.encolar(2);
    cola1.encolar(3);
    cola1.encolar(5);
    cola1.encolar(6);
    cola1.encolar(5);

    funcionBuscar(cola1, 5);
    return 0;
}

