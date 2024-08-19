//Retorno de datos CPP

#include <iostream>

using namespace std;

//Multiplicar N elementos
int product(int prod1,int prod2);

int main (){
	
	int n1,n2,res;
	
	cout << "Factor 1: " << endl;
	cin >> n1;
	
	cout << "Factor 2: " << endl;
	cin >> n2;
	
	res = product(n1,n2);
	
	cout << "Resultado: " << res;
	
	
	return 0;
}

int product(int prod1,int prod2){
	
	int factores = (prod1*prod2);
	
	return factores;
}

