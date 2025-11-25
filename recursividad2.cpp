#include <iostream>
using namespace std;
int numfi[2];

int tam;
void fibonacci(int num) {
    if (num > tam) {
        cout << endl << "TAREA FINALIZADA";
        return;
    }
    if (num == 1) {
        numfi[0] = 0;                
        numfi[1] = 1;                 
        cout << numfi[0] << " ";
        cout << numfi[1] << " ";
    } else {
        int suma = numfi[0] + numfi[1];
        cout << suma << " ";
        numfi[0] = numfi[1];
        numfi[1] = suma;
    }

    fibonacci(num + 1);
}

int main() {
	cout<<"cuantos numeros desea: ";
    cin>>tam;
	fibonacci(1);
    
    return 0;
}
