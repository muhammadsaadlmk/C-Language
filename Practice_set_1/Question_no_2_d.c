// If we want that the user should enter the radius and height then we can use the following code

#include <stdio.h>

int main()
{
    float pi = 3.14;
    int r;
    int h;
    printf("Enter the radius of the cylinder: ");
    scanf("%d", &r);
    printf("Enter the height of the cylinder: ");
    scanf("%d", &h);
    printf("The Volume of the cylinder is %f", pi * r * r * h);
    return 0;
}