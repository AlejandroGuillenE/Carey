// Alejandro Guillen Echavarria ID 1068533 INTEC PSE febrero-abril 2019

#include <iostream>
#include <math.h>

using namespace std;
float tamano;
int ancho;

void Voltear(char POriginal[], int sizePalabra){
	char PInvertida[sizePalabra]; // se declara la palabra invertida
	for(int x=0; x<=sizePalabra; x++){
		PInvertida[x] = POriginal[sizePalabra-x-1]; // se van asignando las letras una a una en la posicion contraria
		cout << PInvertida[x];
	}
}

bool Validacion(float longitud){
	bool valido = 0;
	if ((longitud-floor(longitud)) == 0 ){
		if ((longitud > 0) && (longitud < 30)){
			valido = 1;
		} else {
			cout << "Ingrese un numero entero entre 1 y 30";
		}
	} else {
		cout << "Ingrese un numero entero";
	}
		
	
return valido;
}
int main(){
	
	cout << "Ingrese el tamano de la palabra" << endl;
	cin >> tamano; // se almacena el tamano de la palabra
	
	if (Validacion(tamano)){
		ancho = tamano;
		char Palabra[ancho]; // Se define la palabra y su tamaño
		cout << "Ingrese la palabra" << endl;
		cin >> Palabra; // se almacena la palabra
		Voltear(Palabra,ancho); // se envian los datos a la funcion
	}
	
	return 0;
}
