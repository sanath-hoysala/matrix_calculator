#include<stdio.h>                                     // Global variable
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
void div_matrix(struct array a[],struct array s[],int i );
void invert(struct array a[],struct array s[],int i);
void scalar(struct array a[],int n,int i);
void get_array(struct array a[],int n,int i);
// ------------------------------------------------------------------------------------------------------------------------               
int main()
{
	int o=0,k=1;
	int i=0,n;
	while(k!=0)
	{
		if(o=0)
		{
			get_array(a,1,i);
			o++;
		}
		else
		{
				printf("You can do the following operations on the matrices \n");
				printf("1. Addition\n" );
				printf("2. Subtraction\n ");
				printf("3. Multiplication\n");
				printf("4. Division \n");
				printf("5. Transpose \n");
				printf("6. Scalar multiplication\n");
				printf("7. Exit\n");
				scanf("%d\n",&n);
			switch(n)
			{
				case 1 : add_matrix(a,s,i);
						break;
				case 2 : sub_matrix(a,s,i);
						break;
				case 3 : mul_matrix(a,s,i);
						break;
				case 4 : div_matrix(a,s,i);
						break;
				case 5 : invert(a,s,i);
						break;
				case 6 : scalar(a,n,i);
						break;
				case 7 : k=1;
						break;
				default : printf("Invalid input");
						 break;
			}
		}
	}
}



// ---------------------------------------------------------------------------------------------------------------------
void get_array(struct array a[],int n,int i)
{
	if(n==1)
	{
		scanf("Enter the size of row and column of first matrix: %d %d", &a[i].r, &a[i].c);   // Getting first matrix
		for(int c=0; c<a[i].c ; c++)
		{
			for(int r=0 ; r<a[i].r ; r++)
			{
				printf("Enter the value for a[%d][%d] : ",r,c);
				scanf("%d",&a[i].ar[r][c]);
			}
		}
		scanf("Enter the size of row and column of second matrix: %d %d", &a[i+1].r, &a[i+1].c);  // Getting second matrix
		for(int c=0; c<a[i+1].c ; c++)
		{
			for(int r=0 ; r<a[i+1].r ; r++)
			{
				printf("Enter the value for a[%d][%d] : ",r,c);
				scanf("%d",&a[i+1].ar[r][c]);
			}
		}
	}
	else if(n==2)
		{
			for(int c=0; c<a[i].c ; c++)
			{
				for(int r=0 ; r<a[i].r ; r++)
				{
					a[i+1].ar[r][c]=s[i].ar[r][c];
				}
			}
			
		}
	else if (n==3)
		{
		for(int c=0; c<a[i].c ; c++)
		{
			for(int c=0; c<a[i].c ; c++)
			{
				for(int r=0 ; r<a[i].r ; r++)
				{
					printf("Enter the value for a[%d][%d] : ",r,c);
					scanf("%d",&a[i].ar[r][c]);
				}
			}
		}
`		}
	else
	{
		printf("Invalid input");
	}

}
void add_matrix(struct array a[],struct array s[],int i )           // To add the matrices
{
	get_array(a,1,0);
	if(a[i].r==a[i+1].r && a[i].c==a[i+1].c)
	{
		for(int c=0; c<a[i].c ; c++)
		{
			for(int r=0 ; r<a[i].r ; r++)
			{
				s[0].ar[r][c]=a[i].ar[r][c]+a[i+1].ar[r][c];
			}
		}
	}
	else
	{
		printf("Both matrix should be of same order\n");
	}

}
void sub_matrix(struct array a[],struct array s[],int i)            // To subtract matrices
{
	get_array(a,1,0);
	if(a[i].r==a[i+1].r && a[i].c==a[i+1].c)
	{
		for(int c=0; c<a[i].c ; c++)
		{
			for(int r=0 ; r<a[i].r ; r++)
			{
				s[0].ar[r][c]=a[i].ar[r][c]-a[i+1].ar[r][c];
			}
		}
	}
	else
	{
		printf("Both matrix should be of same order\n");
	}
}
void mul_matrix(struct array a[],struct array s[],int i )            // To multiply matrices
{
	get_array(a,1,0);
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
void div_matrix(struct array a[],struct array s[],int i )            // To divide matrices
{

}
void invert(struct array a[], struct array s[],int i)
{

}
void scalar(struct array a[],int n,int i)
{
	printf("Enter the scalar number: \n");
	scanf("%d\n",&n);
	get_array(a,3,1);
	for(int c=0; c<a[i].c ; c++)
		{
			for(int r=0 ; r<a[i].r ; r++)
			{
				a[i].ar[r][c]=n*a[i].ar[r][c];
			}
		}
}




















