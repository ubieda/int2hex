#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main(size_t argc, char *argv[])
{
	if (argc < 2) {
		printf("Integer value to !\n");
		return -1;
	}

	int32_t int_value = atoi(argv[1]);

	printf("Int: %d, Hex: 0x%08x\n", int_value, int_value);

	return 0;
}
