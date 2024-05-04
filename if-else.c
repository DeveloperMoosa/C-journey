#include <stdio.h>

int main(){
    // Taking the user input to use and proof the age along using if and else statement
    int age;
    printf("Enter your Age:\n");
    scanf("%d", &age);

if(age >= 18){
    printf("You are eligible for license\n");
}
else{
    printf("/you are under-age\n");
}

// idetifying the program that is the value is odd or even through if else statement
int number;
printf("enter the number;\n");
scanf("%d", &number);
if(number % 2 ==0){
    printf("Even\n");
}
else{
    printf("Odd\n");
}
return 0;
}