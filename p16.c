#include <stdio.h>

int main()
{
    int matchsticks, user, comp;
    int start;
    int playAgain = 1;
    int userWins = 0, compWins = 0;

    while (playAgain == 1)
    {
        matchsticks = 21;

        printf("\n====== 21 MATCHSTICK GAME ======\n");
        printf("\nWho should start first?\n");
        printf("1. You\n2. Computer\nEnter choice: ");
        scanf("%d", &start);

        printf("\nGame Started! Total Matchsticks = 21\n");

        while (matchsticks > 1)
        {
            if (start == 1)
            {
                printf("\nYour turn.\n");
                do
                {
                    printf("Pick 1 to 4 matchsticks: ");
                    scanf("%d", &user);
                } while (user < 1 || user > 4 || user > matchsticks);

                matchsticks -= user;
                printf("You picked %d. Remaining = %d\n", user, matchsticks);

                if (matchsticks == 1)
                {
                    printf("\nYou must pick the last matchstick.\n");
                    printf("You Lose! Computer Wins!\n");
                    compWins++;
                    break;
                }

                comp = 5 - user;
                matchsticks -= comp;
                printf("\nComputer picked %d. Remaining = %d\n", comp, matchsticks);

                if (matchsticks == 1)
                {
                    printf("\nComputer must pick the last matchstick.\n");
                    printf("You Win!\n");
                    userWins++;
                    break;
                }
            }
            else
            {
                comp = 1;
                matchsticks -= comp;
                printf("\nComputer picked %d. Remaining = %d\n", comp, matchsticks);

                if (matchsticks == 1)
                {
                    printf("\nComputer must pick the last matchstick.\n");
                    printf("You Win!\n");
                    userWins++;
                    break;
                }

                printf("\nYour turn.\n");
                do
                {
                    printf("Pick 1 to 4 matchsticks: ");
                    scanf("%d", &user);
                } while (user < 1 || user > 4 || user > matchsticks);

                matchsticks -= user;
                printf("You picked %d. Remaining = %d\n", user, matchsticks);

                if (matchsticks == 1)
                {
                    printf("\nYou must pick the last matchstick.\n");
                    printf("You Lose! Computer Wins!\n");
                    compWins++;
                    break;
                }
            }
        }

        printf("\n=== SCOREBOARD ===\n");
        printf("Your Wins: %d\n", userWins);
        printf("Computer Wins: %d\n", compWins);

        printf("\nPlay again? (1 = Yes, 0 = No): ");
        scanf("%d", &playAgain);
    }

    printf("\nThanks for playing!\n");

    return 0;
}
