// Ejercicio 7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
 using namespace std;

 int main()
 {
	 int n,x=0,y=1,z=1;
	 cout<<" Ingrese el numero de elementos : ";
	 cin>>n;
	 cout<<"1";
	 for( int i=1;i<n;i++)
	 {
		 z = x + y;
		 cout<<z<<" ";
		 x = y;
	     y = z;
	 }
	 cout<<"\n";
	 getch();

	return 0;
}