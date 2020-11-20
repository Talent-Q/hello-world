#include<stdio.h>

void bubbleSort(int a[], int len);

int main(void)
{
	int a[] = { 22,66,44,88,11,324,66,44,33,22,10 };
	int len = sizeof(a) / sizeof(int);

	bubbleSort(a, len);

	int i;
	for (i = 0; i < len; i++)
		printf("%d ", a[i]);

	return 0;
}

void bubbleSort(int a[], int len)
{
	int i, j, tmp;
	for(i=0;i<len-1;i++)
		for(j=0;j<len-i-1;j++)
			if (a[j] > a[j + 1])
			{
				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
}