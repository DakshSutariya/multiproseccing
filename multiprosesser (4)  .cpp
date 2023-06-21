#include<stdio.h>
int main()
{
	int a[10][10],tranpose[10][10],r,c;
	printf("Enter  rows and  cloumns: ");
	scanf ("%d %d,&r,&c");
	
	printf("\nEnter  matrix  elements :\n");
	for(int i = 0; i< r; ++i)
	for(int j = 0; j<c; ++j)
	{
		printf("Enter  elements a%d%d: ",i+1,j+1);
		scanf ("%d",&a[i][j]);
	}
	
	printf("\nEnter  matrix:\n");
	for(int i = 0; i<r; ++i)
	for(int j = 0; j<c; ++j)
	{
			printf ("%d",&a[i][j]);
			if (j == c - 1)
			printf("\n");
	}
	for (int i  = 0; i < r; ++i)
	for (int j  = 0; j < c; ++j)
	{
		transpose[i][j] = a[i][j];
	}
}
