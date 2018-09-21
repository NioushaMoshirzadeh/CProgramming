#give PN the name of your c file wihich contains main
PN=animal_shelter

CFLAGS=-Wall -Werror -Iproduct -I../Unity -Itest

#add your own other c files here
SHARED=	product/administration.c \
	             product/file_element.c  \
	                         
TEST=$(SHARED) \
             ../Unity/unity.c \

all: 
	gcc $(CFLAGS) product/$(PN).c $(SHARED) -o $(PN) 

AdminTest: 
	gcc $(CFLAGS) test/administration_test.c $(TEST) -o AdminTest 
	./AdminTest
    
clean:
	rm -rf $(PN)Test $(PN) AdminTest

valgrind: 
	valgrind ./$(PN)



.PHONY: clean test valgrind
