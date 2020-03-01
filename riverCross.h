#ifndef RIVERCROSS_H
#define RIVERCROSS_H

typedef enum{
	NEAR, FAR
}SIDE;

void SetGame(SIDE* farmer, SIDE* fox, SIDE* chicken, SIDE* corn);

void PrintStatus(SIDE farmer, SIDE fox, SIDE chicken, SIDE corn);

void Cross(int option, SIDE farmer, SIDE fox, SIDE chicken, SIDE corn);

int Win(SIDE farmer, SIDE fox, SIDE chicken, SIDE corn);

int Lose(SIDE farmer, SIDE fox, SIDE chicken, SIDE corn);

#endif
