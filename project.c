#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(NULL));
    int guessed;
    int random_number = rand() % 100 + 1; //generate a random number beetween 1 and 100
    int no_of_guesses = 0;

    do{
    printf("guess the number:");
    scanf("%d", &guessed);

    if(random_number < guessed) { 
        printf("enter less number\n");
    }
        else if(random_number > guessed) { 
            printf("enter greater number\n");
    }
        else{
            printf("congratulations!\n");
            no_of_guesses++;
        }
    }while(random_number != guessed);
            printf("you guessed the number in %d guesses\n", no_of_guesses);
        return 0;
    }
     

