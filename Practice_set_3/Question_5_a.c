// Write a program to determine whether a character entered by the user is lowercase or not.
// https://www.cs.cmu.edu/~pattis/15-1XX/common/handouts/ascii.html
#include <stdio.h>

int main(){
    char ch;
    printf("Enter the character: ");
    scanf("%c", &ch);
    if (ch >= 97 && ch <= 122) // ASCII values of a-z
    {
        printf("The character %c is lowercase.\n", ch);
    }
    else{
        printf("The character %c is not lowercase.\n", ch);
    }
    return 0;
}