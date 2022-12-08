#include <stdio.h>
/**
 * Description: main- Prints size of variable types to stdout.
 * Return: 0 if success.
 */
int main(void)
{
int a;
long int b;
long long int c;
char d;
float f;
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a int: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
