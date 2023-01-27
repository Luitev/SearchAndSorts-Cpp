#include <iostream>
#define N 6

using namespace std;

//funcion de ordenamiento con Quicksort
void quicksort( int a[], int primero, int ultimo)
{
	int c, i , j, aux;
	i = primero;
	j = ultimo;
	c = (primero + ultimo)/ 2;
	int pivote = a[c];
	
	do
	{
		while (a[i] < pivote)
			i++;
		
		while (a[j] > pivote)
			j--;
			
		if (i<= j)
		{
			aux = a[i];
			a[i] = a[j];
			i++;
			j--;
		}
	} 
	while (i <= j);
	
	if (primero < j)
		quicksort(a, primero, j);
	
	if (i < ultimo)
		quicksort(a, i, ultimo);
}



//Función principal o de ejecución
int main()
{
	int A[N] = { 7, 3, 4, 1, 0, 5};
	
	for(int i = 0; i < N; i++)
		cout << A[i] << " ";
	cout << endl;
	
	quicksort(A, 0, N - 1);
	
	for(int i = 0; i < N; i++)
		cout << A[i] << " ";
	cout << endl;
	
}
