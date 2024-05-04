#include<stdio.h>

int main(){
   // using the for loop control statement

   for(int i = 1 ; i <= 20; i++){
    printf("%d\n", i);
   }
   // using the for while control statement
   int i = 1;
   while(i <= 10){
    printf("%d", i);
    i ++;
   }
  // using the do while loop control statement
    i = 1;
   do{
    printf("%d", i);
    i ++;
   }
   while(i <=15);
   
   return 0;

}