#include <iostream>
#include <string>
using namespace std;
void ingresar(string nombres[], int edades[]){
for (int i=0; i<3; i++){
	cout<<"Ingrese el nombre N"<<i+1<<" : ";
	cin>>nombres[i];
	cout<<"Ingrese su edad: ";
	cin>>edades[i];
	}
}

void mostrar (string nombres[], int edades[]){
for (int j=0; j<3;j++){
	cout<<j+1<<".- "<<nombres[j]<<" tiene "<<edades[j]<<" anos de edad"<<endl;
	}
}

int main(){
int edades[3];
string nombres[3];
ingresar(nombres, edades);
mostrar(nombres, edades);

	return 0;
}
