// Ejercicio 5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>

using namespace std;
 int main()
 {
	 int num, fact= 1;
	 cout<<" Ingrese un numero : ";
	 cin>>num;
	 for(int i=1;i<=num;i++)
	 {
		 fact = fact*i;
 }
     cout<<" El factorial del numero es : "<<fact<<endl;
    getch();
	return 0;
}

