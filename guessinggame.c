#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
// #include <Windows.h>

int main()
{
	int i=10, j=110, num, looprunner=1, userguess, done=0, done2=0, choice, tmp=0;
	char response;
	srand(time(0));
	num = rand() % 100 + 1;

	while (looprunner==1)
	{
		printf("\n\n1. PLAY GAME                      2. EXIT\n\n");
		printf("[+] Press your desired option: ");
		scanf("%d", &choice);
		if (choice == 1)
		{
			printf("\n\n***********************\n");
			printf("*  THE GUESSING GAME  *\n");
			printf("***********************");
			printf("\n\n+-------------------RULES---------------------+\n");
			printf("|1. You have 10 chances to guess the number.  |\n");
			printf("|2. The quicker you guess, the more you score.|\n");
			printf("+---------------------------------------------+\n");

			while (i>=1)
			{
				printf("\n\n+-----------------------+");
				printf("\n Chances left: %d       \n", i);
				printf(" Current score: %d    \n", j);
				// printf(" Your last guess: %d    \n", copyguess);
				printf("+-----------------------+\n\n");
			
				printf("Enter your guess (from 1 to 100): ");
				scanf("%d",&userguess);
				// copyguess = userguess;

				if (userguess > num)
				{
					printf("You need to go lower.\n");
					sleep(2);
					// printf("Press ENTER to continue...");
					// scanf("%[^\n]",&ch);
					system("clear");
					printf("You need to go lower.\n");
				}
				else if (userguess < num)
				{
					printf("You need to go higher.\n");
					sleep(2);
					system("clear");
					printf("You need to go higher.\n");
				}
				else if (userguess == num)
				{
					printf("\nYou have guessed the number, WELL DONE...!!");
					printf("\n\nYou have taken %d guesses.\n", 10-i);
					printf("You have scored %d points.\n", j-10);
					done=1;
					break;
				}
				if (i==1)
				{
					printf("-------------------------------------------\n");
					printf("\n\nOops, GAME OVER...\nBetter luck next time...\n");
					break;
				}
				i--;
				j-=10;
			}
		}
		else if (choice == 2)
		{
			printf("Thank you for using the program.\n");
			break;
		}
		else
		{
			printf("\nPlease select from the given options.\n");
			sleep(2);
			system("clear");
		}
		if (done==1)
		{
			break;
		}
	}
}
