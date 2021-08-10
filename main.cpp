#include <iostream>

using namespace std;

int factorial(int numero){
	if(numero <= 1){
		return 1;
	} else {
		return numero * factorial(numero - 1);
	}
} 

int main(int argc, char** argv) {
	int n1;
	cout<<"Coloque un numero: ";
	cin>>n1;
	cout<<" Factorial: "<<factorial(n1)<<endl;
	return 0;
}
