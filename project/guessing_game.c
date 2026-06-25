#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int randomNumber;

    // Initialize random number generator
    srand(time(0));

    // Generate random number from 1 to 10
    randomNumber = (rand() % 10) + 1;
    int number_of_guesses = 0 ;
    int guessed;
    do{
        printf("Guess the number");
        scanf("%d" , &guessed);
        if (guessed>randomNumber){
            printf("lower number please\n");
        }
        else{
            printf("Higher number pleaser\n") ;
    }
     number_of_guesses++;
    }
    while(randomNumber!= guessed);

    printf("guessed number: %d", guessed);

    return 0;
}
