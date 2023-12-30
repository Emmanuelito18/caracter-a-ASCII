#include <iostream>

using namespace std;

int main(){
	char letra;
	int entero;
	cout<<"Ingrese un caracter"<<endl;
	cin>>letra;
	entero=int(letra);
	cout<<"El valor ASCII de "<<letra<<" es "<<entero<<endl;
	system("pause");
	return 0;
}
