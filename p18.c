#include <stdio.h>

int main()
{
    int n, limit, i, reverse;
    FILE *f;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Invalid number");
        return 0;
    }

    printf("Enter table limit: ");
    scanf("%d", &limit);

    if (limit <= 0)
    {
        printf("Invalid limit");
        return 0;
    }

    printf("Reverse order? (1.Yes 0.No): ");
    scanf("%d", &reverse);

    f = fopen("table.txt", "w");

    if (reverse == 1)
    {
        for (i = limit; i >= 1; i--)
        {
            printf("%d x %d = %d\n", i, n, i*n);
            fprintf(f, "%d x %d = %d\n", i, n, i*n);
        }
    }
    else
    {
        for (i = 1; i <= limit; i++)
        {
            printf("%d x %d = %d\n", i, n, i*n);
            fprintf(f, "%d x %d = %d\n", i, n, i*n);
        }
    }

    fclose(f);
    printf("Table saved to table.txt\n");

    return 0;
}

