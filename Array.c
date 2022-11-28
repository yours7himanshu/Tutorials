#include <stdio.h>
int main()
{

    int marks[3];

    printf("Enter Marks Physics\n");
    scanf("%d", &marks[0]);

    printf("Enter Marks Chemistry\n");
    scanf("%d", &marks[1]);

    printf("Enter Marks Maths\n");
    scanf("%d", &marks[2]);

    printf("Marks Physics =%d Chemistry =%d Maths =%d ", marks[0], marks[1], marks[2]);

    return 0;
}