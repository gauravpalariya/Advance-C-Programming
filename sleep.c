/* sleep.c */

#include <stdio.h>
#include <unistd.h>

int main()
{
	printf("Wait while processing....");
	fflush(stdout);
	sleep(2);
	printf("ok\n");
	return 0;
}
