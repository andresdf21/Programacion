// Ejercicio1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
	int numero;
	do
{
	cout<<" ingrese un numero : ";
	cin>>numero;
}
    while ((numero<1) || (numero>10));
    for(int i=1;i<=20;i++)
	{
		cout<<numero<<" * "<<i<<" = "<<numero*i<<endl;
	}
	getch();
	return 0;
}

