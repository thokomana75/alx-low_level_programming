#include <stdio.h>
#include "main.h"

int main() {
	char c = 'A';
	int bytes_written = _putchar(c);
	printf("Number of bytes written: %d\n", bytes_written);
	return 0;
}
