#include <stdio.h>

int main(int argc, char * argv[]) 
{
	char country[3] = "USA";
	printf ("%c%c\n", country[0], country[1]);
	printf ("%c%c%c\n", country[0], country[1], country[2]);
	printf ("%s\n", country);
	return 0;
}
