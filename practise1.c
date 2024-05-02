#include <stdio.h>

int main(){
    // Finding the are of the square
    int side;
    printf("Enter the value of side\n");
    scanf("%d",&side);
    printf("area of a square is %d\n", side * side);

    // Finding the radius of the circle 
    float radius;
    printf("enter the value\n");
    scanf("%f", &radius);
    printf("The radius of the circle is : %f \n", 3.14 * radius * radius);

    // Finding the perimeter of rectangle
    int length;
    int width;
    printf("enter the length : \n");
    scanf("%d",&length);
    printf("Enter the width :\n");
    scanf("%d", &width);
    int perimeter;
    printf("The perimeter of the rectangle is :%d\n", 2 *(length + width));

    return 0; 
}