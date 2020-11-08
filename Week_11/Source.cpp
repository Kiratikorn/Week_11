#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
void check_last(char* x, int n)
{
	char A;
	char last=0;
	for (int i = 0; i < n; i++)
	{
		if (x[i] >= 'A' && x[i] <= 'Z')
		{
			A = x[i] + 32;
		}
		else
		{
			A = x[i];
		}
		if (A > last)
		{
			last = A;
		}
	}
	if (last >= 'a' && last <= 'z')
	{
		printf("%c", last);
	}
	else
	{
		printf("No?");
	}
}
int main()
{
	char a[100];
	char last;
	int n;
	scanf("%[^\n]", a);
	n = strlen(a);
	printf("Last Alphabet is ");
	check_last(a, n);
	return 0;
}