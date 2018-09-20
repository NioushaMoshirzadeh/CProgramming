#include <stdio.h>

int main()
{
    int x = 3, *p1, *p2;
    
    p1 = p2 = &x;
    
    *p1 = 5;
    
    printf("x is: %d\n", *p2);

    return 0;
}