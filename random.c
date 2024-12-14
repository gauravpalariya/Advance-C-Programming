/* program for pseudo random number generation */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int main()
{

	int number;
	srand(getpid());
	number = rand();
	printf("Number is %d\n", number);
	return 0;
}
