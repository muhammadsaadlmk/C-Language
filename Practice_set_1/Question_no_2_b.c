// If we want that the user should enter the radius of the circle then we can use the following code

#include <stdio.h>

int main()
{
    float pi = 3.14;
    int r;
    printf("Enter the radius of the circle\n");
    scanf("%d", &r);
    printf("The area of the circle is %f", pi * r * r);
    return 0;
}