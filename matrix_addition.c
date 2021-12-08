#include <stdio.h>

int main ()
{
	//define variables
	
	int n, m, p;
	int i, j, k;
	double temp;

	printf ("\n This program will add  a MxN Matrix A with an MxN Matrix B");
	printf ("\n Give Number of rows of matrix A or B N= ");
	scanf ("%d", &n);
	printf ("\n Give Number of columns of matrix A or B M= ");
	scanf ("%d",&m);

	//We define the matrices
	double a [m] [n];
	double b [m] [n];
	double c [m] [n];
	
	//Creates matrix A
	printf("\n Give elements of matrix A");
	for (i=0;i<n;i++)
	{
		for (j=0;j<m;j++)
		{
			printf ("\n A[%d][%d] =", i+1, j+1);
			scanf ("%lf", &a[i][j]);	
		}
	}
	
	//Creates matrix B
	printf("\n Give elements of matrix B");
	for (i=0;i<n;i++)
	{
		for (j=0;j<m;j++)
		{
			printf ("\n B[%d][%d] =", i+1, j+1);
			scanf ("%lf", &b[i][j]);	
		}
	}
	
	
	//Adds matrixies A and B
	for (i=0;i<n;i++)
	{
		
		for (j=0;j<m;j++)
		{
			c [i][j] = a[i][j] + b[i][j];
		}
		
	}
	
	
	//Prints the matrix
	for (i=0;i<n;i++)
	{
		
		for (j=0;j<m;j++)
		{
			printf ("\t %lf", c[i][j]);
		}
		printf ("\n");
	}
    return 0;
}
