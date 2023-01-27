#include<iostream>
#define N 6
using namespace std;

int main(){
	int A[N]={7,3,4,1,0,5};
	
	// X ES EL VALOR A BUSCAR LINEALMENTE
	//===================================
	int x=4;
	//===================================
	
	
	int j=0;
	bool exists;
	
	cout << "El arreglo es el siguiente: " << endl;
	// Muestra el array
	for(int i=0;i<N;i++)
		cout<<A[i]<<" ";
		
	cout << endl;
	cout << endl;
		
	// Busca el valor X en el array
	while(j<N)
	{
		exists = false;
		if(A[j]==x)
		{
			cout<<"\nLo encontro!"<<endl;
			cout<<"El valor " << x << " se halla en la posicion " << j << "." << endl;
			exists = true;
			break;
		}
		j++;
	}
	
	if (exists == false)
		cout << "El valor " << x << " no se encuentra en el arreglo" << endl;
	
}
