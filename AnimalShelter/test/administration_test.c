#include <string.h>
#include "unity.h"
#include "administration.h"


void setUp(void)
{
    // This is run before EACH test
}

void tearDown(void)
{
    // This is run after EACH test
}

void test_EmptyTest(void)
{
    TEST_ASSERT_EQUAL(1, 1);
}

void test_addAnimal()
{ 
	ANIMAL animals[20];
	ANIMAL a = {"Lucas", Cat, 6};
	int result = addAnimal (&a, animals, 0);
	TEST_ASSERT_EQUAL(0,result);
}

//tests: removeAnimal(const char* name, Animal* animalArray, int length);

void test_removeNOAnimal(){
	ANIMAL animal[20];
	ANIMAL a = {"Niousha", Cat, 6};
	ANIMAL b = {"SAMAN", Dog, 9};
	ANIMAL c = {"Ali", parrot, 6};
	ANIMAL d = {"Niousha", Cat, 6};
	
	addAnimal(&a, animal, 0);
	addAnimal(&b, animal, 1);
	addAnimal(&c, animal, 2);
	addAnimal(&d, animal, 3);
	
	char name [20] = "Tara";
	int result = removeAnimal(name , animal, 4);
	TEST_ASSERT_EQUAL(0, result);
	}
	
void test_removeOneAnimal(){
	ANIMAL animal[20];
	ANIMAL a = {"Niousha", Cat, 6};
	ANIMAL b = {"SAMAN", Dog, 9};
	ANIMAL c = {"Ali", parrot, 6};
	ANIMAL d = {"Niousha", Cat, 6};
	
	addAnimal(&a, animal, 0);
	addAnimal(&b, animal, 1);
	addAnimal(&c, animal, 2);
	addAnimal(&d, animal, 3);
	
	char name [20] = "SAMAN";
	int result = removeAnimal(name, animal, 4);
	TEST_ASSERT_EQUAL(1, result);
	}
	
void test_removeTwoAnimal(){
	ANIMAL animal[20];
	ANIMAL a = {"Niousha", Cat, 6};
	ANIMAL b = {"SAMAN", Dog, 9};
	ANIMAL c = {"Ali", parrot, 6};
	ANIMAL d = {"Niousha", Cat, 6};
	
	addAnimal(&a, animal, 0);
	addAnimal(&b, animal, 1);
	addAnimal(&c, animal, 2);
	addAnimal(&d, animal, 3);
	
	char name [20] = "Niousha";
	int result = removeAnimal(name , animal, 4);
	TEST_ASSERT_EQUAL(2, result);
	}	
	
void test_removeAllAnimal(){
	ANIMAL animal[20];
	ANIMAL a = {"Niousha", Cat, 6};
	ANIMAL b = {"Niousha", Dog, 9};
	ANIMAL c = {"Niousha", parrot, 6};
	ANIMAL d = {"Niousha", Cat, 6};
	
	addAnimal(&a, animal, 0);
	addAnimal(&b, animal, 1);
	addAnimal(&c, animal, 2);
	addAnimal(&d, animal, 3);
	
	char name [20] = "Niousha";
	int result = removeAnimal(name , animal, 4);
	TEST_ASSERT_EQUAL(4, result);
	
	}
	
void test_finAnimalExist(){
	
	ANIMAL animal[20];
	ANIMAL a = {"Niousha", Cat, 6};
	ANIMAL b = {"SAMAN",Dog,6};
	ANIMAL c = {"Ali", Cat, 6};
    ANIMAL d = {"Saghi", Dog, 6};
    addAnimal(&a, animals, 0);
    addAnimal(&b, animals, 1);
    addAnimal(&c, animals, 2);
    addAnimal(&d, animals, 3);
    char searchName[5] =  "Niousha";
    ANIMAL animalOut;
    ANIMAL* animalPtr = &animalOut;

    int result = findAnimalByName(searchName, animals, 5, animalPtr); 
    TEST_ASSERT_EQUAL(1, result);
	}
	

int main (int argc, char * argv[])
{
    
    UnityBegin();
    
    RUN_TEST(test_EmptyTest, 1);
    RUN_TEST(test_addAnimal, 2);
    
    
    RUN_TEST(test_removeNOAnimal,3);
    RUN_TEST(test_removeOneAnimal,4);
    RUN_TEST(test_removeTwoAnimal,5);
    RUN_TEST(test_removeAllAnimal,6);
    
    RUN_TEST(test_finAnimalExist,7);
    

    return UnityEnd();
}
