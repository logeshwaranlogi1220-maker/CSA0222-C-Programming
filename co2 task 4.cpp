#include <stdio.h>

int main()
{
    int marks;

    printf("Enter marks: ");
    scanf("%d", &marks);

    if (marks < 0 || marks > 100)
        printf("Invalid Marks");
    else if (marks >= 90)
        printf("Grade S");
    else if (marks >= 80)
        printf("Grade A");
    else if (marks >= 70)
        printf("Grade B");
    else if (marks >= 60)
        printf("Grade C");
    else if (marks >= 50)
        printf("Grade D");
    else
        printf("Grade F");

    return 0;
}
