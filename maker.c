#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int ans, ans2, c;
	
	printf("[Length]   [Width]    [Characters To Use]: ");
	scanf("%d %d %c", &ans, &ans2, &c);

	printf("\n\n\n\n\n");

	for (int i = 0; i < ans; i++)
	{
		for (int j = 0; j < ans2; j++)
		{
			printf("%c ", c);
		}
		printf("\n");
	}

	printf("\n\n\n");

	return 0;
}