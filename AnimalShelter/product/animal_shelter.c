/*
 * animal_shelter.c
 *
 *  Created on: August 31, 2016
 *      Author: Freddy Hurkmans
 * revised: october 2017 Ella vd Sanden
 */

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>


#include "administration.h"
#include "file_element.h"
#include "animal.h"


static const char* SpeciesNames[] = {"Cat", "Dog", "Guinea pig", "Parrot"};

void printAnimals(const ANIMAL* animals, int nrAnimals);
//the first <nrAnimals> from the array animals are printed


void addTestData(ANIMAL* animals, int* nrAnimals);
// the array animals is filled with a number of animals; *nrAnimals contains this number



int main (void)
{
    const int MaxNrAnimals = 20;
    ANIMAL animals[MaxNrAnimals];
    int nrAnimals = 0;
    addTestData(animals, &nrAnimals);

    printf ("PRC assignment 'Animal Shelter' (version oct 2017)\n");
          
    int choice = -1;
    while (choice != 0)
    {
        printf ("\n\nMENU\n====\n\n");
        printf ("1: Show Animals \n");
        printf ("2: Add Animal \n");
        printf ("3: Remove Animal \n");
        printf ("4: Sort Animal by name \n");
        printf ("5: Sort Animal by age \n");
        printf ("6: Find Animal by name \n");
        printf ("0: quit \n");
                
        scanf ("%d", &choice);
		
        switch (choice)
        {
            case 1: //Show Animals
                printAnimals(animals, nrAnimals);
                break;
            case 2: //Add Animal
                // to be implemented 
                break;
            case 3: //Remove Animal
				//to be implemented 
                break;
            case 4://sort by name
				//to be implemented 
                 break;
					 
            case 5:// sort by age
                 //to be implemented 
                 break;
            case 6://find by name
                //to be implemented
                break;
            case 0:
                break;
            default:
                printf ("ERROR: invalid choice: %d\n", choice);
                break;
		}
	}
    return 0;
}



void addTestData(ANIMAL* animals, int* nrAnimals)
{
    ANIMAL a1 = {"Max", Dog, 12};
    ANIMAL a2 = {"Kiekerjan", Cat, 4};
    ANIMAL a3 = {"Lorre", Parrot, 40};
    ANIMAL a4 = {"Fifi", Dog, 1};
    ANIMAL a5 = {"Piep", GuineaPig, 3};

    animals[(*nrAnimals)++] = a1;
    animals[(*nrAnimals)++] = a2;
    animals[(*nrAnimals)++] = a3;
    animals[(*nrAnimals)++] = a4;
    animals[(*nrAnimals)++] = a5;
}

void printAnimals(const ANIMAL* animals, int nrAnimals)
{
	if (animals == NULL)
	{
	  printf("animals pointer is NULL\n"); return;
	}
    if (nrAnimals <= 0)
    {
      printf("Animal array is empty, or nrAnimals is less than 0\n"); return;
    }
      
	int i;
	printf("                  name:               Species:          Age: \n"); 
    for (i = 0; i < nrAnimals; i++)
    {
      printf("Animal %d: ", i+1);
      printf("%15s\t  %15s\t %d \n", 
					animals[i].Name, 
					SpeciesNames[animals[i].Species],
					animals[i].Age);
    }
}
