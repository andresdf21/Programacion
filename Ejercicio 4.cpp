// Ejercicio 4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>

using namespace std;
 
int main()
{
	int n,suma = 0;
	cout<<" Ingrese el numero de elementos : ";
	cin>>n;
	for( int i=1;i<=n;i++)
	{
		suma += i;
	}
	cout<<" La suma es : "<<suma<<endl;
	getch();
	return 0;
}

