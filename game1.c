#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int genrateRandomNumber(int n)
{
    srand(time(NULL));
    return rand() % n;
}

int main()
{
    char playerName[22];
    int playerScore = 0;
    int computerScore = 0;
    char playerChoose;
    char computerChoose;
    int randomNumber;
    char mood[10];
    printf("Welcome in the Rock , paper and scissor game\n");
    printf("Player enter your name : ");
    gets(playerName);
    printf("RULE :\n1 : For --> rock <--  enter  --> r <--\n2 : For --> paper <--  enter  --> p <--\n3 : For --> scissor <--  enter  --> s <--\n");
    printf("Game Is Plays For Maximum Score 3\n");

    while (playerScore < 3 && computerScore < 3)
    {
        printf("%s turn : ", playerName);
        scanf(" %c", &playerChoose);
        if (playerChoose == 'r')
        {
            printf("%s choose : rock\n", playerName);
        }
        else if (playerChoose == 'p')
        {
            printf("%s choose : paper\n", playerName);
        }
        else if (playerChoose == 's')
        {
            printf("%s choose : scissor\n", playerName);
        }
        else
        {
            printf("Invalid Input !\n");
            continue;
        }

        randomNumber = genrateRandomNumber(3);
        if (randomNumber == 0)
        {
            computerChoose = 'r';
            printf("Computers turn : rock\n");
        }
        else if (randomNumber == 1)
        {
            computerChoose = 'p';
            printf("Computers turn : paper\n");
        }
        else if (randomNumber == 2)
        {
            computerChoose = 's';
            printf("Computer turn : scissor\n");
        }
        if (playerChoose == 'r' && computerChoose == 'r')
        {
            printf("Draw\n");
            printf("%s score is %d\n", playerName, playerScore);
            printf("Computer score is %d\n", computerScore);
        }
        else if (playerChoose == 'r' && computerChoose == 'p')
        {
            printf("Computer win\n");
            computerScore++;
            printf("%s score is %d\n", playerName, playerScore);
            printf("Computer score is %d\n", computerScore);
        }
        else if (playerChoose == 'r' && computerChoose == 's')
        {
            printf("%s win\n", playerName);
            playerScore++;
            printf("%s score is %d\n", playerName, playerScore);
            printf("Computer score is %d\n", computerScore);
        }
        else if (playerChoose == 'p' && computerChoose == 'r')
        {
            printf("%s win\n", playerName);
            playerScore++;
            printf("%s score is %d\n", playerName, playerScore);
            printf("Computer score is %d\n", computerScore);
        }
        else if (playerChoose == 'p' && computerChoose == 'p')
        {
            printf("Draw\n");
            printf("%s score is %d\n", playerName, playerScore);
            printf("Computer score is %d\n", computerScore);
        }
        else if (playerChoose == 'p' && computerChoose == 's')
        {
            printf("Computer win\n");
            computerScore++;
            printf("%s score is %d\n", playerName, playerScore);
            printf("Computer score is %d\n", computerScore);
        }
        else if (playerChoose == 's' && computerChoose == 'r')
        {
            printf("Computer win\n");
            computerScore++;
            printf("%s score is %d\n", playerName, playerScore);
            printf("Computer score is %d\n", computerScore);
        }
        else if (playerChoose == 's' && computerChoose == 'p')
        {
            printf("%s win\n", playerName);
            playerScore++;
            printf("%s score is %d\n", playerName, playerScore);
            printf("Computer score is %d\n", computerScore);
        }
        else if (playerChoose == 's' && computerChoose == 's')
        {
            printf("Draw\n");
            printf("%s score is %d\n", playerName, playerScore);
            printf("Computer score is %d\n", computerScore);
        }
    }
    if (playerScore == 3)
    {
        printf("%s win this game !!!!!!!!!\n", playerName);
    }
    if (computerScore == 3)
    {
        printf("Computer win this game !!!!!!!!!!!\n");
    }
    getch();
    return 0;
}
