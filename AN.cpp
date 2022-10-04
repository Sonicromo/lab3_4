#include<iostream>
#include "AN.hpp"
#define OCHO 255
#define DIEZ 1023
#define DOCE 4095
using namespace std;

AN::AN(){
	resolucion = 0;
	Fs = 0;
	canal = 0;
	lectura = 0;
  lect = 0;
}
/************************************************
    METODOS
************************************************/
void AN::muestraDatos(){
	cout<<"Canal: "<<canal<<endl;
	cout<<"Resolucion: "<<resolucion<<endl;
	cout<<"Fs: "<<Fs<<endl;
	cout<<"Lectura: "<<lectura<<endl;
	cout<<"Lectura digital: "<<lect<<endl;
}
/************************************************
    SETTER
************************************************/
void AN::captura(){
	cout<<"Dame canal a leer (1 a 32): ";
  cin>> canal;
  if(canal>0 && canal<33);
  else{
    cout<<"Dato incorrecto ";
    exit (1);
  }
	cout<<"Dame la lectura: ";
	cin>> lectura;
  if(lectura>=0 && lectura<3.4);
  else{
    cout<<"Dato incorrecto ";
    exit (1);
  }
  if(resolucion == 8){
    lect = (lectura/3.3)*OCHO;
  }
  if(resolucion == 10){
    lect = (lectura/3.3)*DIEZ;
  }
  if(resolucion == 12){
    lect = (lectura/3.3)*DOCE;
  }
}
void AN::res(int res, int Fr){
  resolucion=res;
  Fs=Fr;
}