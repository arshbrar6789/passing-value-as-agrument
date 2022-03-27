#include<stdio.h>
int modify(int[], int);

int main()
{
	int a[10],i;
	
	for (i = 0; i <= 9; i++)
	{
		printf("Enter %d element in array:", i);   // getting values in array;
		scanf_s("%d", &a[i]);
	}
	a[i]=modify(a, 10);                        // calling a function and passing arguments;
	for (i = 0; i <= 9; i++)
		printf("Value at %d is: %d\n", i, a[i]);
	return(0);
}

int modify(int a[], int b)                     // recieving array 
{
	int i;
	for (i = 0; i <= 9; i++)
	{
		a[i] = a[i] * 3;
	}
	return(a[i]);
}