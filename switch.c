#include<stdio.h>
#include<math.h>

int main(){
  
    int month;
    printf("Enter the month number\n");
    scanf("%d", &month);

    switch(month){
        
    case 1 : printf("january\n");
            break;
    case 2 : printf("february\n");
            break;
    case 3 : printf("march\n");
            break;
    case 4 : printf("april\n");
            break;
    case 5 : printf("may\n");
            break;
     case 6 : printf("june\n");
            break;
     case 7 : printf("july\n");
            break;
     case 8 : printf("august\n");
            break;
    case 9 : printf("september\n");
            break;        
     case 10 : printf("october\n");
            break;
     case 11 : printf("november\n");
            break;
 case 12 : printf("december\n");
            break;        
    }
// another use of switch operatoe using the datatype of character
   // using the direct value to find the day
    char day = 'f';


    switch(day){
        case 'm' : printf("monday\n");
            break;
        case 't' : printf("tuesday\n");
            break;
        case 'w' : printf("wednesday\n");
            break;
        case 'T': printf("thursday\n");
            break;
        case 'f' : printf("friday\n");
            break;
        case 's' : printf("saturday\n");
            break;            
        case 'S' : printf("sunday\n");
            break;    


    }
    return 0;
}