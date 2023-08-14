#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int SnakeWaterGun(char you, char comp)
{
    if (you == comp)
    {
        return 0;
    }
    if (you == 's' && comp == 'w')
    {
        return 1;
    }
    else if (you == 's' && comp == 'g')
    {
        return -1;
    }
    if (you == 'w' && comp == 'g')
    {
        return 1;
    }
    else if (you == 'w' && comp == 's')
    {
        return -1;
    }
    if (you == 'g' && comp == 's')
    {
        return 1;
    }
    else if (you == 'g' && comp == 'w')
    {
        return -1;
    }
}
int main()
{
    char you, comp;
    int result;
    int num;
    srand(time(0));
    num = rand() % 100 + 1;
    if (num <= 33)
    {
        comp = 's';
    }
    else if (33 < num <= 66)
    {
        comp = 'w';
    }
    else if (num > 66)
    {
        comp = 'g';
    }
    printf("Write 's' for snake, 'w' for water and 'g' for gun:\n");
    scanf("%c", &you);
    result = SnakeWaterGun(you, comp);
    if (result == 0)
    {
        printf("Match is DRAW\n");
    }
    else if (result == -1)
    {
        printf("You LOST the match\n");
    }
    else if (result == 1)
    {
        printf("CONGRATS! You WIN the match\n");
    }
    printf("You choose %c and computer choose %c", you, comp);
}