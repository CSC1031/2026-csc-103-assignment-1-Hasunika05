#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m1 = 0;
    int m2 = 0;
    int m3 = 0;
    int total = 0;
    float average = 0.0;

    printf("Mathematics marks (out of 100): ");
    scanf("%d", &m1);

    printf("Science marks (out of 100): ");
    scanf("%d", &m2);

    printf("English marks (out of 100): ");
    scanf("%d", &m3);

    total = m1 + m2 + m3;
    average = total / 3.0;

    printf("Total: %d\n", total);
    printf("Average: %.2f\n", average);


    if (m1 < 40 || m2 < 40 || m3 < 40) {
        printf("Grade: F \nResult:FAIL - A subject score is below 40)\n");
    }
    else if (average >= 80 && average <= 100) {
        printf("Grade: A \n Result: Pass");
    }
    else if (average >= 70 && average < 80) {
        printf("Grade: B \n Result: Pass");
    }
    else if (average >= 60 && average < 70) {
        printf("Grade: C \nResult: Pass");
    }
    else if (average >= 50 && average < 60) {
        printf("Grade: D \nResult: Pass");
    }
    else {
        printf("Grade: F \nResult:FAIL - A subject score is below 40\n");
    }

    return 0;
}
