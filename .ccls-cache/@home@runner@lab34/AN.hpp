#pragma once
#include<iostream>

class AN{
	public:				//Encapsulamiento (como caja negra)
		short int resolucion;				//DAtos o caracteristicas Abstraidas
		short int canal;
		float lectura;  
    float lect;
    int Fs;
		AN();				
		virtual void muestraDatos();
		// 				Getters & Setters	 Metodos constructores y modificadores
		void captura();	
    void res(int, int);
};