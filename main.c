#include <stdio.h>
#include "riverCross.h"

SIDE farmen1, fox1, chicken1, corn1;

int main(){
	
	printf("Juego en proceso xd");
	
	SetGame(&farmen1, &fox1, &chicken1, &corn1); //Le da a las variable sus valores iniciales
	
	do{
		
	}while(!Win(farmen1, fox1, chicken1, corn1) || !Lose(farmen1, fox1, chicken1, corn1)); //Checkea si el juego continua o no
	
	
	return 0;
	
} 
