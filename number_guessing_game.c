//we will write a program that generates a random number and asks the player to guess it.
//if the player's guess is higher than the actual number, the program displays"Lower number
//please" similarly , if the user's guess is too low, the program prints"Higher number please".
//when the user guesses the correct number , the program displays the number of guesses the player used to arrive at the number
//Hint: use loop & random number at the number generator.
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    //Initialize random number generator
    srand(time(0));

    //Generate random number between 1 and 100
    int your_input,no_of_guess=1, randomNumber =(rand() % 100) + 1;
    printf("Welcome to the number Guessing Game!\n");
    for (int i = 0; i <=100; i++)
    {
        printf("Enter the number: ");
        scanf("%d",&your_input);
        if (randomNumber<your_input){
            printf("Lower number please.\n");
        }
        else if (randomNumber>your_input){
            printf("Higher number please.\n");
        }
        else if (randomNumber==your_input){
            break;
        }
        no_of_guess++;
    }
    if(randomNumber==your_input)
    printf("you guess a right number!,The number is: %d\nYou win by %d attempts\nyour score is: %d",randomNumber,no_of_guess,no_of_guess);

    //Print the random number
    // printf("random Number:%d\n",randomNumber);
    return 0;
}
