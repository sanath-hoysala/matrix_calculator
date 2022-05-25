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
struct array                // Data related to an array 
{
	int r;
	int c;
	int ar[100][100];
}a[100];


void get_array()
{
	scanf("Enter the number of rows and colums :", &array.r , &array.c );

int main()
{
	struct array a[100]; 
	int n,m,k;
	printf("To multiply enter : 1 \n To divide enter : 2 \n");
	scanf("%d",&n);
	while(k!=0)
	{
		printf("Enter the array :\n");
		while(m!=0)
		{
			get_array(a[i]);
			printf("Do you want to enter another array to operate on if YES enter '1' and if NO enter '0':\n");
			scanf("%d\n",&m);
			i++;
		}
		if(n==1)
			mul_martix(a);
		else if(n==2)
			div_matrix(a);





















