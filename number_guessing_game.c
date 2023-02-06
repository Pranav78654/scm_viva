#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int num, i = 0, how_many_guess = 0 ;
    srand(time(0));
    int guess = rand()%100 +1;
    printf("Guess A Number Between 1 and 100:\n");
    scanf("%d", &num);
    while (i == 0)
    {
        if (num == guess)
        {
            printf("Congo You Won!!\n");
            printf("You have taken %d guess", how_many_guess);
            i++;
        }
        else if (num < guess)
        {
            printf("Too Low\n");
            printf("Guess Again!!\n");
            scanf("%d", &num);
            how_many_guess++;
        }
        else if (num > guess)
        {
            printf("Too High\n");
            printf("Guess Again!!\n");
            scanf("%d", &num);
            how_many_guess++;
        }
    }

    return 0;
}