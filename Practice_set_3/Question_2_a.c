// Write a program to determine whether a student has passed or failed. To pass, a student requires a total of 40% and at least 33% in each subject. Assume there are three subjects and take the marks as input from the user.
#include <stdio.h>

int main()
{
    float subject_1, subject_2, subject_3;
    printf("Enter the marks of Subject 1: ");
    scanf("%f", &subject_1);
    printf("You have Entered the marks of Subject 1: %.2f\n", subject_1);
    printf("Enter the marks of Subject 2: ");
    scanf("%f", &subject_2);
    printf("You have Entered the marks of Subject 2: %.2f\n", subject_2);
    printf("Enter the marks of Subject 3: ");
    scanf("%f", &subject_3);
    printf("You have Entered the marks of Subject 3: %.2f\n", subject_3);

    // Check if any subject has less than 33 marks
    if (subject_1 < 33 || subject_2 < 33 || subject_3 < 33)
    {
        printf("You have failed due to low marks in one or more subjects.\n");
    }
    else
    {
        printf("You have passed in all individual subjects.\n");

    // Check if the overall percentage is less than 40
    if ((subject_1 + subject_2 + subject_3) / 3 < 40)
    {
        printf("You have failed due to insufficient total marks.\n");
    }
    else
    {
        printf("You have passed the exam.\n");
    }
    }

    return 0;
}
