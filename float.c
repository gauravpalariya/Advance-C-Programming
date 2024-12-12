/* float.c */

#include <stdio.h>

int main()
{
	float pi, r, answer;

	printf("Enter the radius of circle\n");
	scanf("%f", &r);

	pi = 3.14;

	answer = pi * r * r;

	printf("The area of circle is %f\n", answer);

	return 0;
}
