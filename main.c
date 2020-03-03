#include <stdio.h>
#include <stdlib.h>
#include "riverCross.h"
// #include "path/file name"

SIDE farmen1, fox1, chicken1, corn1;

int main(){
	
	printf("Juego en proceso xd \nWelcome to the open beta \n\n");
	
	SetGame(&farmen1, &fox1, &chicken1, &corn1); //Le da a las variable sus valores iniciales
		
	do{

		PrintStatus(farmen1, fox1, chicken1, corn1); //Show current positions
		Cross(OptionMenu(), &farmen1, &fox1, &chicken1, &corn1); 
		
	}while( !Lose(farmen1, fox1, chicken1, corn1) && !Win(farmen1, fox1, chicken1, corn1) ); //While you dont win or dont lose the game continue
	
	return 0;
	
}


/*cosas para añadir:

	- ciclar para que no queden las antiguas posiciones y opciones en la consola
	- considerar poner la accion PrintStatus en las condiciones de Cross para que no se muestre en caso de que el farmer no este en el mismo lado del objeto
	
	
	
*/	
