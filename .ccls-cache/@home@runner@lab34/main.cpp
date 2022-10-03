#include <iostream>
#include <stdlib.h>
#include "AN.hpp"
#include "ANF.hpp"
using namespace std;

int main(int argc, char** argv) {
  cout<<"INSTITUTO TECNOLOGICO DEL ESTADO DE CHIHUAHUA\n";
	cout<<"Laboratorio 3.- Herencia y polimorfismo\n";
	cout<<"Alumno: Igsel Ignacio Romo Zamarron\n";
	cout<<"Semestre: 7°\n";
	cout<<"Ingenieria Electronica\n";
	cout<<"Profesor: M.C. Alfredo Chacón Aldama\n";
	cout<<"Materia: Arquitectura de programación para hardware\n";
	cout<<"*****************************************************\n";
	cout<<"Programa que lee el nivel de voltaje (siendo posible unicamente entre el 0 y 3.3) de un canal ingresado (siendo posible unicamente entre el 1 y 32), en el cual te pregunta si quieres ingresar una frecuencia de muestreo (aceptando cualquier valor) o no por lo cual pide el ack (solo pudiendo poner 2, 4, 8, 16, 32, 64 y divide 8M entre el ack selecionado), tambien pide la selecion de resolucion (solo pudiendo unicamente 8, 10, 12).\n";
  cout<<"*****************************************************\n";	
	
  char eleccion;
  int canales, res, Fs, ack;
  cout<<"Dame cantidad de canales ADC a leer: ";
	cin>> canales;
  cout<<"¿Quiere ingresar la frecuencia de muestreo (s o n)?: ";
  cin>> eleccion;
  
  cout<<endl<<"** Introduce Datos **"<<endl;
  cout<<"Dame Resolucion (8, 10 o 12): ";
	cin>> res;
  if(res==8 || res==10 || res==12);
  else{
    cout<<"Dato incorrecto ";
    exit (1);
  }
  
  if(eleccion == 's' || eleccion == 'S'){
    AN AN[canales];
    cout<<"Dame Frecuencia de muestreo: ";
	  cin>> Fs;
    for (int i=0;i<canales;i++){
  	  cout<<"\nToma: "<<i+1<<endl;
      AN[i].res(res, Fs);
      AN[i].captura();
    }
    cout<<endl<<"** Imprimiendo Datos **"<<endl;
  	for (int i=0;i<canales;i++){
  		cout<<"\nToma: "<<i+1<<endl;
      AN[i].muestraDatos();
  	}
  }
  else if(eleccion == 'n' || eleccion == 'N'){
    ANF ANF[canales];
    cout<<"Dame Frecuencia ack (2, 4, 8, 16, 32, 64): ";
	  cin>> ack;
    for (int i=0;i<canales;i++){
  	  cout<<"\nToma: "<<i+1<<endl;
      ANF[i].setF_osc(ack, res);
      ANF[i].captura();
    }
    cout<<endl<<"** Imprimiendo Datos **"<<endl;
  	for (int i=0;i<canales;i++){
  		cout<<"\nToma: "<<i+1<<endl;
      ANF[i].muestraDatos();
  	}
  }
  else exit(0);
		
	system("pause");
	return 0;
}