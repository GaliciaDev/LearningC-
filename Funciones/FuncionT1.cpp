//Uso de funciones []

/*Funciones void
  -No retornan valor
  
  //Delcaracion
  void nombre(argumentos){
  //Instruccion 
}

	//Llamada
	nombre();	
	
	//Protipo dela funcion
	void iteracion();
*/

#include <iostream>

using namespace std;

//Prototipo
void iteracion();

int main ()
{
	iteracion();
	return 0;
}

void iteracion(){
	for (int i=0; i<5; i++){
		cout << "Hola este es una funcion que saluda " << i << endl;
		
	}
}
