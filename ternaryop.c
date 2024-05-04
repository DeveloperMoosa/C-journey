#include<stdio.h>

int main(){
    // using of ternary operator 
    int age;
    // getting the input from the user
    printf("Enter your age");
    scanf("%d", &age);

    age >=18 ? printf("You are adult\n") : printf("You are underage\n");
    
    // using the ternary operator
    int number;
    int luckynumber = 7;
printf("enter the lucky number:\n");
scanf("%d", &number);
    number == luckynumber ? printf("you are lucky\n") : printf("you are unlucky\n");
    return 0;
}