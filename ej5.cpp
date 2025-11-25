#include <iostream>
#include <string>
using namespace std;
int main(){
	int fila, col;
	cout<<"Ingrese el numero de filas: ";
	cin>>fila;
	cout<<"Ingrese el numeros de columnas: ";
	cin>>col;
	string matriz [fila][col];
	for (int i=0; i<fila; i++){
		for (int j=0; j<col; j++){
			cout<<"Ingrese se la matriz ["<<i+1<<"]["<<j+1<<"]:";
			cin>>matriz[i][j];
			}
		}
	cout<<endl<<endl;
	for (int i=0;i<fila;i++){
		for (int j=0; j<col;j++){
			cout<<matriz[i][j]<<" | ";
		}
	cout<<endl; 
	}
	cout<<endl<<matriz[1][1]<<"    Posicion: "<<"[2][2]";
	}
