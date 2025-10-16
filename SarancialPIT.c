#include <stdio.h>
int main() {
    float grade;

    printf("Name: Nathalie Jane S. Sarancial");
    printf("\nID Number: 2025-304041");
    printf("\n===============================");

    printf("\nEnter your final grade: ");
    scanf("%f", &grade);

    
    printf("\nYour final grade is: %.2f\n", grade);

    
    if (grade >= 75)
        printf("Status: Passed\n");
    else
        printf("Status: Failed\n");

        return 0;
}
 