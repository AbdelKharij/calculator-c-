#include <iostream>

int main(void){
    //declare variables
    int num1, num2, sign, result, end;
    
    do{
    //promt user
    printf("Please enter one of the following\n");
    printf(" 1 - Addition\n 2 - Subtraction\n 3 - Division\n 4 - Multiplication\nNumber: ");
    scanf("%d", &sign);

    //get numbers
    printf("Enter your first number: ");
    scanf("%d", &num1);

    printf("Enter your second number: ");
    scanf("%d", &num2);

    //set up cases for each number
    switch (sign){
        case 1:
            result = num1 + num2;
            printf("Your result is: %d\n", result);
            break;

        case 2:
            result = num1 - num2;
            printf("Your result is: %d\n", result);
            break;

        case 3:
            result = num1 / num2;
            printf("Your result is: %d\n", result);
            break;

        case 4:
            result = num1 * num2;
            printf("Your result is: %d\n", result);
            break;
        
    } 

    //Give option to continue or exit by changing "end" value
    printf("Would you like to continue using the calculator?\nType -1 to stop\nType 0 to use again");
    scanf("%d", &end);
    } while(end>=0);

    printf("Thank you for using my calculator!");



}