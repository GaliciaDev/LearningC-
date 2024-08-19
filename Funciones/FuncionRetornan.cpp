//Funcion que retorna valor

#include <iostream>

using namespace std;

//Prototipo

int sumar(int x, int y);

int main (){
	int num1,num2;
	
	cout << "Dame n1: " << endl;
	cin >> num1;
	cout << "Dame n2: " << endl;
	cin >> num2;
	
	int res = sumar(num1, num2);
	
	cout << "El resultado es: " << res;
	
	
	
	return 0;
}

int sumar(int x, int y){
	int suma = x + y;
	
	return suma;
}
