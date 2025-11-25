#include <iostream>
using namespace std;
int main(){
	int tam;
	cout<<"Cuantos numeros desea ingresar :";
	cin>>tam;
	int arr[tam-1];
	for (int i=0; i<tam;i++){
		cout<<"Ingrese el dato N"<<i+1<<" : ";
		cin>>arr[i];
	}
	int posicion;
	cout<<"Ingrese la posicion a buscar: ";
	cin>>posicion;
	cout<<"Dato en la posicion "<<posicion<<" = "<<arr[posicion-1];
	return 0;
}
