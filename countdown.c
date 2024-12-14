/* countdown.c */

#include <stdio.h>
#include <unistd.h>

int main()
{
	int number = 10;
	while(number)
	{
		printf("%d\n", number);
		number--;
		if(number == 0) break;
		sleep(1);
	}

	printf("\nLift Off\n");

	return 0;
}
