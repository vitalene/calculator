//
//  main.c
//  calculator
//
//  Created by Neil Vitale on 8/8/16.
//  Copyright © 2016 Neil Vitale. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int doYouWant = 1;
    int operation = 0;
    int firstNum = 0;
    int secondNum = 0;
    int firstErr = 0;
    int secondErr = 0;
    int addedNumbers = 0;
    int subtractedNumbers = 0;
    int multipliedNumbers = 0;
    int dividedNumbers = 0;
    
    
    printf("Let's do some math!\n\n");
    
    while (doYouWant == 1) {
        
        
        // Print the initial question
        
        printf("What Operation Would You Like? \n");
        printf("Enter matching number to select.\n\n");
        printf("1. Addition (+)\n");
        printf("2. Subtraction (-)\n");
        printf("3. Multiplication (*)\n");
        printf("4. Division (/)\n");
        
        
        printf("Which Operation? : ");    firstErr = scanf("%d", &operation); printf("\n");
        
        // User enters the first number
        printf("Enter a number : ");
        firstErr = scanf("%d", &firstNum);
        printf("\n");
        
        
        // User enters the second number
        printf("Another! :  ");
        secondErr = scanf("%d", &secondNum);
        printf("\n\n");
        
        if (operation == 1) {
            addedNumbers = firstNum + secondNum;
            printf("You chose Addtion and entered the numbers %d and %d.\n", firstNum, secondNum);
            printf("Adding the numbers you get %d + %d = %d\n", firstNum, secondNum, addedNumbers );
        }
        if (operation == 2) {
            subtractedNumbers = firstNum - secondNum;
            printf("You chose subtraction and entered the numbers %d and %d.\n", firstNum, secondNum);
            printf("Subtracting the numbers you get %d - %d = %d\n", firstNum, secondNum, subtractedNumbers );
        }
        if (operation == 3) {
            multipliedNumbers = firstNum * secondNum;
            printf("You chose multiplication and entered the numbers %d and %d.\n", firstNum, secondNum);
            printf("Multiplying the numbers you get %d * %d = %d\n", firstNum, secondNum, multipliedNumbers );
        }
        if (operation == 4) {
            dividedNumbers = firstNum / secondNum;
            printf("You chose division and entered the numbers %d and %d.\n", firstNum, secondNum);
            printf("Dividing the numbers you get %d / %d = %d\n", firstNum, secondNum, dividedNumbers );
            return 0;
            
            
        }
        printf("type 1 to play again or another number to exit: ");
        firstErr = scanf("%d", &doYouWant);
        
        
    }
    
     printf("Thanks for playing!\n");
    
}
