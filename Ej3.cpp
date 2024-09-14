#include <iostream>
using namespace std;
//Crear una función que reciba una cola por referencia y un número. Dicha función debe: Eliminar
//todas las ocurrencias de dicho número, menos la primera. Si dicho número no se repite, deja la
//cola como esta. Si dicho número no está en la cola, debe anunciar un mensaje de error. Imprimir
//la cola al final para verificar si hubo o no modificaciones.
#include "Cola/Cola.h"
void funcionBuscar(Cola<int>& cola1, int n){
    bool bandera= false;
    Cola<int> colaaux;

    while (!cola1.esVacia()){
        int x = cola1.desencolar();
        if (x==n) {
            if (!bandera) {
                colaaux.encolar(x);
                bandera = true;
            }
        } else{
            colaaux.encolar(x);
        }
    }
    while (!colaaux.esVacia()) {
        int aux = colaaux.desencolar();
        cola1.encolar(aux);
        cout << aux << " -" ;
    }
}
int main () {

    Cola<int> cola1;
    cout << "Ejercicio N° 3" << endl;

    cola1.encolar(2);
    cola1.encolar(3);
    cola1.encolar(2);
    cola1.encolar(3);
    cola1.encolar(2);

    funcionBuscar(cola1, 2);
    return 0;
}
