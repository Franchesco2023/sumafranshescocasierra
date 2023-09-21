//programa: sumaNCasierraFranshesco.cpp
//autor: Franshesco Casierra
//fecha:2023-09-15
//Descripcion: suma varios nemeros
#include<iostream>
using namespace std;
int main()
{
	int i=0,l;
	float x,s=0;
	cout<<"ingrese cantidad de numeros;";
	cin>>l;
	do{
		cout<<"ingrese x: ";cin>>x;
		i=i+1;
		s=s+x;
	}while(i<l);
	cout<<"la suma es :"<<s<<endl;
}
