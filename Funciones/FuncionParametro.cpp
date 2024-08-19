#include <iostream>
#include <string.h>

using namespace std;

void carrito(string nombre);

int main (){
	
	string producto;
	
	cout << "Nombre del producto: " << endl;
	cin >>producto; 
	
	carrito(producto);
	
	
	
	
	
	return 0;
}

void carrito(string nombre){
	cout << "Pedido\n\n" << "Nombre del producto: " << nombre << endl;
}
