#include <stdio.h>
#include "rivercross.h"

void SetGame(SIDE* farmer, SIDE* fox, SIDE* chicken, SIDE* corn){
	//Setea con sus valores iniciales a las variables

	*farmer = NEAR;
	*fox = NEAR;
	*chicken = NEAR;
	*corn = NEAR;
	
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

int OptionMenu(){
	//Guarda la opcion elegida por el usuario
	//Stores the selected option by the user
	
	printf("Select an object to travel with the farmer or travel alone \n");
	printf("1-Fox \n2-Chicken \n3-Corn \n4-Travel alone \n");
	
	int op;
	scanf("%d", &op);
		
	while (op < 1 || op > 4){
		printf("Invalid option please retry \n");
		scanf("%d", &op);
	}
		
	return op;
}

void Cross(int option, SIDE* farmer, SIDE* fox, SIDE* chicken, SIDE* corn){
	//Segun la opcion cambia de posicion al granjero y al objeto
	//si estos estan en el mismo lado

	//Changes farmer or farmer and object's position based on the selected
	//option if they are on the same side
	
	if(option == 1 && *farmer == *fox){
		ChangePos(farmer, fox);
	
	}else if(option == 2 && *farmer == *chicken){
		ChangePos(farmer, chicken);
	
	}else if(option == 3 && *farmer == *corn){
		ChangePos(farmer, corn);
	
	}else if(option == 4){
		SIDE empty;				//empty var used when the farmer travels alone
		ChangePos(farmer, &empty);
	
	}else{
		printf("farmer isn't in the same side \n");
	
	}

}

void ChangePos(SIDE* farmer, SIDE* object){
	//Cambia la posicion del farmer y el objeto

	//Changes farmer and object's position
	
	if(*farmer == NEAR){
		*farmer = FAR;
		*object = FAR;
	}else{
		*farmer = NEAR;
		*object = NEAR;
	}

}

int Win(SIDE farmer, SIDE fox, SIDE chicken, SIDE corn){
	
	//En caso de que gane que devuelva 1!
	
}

int Lose(SIDE farmer, SIDE fox, SIDE chicken, SIDE corn){
	
	//En caso de que pierda que devuelva 1!
	
}

