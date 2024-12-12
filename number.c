/* numbers.c */

#include <stdio.h>

int main()
{
	int x, y, answer;
	
	printf("Enter first number\n");
	scanf("%d", &x);

	printf("Enter the second number\n");
	scanf("%d", &y);

	answer = x + y;
	printf("Answer is %d\n", answer);
	return 0;
}
