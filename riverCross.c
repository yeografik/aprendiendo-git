#include <stdio.h>
#include "riverCross.h"

void SetGame(SIDE* farmer, SIDE* fox, SIDE* chicken, SIDE* corn){
	//Setea con sus valores iniciales a las variables

	farmer = NEAR;
	fox = NEAR;
	chicken = NEAR;
	corn = NEAR;
	
}

void PrintStatus(SIDE farmer, SIDE fox, SIDE chicken, SIDE corn){
	//Toma como parametro la posicion actual de los elementos
	//para poder mostrarla al usuario, con el fin de que elegi una opcion luego.
	
	if(farmer == NEAR){
		printf("1-Farmer: near\n");
	}else{
		printf("1-Farmer: far\n");
	}
	
	if(fox == NEAR){
		printf("2-Fox: near\n");
	}else{
		printf("2-Fox: far\n");
	}
	
	if(chicken == NEAR){
		printf("3-Chicken: near\n");
	}else{
		printf("3-Chicken: far\n");
	}
	
	if(corn == NEAR){
		printf("4-Corn: near\n");
	}else{
		printf("4-Corn: far\n");
	}
	
}

void Cross(int option, SIDE* farmer, SIDE* fox, SIDE* chicken, SIDE* corn){
	
}

int Win(SIDE farmer, SIDE fox, SIDE chicken, SIDE corn){
	
	//En caso de que gane que devuelva 1!
	
}

int Lose(SIDE farmer, SIDE fox, SIDE chicken, SIDE corn){
	
	//En caso de que pierda que devuelva 1!
	
}
