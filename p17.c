#include <stdio.h>
#include <unistd.h>

int main()
{
    float total, step, distance = 0;
    int minute = 0;

    printf("Enter marathon distance (km): ");
    scanf("%f", &total);

    printf("Enter distance covered per minute (km): ");
    scanf("%f", &step);

    while (1)
    {
        minute++;
        distance += step;
        printf("Minute %d: Distance covered = %.2f km\n", minute, distance);
        sleep(1);

        if (distance >= total)
            break;
    }

    printf("Marathon complete!\n");
    printf("Total minutes taken = %d\n", minute);

    return 0;
}

