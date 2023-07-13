#include<stdio.h>
/**
 * main - Entry point
 * Return: always 0 (success)
 */
int main(void)
{
	print("size of a char: %lu byte(s)", sizeof(char));
	print("size of an int: %lu byte(s)", sizeof(int));
	print("size of a long int: %lu byte(s)", sizeof(long int));
	print("size of a long long int: %lu byte(s)", sizeof(long long int));
	print("size of a float: %lu byte(s)", sizeof(float));
	return(0);
}
