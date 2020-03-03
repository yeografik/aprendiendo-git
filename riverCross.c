#include <stdio.h>
#include <stdlib.h>
#include "riverCross.h"

void SetGame(SIDE* farmer, SIDE* fox, SIDE* chicken, SIDE* corn){
	//Setea con sus valores iniciales a las variables
	//Set the variables initials values

	*farmer = NEAR;
	*fox = NEAR;
	*chicken = NEAR;
	*corn = NEAR;
	
}

void PrintStatus(SIDE farmer, SIDE fox, SIDE chicken, SIDE corn){
	//Toma como parametro la posicion actual de los elementos
	//para poder mostrarla al usuario, con el fin de que elegi una opcion luego.
	
	printf("Current positions:\n\n");

	if(fox == NEAR){
		printf("1-Fox: near\n");
	}else{
		printf("1-Fox: far\n");
	}
	
	if(chicken == NEAR){
		printf("2-Chicken: near\n");
	}else{
		printf("2-Chicken: far\n");
	}
	
	if(corn == NEAR){
		printf("3-Corn: near\n");
	}else{
		printf("3-Corn: far\n");
	}

	if(farmer == NEAR){
		printf("4-Farmer: near\n");
	}else{
		printf("4-Farmer: far\n");
	}

	printf("\n");
	
}

int OptionMenu(){
	//Guarda la opcion elegida por el usuario
	//Stores the selected option by the user
	
	printf("Select an object to travel with the farmer or travel alone \n\n");
	printf("1-Fox \n2-Chicken \n3-Corn \n4-Travel alone\n\nOption:");
	
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

	system("clear");
	
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
		printf("farmer isn't in the same side!\n\n");
	
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
	//This fuction checks if you won

	if ((farmer == FAR) && (farmer == fox) && (fox == chicken) && (chicken == corn)){ //Basicly, all the objects acroos the river
		printf("You win!\n");
		return 1;
	}else{
		return 0;
	}
	
}

int Lose(SIDE farmer, SIDE fox, SIDE chicken, SIDE corn){
	
	if ((fox == chicken) && (farmer != fox)){
		printf("The chicken was eaten by the fox! You lose...\n");
		return 1;
	}else if ((chicken == corn) && (farmer != chicken)){
		printf("The corn was eaten by the chicken! You lose...\n");
		return 1;
	}else{
		return 0;
	}
	
}

