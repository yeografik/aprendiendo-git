#include <stdio.h>
#include "rivercross.h"
// #include "path/file name"

SIDE farmen1, fox1, chicken1, corn1;

int main(){
	
	printf("Juego en proceso xd \nWelcome to the open beta \n\n");
	
	SetGame(&farmen1, &fox1, &chicken1, &corn1); //Le da a las variable sus valores iniciales
	
	PrintStatus(farmen1, fox1, chicken1, corn1); printf("\n"); //Esta linea se esta usando como testeo unicamente
	
	
	do{
		Cross(OptionMenu(), &farmen1, &fox1, &chicken1, &corn1);
		PrintStatus(farmen1, fox1, chicken1, corn1);
		
	}while(1 == 1/*!Win(farmen1, fox1, chicken1, corn1) || !Lose(farmen1, fox1, chicken1, corn1)*/); //Checkea si el juego continua o no
	// 1 == 1 solo para testeo
	
	return 0;
	
}


/*cosas para a�adir:

	- ciclar para que no queden las antiguas posiciones y opciones en la consola
	- considerar poner la accion PrintStatus en las condiciones de Cross para que no se muestre en caso de que el farmer no este en el mismo lado del objeto
	
	
	
*/	
