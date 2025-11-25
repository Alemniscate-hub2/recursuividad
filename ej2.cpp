#include <iostream>
using namespace std;
int main(){
int edades[3];
string nombres[3];
for (int i=0; i<3; i++){
	cout<<"Ingrese el nombre N"<<i+1<<" : ";
	cin>>nombres[i];
	cout<<"Ingrese su edad: ";
	cin>>edades[i];
}
for (int j=0; j<3;j++){
	cout<<j+1<<".- "<<nombres[j]<<" tiene "<<edades[j]<<" anos de edad"<<endl;
}
	return 0;
}
