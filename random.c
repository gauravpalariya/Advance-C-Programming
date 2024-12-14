/* random.c */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int random_number()
{
	int r;
	r = rand();
	return r;
}

int main()
{
	srand(getpid());
	printf("%d\n", random_number());
	printf("%d\n", random_number());
	return 0;
}
