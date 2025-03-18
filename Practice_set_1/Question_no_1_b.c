#include <stdio.h>

int main()
{
    int length, width;
    printf("Enter the length of rectangle:\n");
    scanf("%d", &length);
    printf("Enter the width of rectangle:\n");
    scanf("%d", &width);
    printf("Area of rectangle is %d", length * width);
    return 0;
}