#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "administration.h"


int addAnimal(const ANIMAL* animalPtr, ANIMAL* animalArray, int position)
{
	// to be implemented
	animalArray[position] = *animalPtr;
	return 0;
}

int removeAnimal(const char* name, ANIMAL* animalArray, int length)
{
	// to be implemented
	
	int i = 0, j;
	
	int number_removed_animal = 0; 
	
		while(i < length){
			
		if (strcmp(name, animalArray.name[i])=0){
		
			numbre_removed_animal++;
			
			for ( i=j; j<length ; j++){
			
				animalArray.name[i]= animalArray.name[i+1];
		
			}
		}
		
		i++;
	}
		
	return numbre_removed_animal;
}

int cmpAge (const void * a, const void * b)
{
	// to be implemented
	//here you need to type cast the a and b for the retur value
	
	
	return (*(int*)a - *(int*)b);
}
int cmpName (const void * a, const void * b)
{
	// to be implemented
	return ( *(char*)a - *(char*)b);
}

int sortAnimalsByAge(ANIMAL* animalArray, int animalArrayLength)
 {	
	qsort(animalArray, animalArrayLength, sizeof(ANIMAL), cmpAge);
	return 0;
 }
 
int sortAnimalsByName(ANIMAL* animalArray, int animalArrayLength)
 {	
	qsort(animalArray, animalArrayLength, sizeof(ANIMAL), cmpName);
	return 0;
 }


int findAnimalByName(const char* name, const ANIMAL* animalArray, int animalArrayLength, ANIMAL* animalPtr)
 {
	// to be implemented
	int i = 0;
	
	while (i < animalArrayLength){
		if ( strcmp(name, animalArray.name[i])== 0){
			
			 //*animalPtr = *name; I am not sure if this works or not and what is the differenece between this one and the next one
 			
 			*animalPtr = animalArray.name[i];
 			
			return 1 ;
			}
		}
	return 0;
 }
