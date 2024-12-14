/* struct.c */

#include <stdio.h>
#include <string.h>

struct person
{
	char title[8];
	char lastname[32];
	int age;
};

int main()
{
	struct person gaurav;
	printf("%ld\n", sizeof(gaurav.title));

	strncpy(gaurav.title, "Doctor", 7);
	strncpy(gaurav.lastname, "Palariya", 31);
	gaurav.age = 20;
	printf("%ld\n", sizeof(gaurav.title));

	printf("%s %s has age %d\n", gaurav.title, gaurav.lastname, gaurav.age);
	return 0;
}
