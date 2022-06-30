#include<stdio.h>                                     // Global variable
#include<stdlib.h>
int i=0,n=0;
struct array                                  // Data related to an array 
{
	int r;
	int c;
	int ar[100][100];
}a[100],s[1];  
// Declaring all the functions 
void add_matrix(struct array a[],struct array s[],int i );  
void sub_matrix(struct array a[],struct array s[],int i );
void mul_matrix(struct array a[],struct array s[],int i );
void print_array(struct array s[]);
void scalar(struct array a[], struct array s[],int n,int i);
void get_array(struct array a[],int n,int i);
// ------------------------------------------------------------------------------------------------------------------------               
int main()
{
	int q;
	char ans;
	do
	{
		printf("You can do the following operations on the matrices \n");
		printf("1. Addition\n" );
		printf("2. Subtraction\n");
		printf("3. Multiplication\n");
		printf("4. Scalar multiplication\n");
		scanf("%d%*c",&q);
		switch(q)
		{
		case 1: get_array(a,1,0);
				add_matrix(a,s,i);
				break;
		case 2: get_array(a,1,0);
				sub_matrix(a,s,i);
				break;
		case 3: get_array(a,1,0);
				mul_matrix(a,s,i);
				break;
		case 4: scalar(a,s,n,i);
				break;
		default: printf("Invalid input\n");
				 break;
		}
		printf("Do you want to exit Y/N : ");
		scanf(" %c",&ans);
		if(ans=='Y'||ans=='y')
			printf("---------------------------------------------------------\n");
	} while(ans =='Y' || ans =='y');
	
	
	
	
}


// ---------------------------------------------------------------------------------------------------------------------
void print_array(struct array s[])
{
	printf("The resultant array is:\n");
	for(int r=0; r<s[i].r ; r++)
		{
			for(int c=0 ; c<s[i].c ; c++)
			{
				printf("%d\t",s[i].ar[r][c]);
			}
			printf("\n");
		}
}
void get_array(struct array a[],int n,int i)
{
	if(n==1)
	{
		printf("Enter the size of row and column of first matrix: ");
		scanf("%d %d", &a[i].r, &a[i].c);   // Getting first matrix
		for(int r=0; r<a[i].r ; r++)
		{
			for(int c=0 ; c<a[i].c ; c++)
			{
				printf("Enter the value for a[%d][%d] : ",r,c);
				scanf("%d",&a[i].ar[r][c]);
			}
		}
		printf("Enter the size of row and column of second matrix: ");
		scanf("%d %d", &a[i+1].r, &a[i+1].c);  // Getting second matrix
		for(int r=0; r<a[i+1].r ; r++)
		{
			for(int c=0 ; c<a[i+1].c ; c++)
			{
				printf("Enter the value for a[%d][%d] : ",r,c);
				scanf("%d",&a[i+1].ar[r][c]);
			}
		}
	}
	else if(n==2)
		{
			for(int c=0; c<a[i].c ; c++)							//To use previous answer 
			{
				for(int r=0 ; r<a[i].r ; r++)
				{
					a[i+1].ar[r][c]=s[i].ar[r][c];
				}
			}
			
		}
	else
		{
		printf("Enter the size of row and column of the matrix: ");
		scanf("%d %d", &a[i].r, &a[i].c);  
		for(int r=0; r<a[i].r ; r++)
		{
			for(int c=0 ; c<a[i].c ; c++)
			{
				printf("Enter the value for a[%d][%d] : ",r,c);
				scanf("%d",&a[i].ar[r][c]);
			}
		}
		}
	

}
void add_matrix(struct array a[],struct array s[],int i )           // To add the matrices
{
	s[0].r=a[i].r;
	s[0].c=a[i].c;
	if(a[i].r==a[i+1].r && a[i].c==a[i+1].c)
	{
		for(int r=0; r<a[i].r ; r++)
		{
			for(int c=0 ;c<a[i].c ; c++)
			{
				s[0].ar[r][c]=a[i].ar[r][c]+a[i+1].ar[r][c];
			}
		}
	}
	else
	{
		printf("Both matrix should be of same order\n");
	}
	print_array(s);
}
void sub_matrix(struct array a[],struct array s[],int i)            // To subtract matrices
{

	if(a[i].r==a[i+1].r && a[i].c==a[i+1].c)
	{
		s[0].r=a[i].r;
		s[0].c=a[i].c;
		for(int r=0; r<a[i].r ; r++)
		{
			for(int c=0 ; c<a[i].c ; c++)
			{
				s[0].ar[r][c]=a[i].ar[r][c]-a[i+1].ar[r][c];
			}
		}
	}
	else
	{
		printf("Both matrix should be of same order\n");
	}
	print_array(s);
}
void mul_matrix(struct array a[],struct array s[],int i )            // To multiply matrices
{
	int p,q,r;
	s[0].r=a[i].r;
	s[0].c=a[i+1].c;
	if(a[i].c==a[i+1].r)
	{
	for(int p=0; p<a[i].c ;p++)
	{
		q=0;
		for(int q=0 ; q<a[i].r ; q++)
		{
			r=0;
			for(int r=0; r<a[i].r ; r++)
			{
				s[0].ar[p][q] += a[i].ar[p][r] * a[i+1].ar[r][q];   // Multiplication algorithm
			}
		}
	}
	print_array(s);
	}
	else 
		printf("Incompatable row and column!!\n");
	

}
void scalar(struct array a[],struct array s[],int n,int i)
{
	printf("Enter the scalar number: ");
	scanf("%d%*c",&n);
	get_array(a,3,0);
	s[0].r=a[i].r;
	s[0].c=a[i].c;
	for(int r=0; r<a[i].r ; r++)
	{
		for(int c=0 ; c<a[i].c ; c++)
		{
			s[0].ar[r][c]=n*a[i].ar[r][c];
		}
	}
	print_array(s);
}


















