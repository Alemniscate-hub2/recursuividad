#include <iostream>
using namespace std;

void opendoll (int num){
	if (num<=1){
		cout<<"DOLL 1"<<endl<<"(its impossible open this doll, its the smallest)";
		return;
	}
	cout<<"OPENING THE DOLL "<<num<<endl;
	return opendoll(num-1);
}
int main() {
	opendoll(5);
	return 0;
	}
