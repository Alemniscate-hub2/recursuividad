#include <iostream>
using namespace std;
int tama;
int posicion;
void tam(){
	cout<<"Ingrese el tamaño del arreglo :";
	cin>>tama;
}

void agg(int arr[]){
	for (int i=0; i< tama;i++){
		cout<<"Ingrese el dato N"<<i+1<<" : ",
		cin>>arr[i];
	
	}
}
void buscar(int arr[]){
	cout<<"Ingrese la posicion a buscar: ";
	cin>>posicion;
	cout<<"Dato en la posicion "<<posicion<<" = "<<arr[posicion-1];
	
}
int main(){
	tam();
	int arr[tama-1];
	agg(arr);
	buscar(arr);
	return 0;
}
