#include<stdio.h> 
void add_matrix(a)           // To add the matrix
{

}
void sub_matrix(a)
{

}
void mul_matrix(a)
{

}
void div_matrix(a)
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
	scanf("Enter the size of row and column : %d %d", &s[i].r, &a[i].c);
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
	scanf("Enter the number of rows and colums :", &array.r , &array.c );

int main()
{
	struct array a[100]; 
	initial(n);
		


}


















