#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int number, guess, nguess=1;
    srand(time(0));
    number=rand()%100+1;

    do{
        printf("Guess the number between 1 to 100\n");
        scanf("%d",&guess);

        if(guess<number)
        {
            printf("Higher number please!\n");
        }
        else if(guess>number)
        {
            printf("Lower number please!\n");
        }
        else if(nguess<5)
        {
            printf("Bravo! Your guess is correct.\nyou guessed in %d attemps.",nguess);
        }
        else if(nguess>5)
        {
            printf("oof! you took hell a lot time dude.you guessed in %d attemps.\n",nguess);
            printf("Go and Compete again for sure!");
        }
        nguess++;
    }while(guess!=number);
return 0;
}