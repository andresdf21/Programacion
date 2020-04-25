// Ejercicio 6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

 int main()
 {
	 int suma = 0, elevacion = 0,n;

 cout<<" Ingrese el numero de elementos a sumar : ";
 cin>>n;

 for(int i=1;i<=n;i++)
 {
	 elevacion = pow(2,i);
	 suma += elevacion;
 }
  cout<<" La suma total es : "<<suma<<endl;
  getch();

	return 0;
}

