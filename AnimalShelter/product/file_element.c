#include <stdio.h>
#include "file_element.h"

int readAnimals(const char* filename, ANIMAL* animalPtr, int nrAnimals)
 {
	//to be implemented		
	FILE* fp;
	fp = fopen(filename,"r");
	int result = fread(animalPtr,sizeof(ANIMAL),nrAnimal,fp);
	fclose(fp);
	if (result == nrAnimal){
		
		return result; 
		}else { return -1;}
	 
 }

int writeAnimals(const char* filename, const ANIMAL* animalPtr, int nrAnimals)
{
    //to be implemented	
    
    FILE* fp;
    fp = fopen(filename, "w");
     if ( fp == NULL ){
		return -1;
		}
    int result = fwrite(animalPtr, sizeof(ANIMAL), nrAnimal, fp);
	fclose(fp);
	 return 0;
 }
int getNrAnimalsInFile(const char* filename)
{
	//to be implemented	
	
	FILE* fp;
	
	fp = fopen(filename,"r");
	
	if (fp == NULL ){
		return -1;
		}
		
	ANIMAL STRUCT;
	int count = 0;
	int read = 1;	
	
	while (read != 0){
		
		read = fread (&STRUCT, sizeof(ANIMAL),1,fp);
		if (read != 0){
			
			count++ ;
			
			}
	}
	
	fclose (fp);
     return count;
	
 }

int readAnimalFromFile(const char* filename, int filePosition, ANIMAL* animalPtr)
{
	//to be implemented	
	
	// I can getNr of animal here if there was no animal in the file 
	
	FILE* fp;
	fp = fopen (filename, "r");
	
	if (fp == NULL){
		
		printf ("error occured ");
		return -1;
		
		}
		int i;
		for (i=0, i<filePosition, i++){
	int readedAnimal = fread (animalPtr, sizeof(ANIMAL),1,fp);
		}
		
		fclose(fp);
		
	 return 0;
 }

int writeAnimalToFile(const char* filename, int filePosition, const ANIMAL* animalPtr)
{
	//to be implemented	
	int i;
	FILE* fp;
	/* we open a file in r+ mode to update the file without truncating the lenght to zero while the file exist*/
	
	fp = fopen (filename, "r+")
	
	if (fp == NULL ){
		fopen (animalfile, "w"); // it means the filename does not exist so we create a new file with the length of zero
		
		}
		for (i=0,i<filePosition, i++){
			
		fread(animalPtr, sizeof(ANIMAL), 1 ,fp);
		}
		fclose(fp);
	 return 1;
 }
 
int renameAnimalInFile(const char* filename, int filePosition, const char* animalSurname)
{
	//to be implemented	
	
	FILE* fp;
	fp = fopen (filename, "r+");
	if ( fp == NULL){
		 
		 return -1;
		} 
		for(i=0, i<filePosition, i++){
		//How can I add a tab after the animalSurname with the previous name.
		fwrite(animalSurname, sizeof(ANIMAL), 1, fp)
		//fwrite("\t",sizeof(ANIMAL),1,fp)
		}
		fclose(fp);
	 return 1;
 }
