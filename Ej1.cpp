#include <iostream>
using namespace std;
#include "Cola/Cola.h"

bool funcion(Cola<char> cola1, Cola<char> cola2){

    while (!cola1.esVacia() && !cola2.esVacia()) {
        char aux1 = cola1.desencolar();
        char aux2 = cola2.desencolar();

        if (aux1==aux2){

        } else {
            return false;
        }

    }
    return cola1.esVacia() && cola2.esVacia();

}
int main() {
Cola<char>cola1;
Cola<char>cola2;

    cout << "Ejercicio N° 1" << endl;

    cola1.encolar('f');
    cola1.encolar('d');
    cola1.encolar('h');

    cola2.encolar('f');
    cola2.encolar('d');
    cola2.encolar('h');
    cola2.encolar('g');
    if (funcion(cola1, cola2)){
        cout << "colas iguales";
    }
    else {
        cout << "distintas";
    }
    return 0;
}
