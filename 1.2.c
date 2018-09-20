#include <stdio.h>

void metricToImperial(int lengthInCm, int*inches, int*feet);

int main()
{
    int lengthInCm= 176, inches, feet;
    metricToImperial(lengthInCm, &inches, &feet);
    printf("a conversion of %d cm should result in %dft%d", lengthInCm, feet, inches);

    return 0;
}
void metricToImperial(int lengthInCm, int*inches, int*feet){
    
        *feet = lengthInCm/(12*2.54);
        *inches = (lengthInCm/2.54)-((*feet)*12);
}