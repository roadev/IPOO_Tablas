/* Autor: Hecho por Juan David Roa Valencia
 * Fecha de creación: 23/09/14
 * Versión: 1.0
 * 
 * Nombre de la Clase: Tablas.h
 * Responsabilidad: 
 * Colaboración: Jhonatan David Vanegas

 */


#include <iostream>
#include <string>
using namespace std;
#ifndef TABLAS_H
#define	TABLAS_H

class Tablas {
public:
    Tablas();
    ~Tablas();
    char calcularTablas();
    char calcularTablasParesImpares();
    void ingresarSizeTabla(int s);
    
    
private:
    int size;
};

#endif	/* TABLAS_H */

