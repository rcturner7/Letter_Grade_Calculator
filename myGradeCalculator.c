#include<stdio.h>

int main() {
    int myPoints;
    int pointsPossible;
    float gradePercentage;

    printf("What is your total points in class accrued?\n");
    scanf("%d", &myPoints);
    printf("\n");
    printf("total points: %d\n", myPoints);

    printf("What is total points possible you can earn?\n");
    scanf("%d", &pointsPossible);
    printf("\n");
    printf("total points possible: %d\n", pointsPossible);

    gradePercentage = (float) myPoints / pointsPossible * 100;

    printf("Your grade is %.2f percent.\n", gradePercentage);

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

    return 1;  
    
}