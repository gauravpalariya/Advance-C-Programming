/* Dice Game */


#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int generate(int max)
{
	return rand() % max + 1;
}

int main()
{
	printf("We are Here playing Dice game, You have $1000 and you have to bet some amount\n");
	printf("If you lose bet, you'll lose the money, if you win, you will get triple the amount\n");
	printf("Enter 0$ if you want to quit the game\n");
	int balance = 1000, guess, dice_number, bet;
	printf("Enter the bet: ");
	scanf("%d", &bet);

	while(1)
	{
		if(balance <= 0)
		{
			printf("You lost all your money..");
			fflush(stdout);
			sleep(1);
			printf("Ending the game\n");
			break;
		}
		
		printf("Guess the number between 1 and 6...Enter 0 to quit....");
		scanf("%d", &guess);
		if(guess == 0)
		{
			printf("You quit the game... bye bye\n");
			break;
		}

		printf("Throwing the dice....\n");
		sleep(2);
		dice_number = generate(6);
		printf("Your guess : %d\n", guess);
		printf("Dice : %d\n", dice_number);
		sleep(1);
		if(guess == dice_number) {
			printf("Congrats, you win triple the bet\n");
			balance += 3*bet;
			printf("New balance : %d\n", balance);
		}
		else {
			printf("Oops, you lost the bet\n");
			balance -= bet;
			printf("New balance : %d\n", balance);	
		}
	}

	return 0;
}








