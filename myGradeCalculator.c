#include<stdio.h>

// Starting the program and functions
int main() {
    int myPoints;
    int pointsPossible;
    float gradePercentage;

    // Asking user total points earned in class
    printf("What is your total points in class accrued?\n");
    scanf("%d", &myPoints);

    // Extra space
    printf("\n");

    // printing off total points user entered to test function worked properly
    printf("total points: %d\n", myPoints);

    // Asking user total points possible
    printf("What is total points possible you can earn?\n");
    scanf("%d", &pointsPossible);

    // extra space
    printf("\n");

    // printing total points possible user entered to test function worked properly
    printf("total points possible: %d\n", pointsPossible);

    // dividing (myPoints) by (pointsPossible) then multiplying by 100 to get grade percentage
    gradePercentage = (float) myPoints / pointsPossible * 100;

    // printing the user's grade from equation to test function worked properly
    printf("Your grade is %.2f percent.\n", gradePercentage);

    // using if/else if/ else statements in percentage range to print out what letter grade the user is receiving
    if (gradePercentage >= 90.00)
    {
        printf("You have an A in class.\n");
    }
    else if (gradePercentage >= 80.00)
    {
        printf("You have a B in class.\n");
    }
    else if (gradePercentage >= 70.00)
    {
        printf("You have a C in class.\n");
    }
    else if (gradePercentage >= 60.00)
    {
        printf("You have a D in class.\n");
    }
    else
        printf("YOu have a F in the class and you are failing. Seek help immediatley and don't fuck around.\n");

    return 0;  
    
}
