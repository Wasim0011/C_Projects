#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number;
    srand(time(0));
    number = rand()%100 + 1;    //Generates random number between 1 to 100
    printf("The number generated is %d", number);

    return 0;
}