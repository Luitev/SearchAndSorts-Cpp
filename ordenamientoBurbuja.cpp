#include<iostream>
#define N 6
using namespace std;

void ordenaBurbuja (int A[])
{
	int aux = 0;
	
	for(int i=0;i<N;i++)
		for(int j=0;j<=N-2-i;j++)
			if(A[j]>A[j+1])
			{
				aux=A[j];
				A[j]=A[j+1];
				A[j+1]=aux;
			}
}


int main(){
	int A[N]={7,3,4,1,0,5};
	
	cout << "El array original es el siguiente: " << endl;
	for(int i=0;i<N;i++)
		cout<<A[i]<<" ";
	cout<<endl;
	
	ordenaBurbuja (A);
	
	cout << endl;
	cout << "El array ordenado es el siguiente" << endl;
	
	for(int i=0;i<N;i++)
		cout<<A[i]<<" ";
}
