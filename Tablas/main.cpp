/* Autor: Hecho por Juan David Roa Valencia
 * Fecha de creación: 23/09/14
 * Versión: 1.0
 * 
 * Nombre de la Clase: main.cpp
 * Responsabilidad: 
 * Colaboración: Jhonatan David Vanegas

 */

#include "Tablas.h"

int main() {
    
    Tablas tabla;
    int size;
    
    cout<<"Ingrese el tamaño de la tabla de multiplicar deseada: ";
    cin >> size;
    tabla.ingresarSizeTabla(size);
    tabla.calcularTablas();
    cout<<endl<<endl;
    tabla.calcularTablasParesImpares();
    
}

