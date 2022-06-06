#include<stdio.h> 
int n,i;                                      // Global variable
struct array                                  // Data related to an array 
{
	int r;
	int c;
	int ar[100][100];
}a[100],s[1];                            
void add_matrix(struct array a[i] )           // To add the matrices
{

}
void sub_matrix(struct array a[i])            // To subtract matrices
{

}
void mul_matrix(struct array a[i])            // To multiply matrices
{
	int p,q,r;
	for(int p=0; p<a[i].c ;p++)
	{
		q=0;
		for(int q=0 ; q<a[i].r ; q++)
		{
			r=0;
			for(int r=0; r<a[i].r ; r++)
			{
				s[i].ar[p][q] = a[i].ar[p][r] * a[i+1].ar[r][q];   // Multiplication algorithm
			}
		}
	}

}
void div_matrix(struct array a[i])            // To divide matrices
{

}
void invert(struct array a[i])
{

}
void initial(n)                                // To initialize 
{
	printf("Select one of the following options :- \n
	1) Input a matrix \n
	2) Operate on previous answer \n");
	scanf("%d",&n);
	if(n==1)
		get_array();
	else if(n==2)
	{

	}
	else	
		{
			printf("Invalit input");
			initial(n);
		}
		
}
void get_array(struct array a[i])
{
	scanf("Enter the size of row and column : %d %d", &a[i].r, &a[i].c);
	for(int c=0; c<a[i].c ; c++)
	{
		for(int r=0 ; r<a[i].r ; r++)
		{
			printf("Enter the value for a[%d][%d] : ",r,c);
			scanf(&a[i].ar[r][c]);
		}
	}

}
int main()
{
	struct array a[100]; 
	initial(n);

		


}


















