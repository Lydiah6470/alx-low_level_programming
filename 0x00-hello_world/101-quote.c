#include <stdio.h>
#include <unistd.h>
/**
 * main- prints string to stdout.
 * return: 0 if success
 */
int main(void)
{
	write(2, "and that peice of art is useful\" -Dora Korpar, 2015-10-19\n");
	return (0);
}
