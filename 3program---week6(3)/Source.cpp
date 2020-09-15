#include<stdio.h>
int main()
{
	int N;
	scanf_s("%d", &N);

	
	for (int i = 1;i <= N;i++)
	{
		for (int j = 1;j <= N;j++)
		{
			if (i == j || i + j == N+1)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
			
		}
		printf("\n");
	}


	return 0;
}