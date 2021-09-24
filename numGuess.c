/*Print the options.
Scan the command line for arguments
Pressing 1 sets the max # to 10 and picks a random number from 1-10. random range (0-9)+1.
Prompts the user to enter a number. If correct, go back to main menu
If false, generates a new random number

Pressing 2 changes the variable in the random range to accomodate their number

Pressing 3 thanks the user for playing and ends the program
make a while loop that != q continue the program



*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    
    Menu: ;
    printf("Press 1 to play a game\nPress 2 change the max number\nPress 3 to quit\n");
    int choice;
    scanf("%d", &choice);
    fflush(stdin);

    if (choice == 1){
        //run the game
        srand(time(0));
        int randomNum = rand()%10 +1; //number from 0-9 have to add 1?
        GuessAgain: ;
        int guess;
        printf("Guess a number 1-10\n");
        scanf("%d", &guess);
        fflush(stdin);
      
        if(guess == randomNum){
            printf("Congrats! You guessed correctly\n");
            goto Menu;
        }
        else if(guess > randomNum && guess < 11){
            printf("%d", guess);
            printf("Too high! Try again\n");
            goto GuessAgain;
        }
        else if(guess < randomNum && guess > 0){
            printf("%d", guess);
            printf("Too low! Try again\n");
            goto GuessAgain;
        }
        else {
            goto Menu;
        }
    }
    else if(choice == 2) {
        printf("Enter a new max number\n");
        int newChoice;
        scanf("%d", &newChoice);
        fflush(stdin);
        srand(time(0));
        int newRandom = rand()%newChoice + 1; // number from 0- newChoice-1, have to had 1?
        GuessAgain2: ;
        int guess;
        printf("Guess a new number 1 to %d\n", newChoice);
        scanf("%d", &guess);
        fflush(stdin);
        
        if (guess == newRandom){
            printf("Congrats! You guessed correctly\n");
            goto Menu;
        }
        else if(guess > newRandom && guess < newRandom+1){
            printf("Too high! Try again\n");
            goto GuessAgain2;
        }
        else if(guess < newRandom && guess > 0){
            printf("Too low! Try again\n");
            goto GuessAgain2;
        }
        else{
            goto Menu;
        }
    }
    else{
        printf("Thank you for playing!\n");
    }

    return 0;
}