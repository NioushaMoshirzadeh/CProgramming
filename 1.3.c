#include <stdio.h>

void swapValues(int *value1, int *value2);

int main()
{
    int value1 = 35;
    int value2 = -97;
    swapValues(&value1, &value2);
    printf("now value1 equals %d and value2 equals %d", value1, value2);
    return 0;
}

void swapValues(int *value1, int *value2){
    int temp = *value1;
    *value1 = *value2;
    *value2 = temp;
}