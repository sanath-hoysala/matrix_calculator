#include<stdio.h> 
void add_matrix(struct a[i] )           // To add the matrix
{

}
void sub_matrix(struct a[i])
{

}
void mul_matrix(struct a[i])
{

}
void div_matrix(struct a[i])
{

}
void initial(n)
{
	printf("Select one of the following options :- \n
	1) Input a matrix \n
	2) Operate on previous answer \n");
	scanf("%d",&n);
	if(n==1)
		get_array();
}
void get_array(struct array a[i])
{
	scanf("Enter the size of row and column : %d %d", &a[i].r, &a[i].c);
	for(int c=0; c<a[i].c ; c++)
	{
		for(int r=0 ; r<a[i].r ; r++)
		{
			printf("Enter the value for a[%d][%d] : ",r,c);
			scanf(&a[i].a[r][c]);
		}
	}

}

struct array                // Data related to an array 
{
	int r;
	int c;
	int ar[100][100];
}a[100];
int n,i;                    // Global variable 

void get_array()
{
	scanf("Enter the number of rows and colums :", &a[i].r , &a[i].c );

int main()
{
	struct array a[100]; 
	initial(n);
		


}


















