#include <iostream>
using namespace std;
#include "Cola/Cola.h"
int funcionBuscar(Cola<int>& cola1, int n){
    Cola<int> colaaux;
    int suma=0;
    while (!cola1.esVacia()){
        int x= cola1.desencolar();
        if (x==n){
            return suma;
        }
        else{
            suma=suma+x;
        }
    }
    return suma;

}
int main () {

    Cola<int> cola1;
    cout << "Ejercicio N 4" << endl;

    cola1.encolar(3);
    cola1.encolar(5);
    cola1.encolar(2);
    cola1.encolar(8);
    cola1.encolar(7);

   int sumafinal= funcionBuscar(cola1, 1);
   cout << "la suma para n es igual a: " << sumafinal;
    return 0;
}
