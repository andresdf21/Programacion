// Ejercicio 8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <time.h>

using namespace std;
 
int main()
{
	int numero, dato, contador = 0;
	srand(time(NULL));
	dato = 1 + rand()%100;
	do
	{
		cout<< " Ingrese un numero : ";
		cin>>numero;
		if (numero>dato)
		{
		cout<<" Ingrese un numero menor : ";
		}
		if (numero<dato)
	{
         cout<<" Ingrese un numero mayor : ";
		}
		contador++;
	}

	while(numero != dato);
		cout<<" Adivinaste el numero : ";
	    cout<<" Numero de intentos : "<<contador<<endl;
		getch();

	return 0;
}

