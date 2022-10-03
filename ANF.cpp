#include<iostream>
#include "ANF.hpp"
#define f_osc 8000000
using namespace std;

ANF::ANF(){
	resolucion = 0;
	Fs = 0;
	canal = 0;
	lectura = 0;
}
void ANF::captura(){
	AN :: captura();
}
void ANF::muestraDatos(){
	AN :: muestraDatos();
}
void ANF::setF_osc(int a, int res){
  ack = a;
  resolucion = res;
  Fs = f_osc/ack;
}