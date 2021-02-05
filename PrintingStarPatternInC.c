#include <stdio.h>

void starpattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void reversedstarpattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows - i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int rows, type;
    printf("Enter 0 for printing star pattern and 1 for printing reversed star pattern\n");
    scanf("%d\n", &type);
    printf("How many rows do you want to print\n");
    scanf("%d\n", &rows);

    switch (type)
    {
    case 0:
        starpattern(rows);
        break;

    case 1:
        reversedstarpattern(rows);
        break;

    default:
        printf("You have entered an envalid choice\n");
        break;
    }

    return 0;
}