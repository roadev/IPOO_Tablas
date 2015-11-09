/* Autor: Hecho por Juan David Roa Valencia
* Fecha de creación: 23/09/14
* Versión: 1.0.1
*
* Nombre de la Clase: Tablas.cpp
* Responsabilidad:
* Colaboración: Jhonatan David Vanegas

*/

#include "Tablas.h"

Tablas::Tablas() {
  size = 0;
}

Tablas::~Tablas() {
}

char Tablas::calcularTablas(){
  cout<<"Tabla de multiplicación de Mme. Medina"<<endl;
  cout<<"X\t";

  for(int i=1; i<=size; i++){
    cout<<i<<"\t";
  }
  cout<<endl;

  for(int i=1; i<=size; i++){
    cout<<endl<<i<<"\t";

    for(int j=1; j<=size; j++){
      cout<<i*j<<"\t";

    }

    cout<<endl;
  }
}

char Tablas::calcularTablasParesImpares(){
  cout<<"X\t";

  for(int i=1; i<=size; i++){
    cout<<i<<"\t";
  }

  cout<<endl;

  for(int i=1; i<=size; i++){
    cout<<endl<<i<<"\t";

    for(int j=1; j<=size; j++){

      if(((i*j)%2) == 0){
        cout<<i*j<<"P"<<"\t";
      }
      else{
        cout<<i*j<<"I"<<"\t";
      }

    }

    cout<<endl;
  }
}

void Tablas::ingresarSizeTabla(int s){
  size = s;
}
