#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number, guess, nguesses = 1;
    srand(time(0));
    number = rand() % 100 + 1; // Generates random number between 1 to 100
    // printf("Generated number is %d\n", number);
    // keep running the loop until number is guessed
    printf("***(Guess the number between 1 to 100)***\n");

    do
    {
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("Lower number please!\n");
        }
        else if (guess < number)
        {
            printf("Higher number please!\n");
        }
        else
        {
            printf("CONGRATS! You guessed the number in %d attempts\n", nguesses);
        }
        nguesses++;
    } while (guess != number);

    return 0;
}