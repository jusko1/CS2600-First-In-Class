/*
take in input from the command line. 
The arguement at the first index is saved in a variable
that stores the tax. 
The second index is saved in a variable that stores the tip.
Use a random number generator that generates a number 1-4
Depending on the number, picks a meal and calculates the total cost.
Prints the total cost. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main( int argc, char *argv[] ){
    float taxPercent = atof(argv[1]);
    float tax = taxPercent * (0.01);
    float tipPercent = atof(argv[2]);
    float tip = tipPercent * (0.01);

    srand(time(0));
    
    int randomNum = rand()%4;
    if (randomNum == 0){
        float salad = 9.95;
        float total = (salad * tax) + (salad * tip) + salad;
        printf("Your (salad) total is: $%.2f", total);
    }
    else if(randomNum == 1){
        float soup = 4.55;
        float total = (soup * tax) + (soup * tip) +soup;
        printf("Your (soup) total is: $%.2f", total);
        
    }
    else if(randomNum == 2){
        float sandwich = 13.25;
        float total = (sandwich * tax) + (sandwich * tip) + sandwich;
        printf("Your (sandwich) total is: $%.2f", total);

    }
    else{
        float pizza = 22.35;
        float total = (pizza * tax) + (pizza * tip) + pizza;
        printf("Your (pizza) total is: $%.2f", total);
    }
    return 0;
    //gcc .\restaurantBill.c -o a
}