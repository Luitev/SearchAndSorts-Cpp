#include<iostream>
#define N 12
using namespace std;

int main(){
	int A[N]={1,3,5,7,9,11,13,15,17,19,21,23};
	int izq, der, medio,nrobuscado;
	izq=0;
	der=N-1;
	bool exists;
	
	//ESTE ES EL VALOR A BUSCAR BINARIAMENTE
	//======================================
	nrobuscado = 10;
	//======================================
	
	
	cout << "El arreglo es el siguiente: " << endl;
	for (int i = 0; i < N; i++)
		cout << A[i] << " ";
	cout << endl;
	cout << endl;
	
	
	while(izq<=der)
	{
		exists = false;
	   	medio= (izq+der)/2;	
		if(A[medio]==nrobuscado)
		{
				cout<<"Lo encontro!"<<endl;
				cout<<"El valor " << nrobuscado << " se halla en la posicion " << medio <<  "." << endl;
				exists = true;
				break;		
		}		
		if(A[medio]<nrobuscado)
			izq=medio+1;
		if(A[medio]>nrobuscado)
			der=medio-1;
	}
	
	if (exists == false)
		cout << "El valor " << nrobuscado << " no se encuentra en el arreglo." << endl;

}
	
