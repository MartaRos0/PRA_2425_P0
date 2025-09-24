#include <iostream>
#include "BrazoRobotico.h"

using namespace std;

int main(){
	BrazoRobotico brazo(1 ,1 ,1, false);
	brazo.mover(3,4,1);
	brazo.coger();

	cout << "Posición actual: (" << brazo.getX() << ", " << brazo.getY() << ", " << brazo.getZ() << ")" << endl;
	
	
	cout << "¿Está sujetando? " << (brazo.getSujetando() ? "Sí" : "No") << endl;

	return 0;
}
