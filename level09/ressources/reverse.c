#include <unistd.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;

	if (argc != 2 || !argv[1] || argv[1] == "")
		return (1);
	while (argv[1][i])
	{
		printf("%c", argv[1][i] - i);
		i++;
	}
	printf("\n");
	return (0);
}