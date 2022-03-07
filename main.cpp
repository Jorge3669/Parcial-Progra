#include <iostream>
#include "biblioteca.hpp"

using namespace std;


int main(int argc, char** argv) {
	int n1, n2;
	cout<<"Suma de dos numeros"<<endl;
	cout<<"ingrese el primer numero"<<endl;
	cin>>n1;
	cout<<"ingrese el segundo numero"<<endl;
	cin>>n2;
	int resultados=sum(n1, n2);
	cout<<"Resultado suma"<< resultados<<endl;
	cout<<"Division de dos numeros"<<endl;
	cout<<"ingrese el primer numero"<<endl;
	cin>>n1;
	cout<<"ingrese el segundo numero"<<endl;
	cin>>n2;
	int resultadod=divis(n1, n2);
	cout<<"Resultado division"<< resultadod<<endl;
	cout<<"Factorial de un numero"<<endl;
	cout<<"ingrese el primer numero"<<endl;
	cin>>n1;
	int resultadof=factori(n1);
	cout<<"Resultado factorial"<< resultadof<<endl;
	
	system("pause");
	
}
