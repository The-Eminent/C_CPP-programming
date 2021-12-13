#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int SnakeWaterGun(char you,char comp);

int main()
{
     char you,comp;
     srand(time(0));
     int number=rand()%100+1;

     if(number<33)
     {
         comp='s';
     }
     else if(number>33 && number<66)
     {
         comp='w';
     }
     else
     {
         comp='g';
     }

    printf("Enter 's' for snake, 'w' for water and 'g' for gun: \n");
    scanf("%c", &you);

    int result = SnakeWaterGun(you, comp);

    if(result == 0){
        printf("Game draw!\n");
    }
    else if(result == 1){
        printf("You win!\n");
    }
    else{
        printf("You Lose!\n");
    }
    printf("You chose %c and computer chose %c. ", you, comp);
return 0;
}

int SnakeWaterGun(char you, char comp){
    // returns 1 if you win, -1 if you lose and 0 if draw
    if(you == comp)
    {
        return 0;
    }
    
    if(you == 's' && comp == 'w')
    {
        return 1;
    }
    else if(you == 'w' && comp == 's')
    {
        return -1;
    }
    else if(you == 's' && comp == 'g')
    {
        return -1;
    }
    else if(you == 'g' && comp == 's')
    {
        return 1;
    }
    else if(you == 'w' && comp == 'g')
    {
        return 1;
    }
    else if (you == 'g' && comp == 'w')
    {
        return -1;
    }
}