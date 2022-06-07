#include<stdio.h> 
int n,i=0;                                    // Global variable
struct array                                  // Data related to an array 
{
	int r;
	int c;
	int ar[100][100];
}a[100],s[1];  
// Declaring all the functions 
void add_matrix(struct array a[i]);  
void sub_matrix(struct array a[i]);
void mul_matrix(struct array a[i]);
void div_matrix(struct array a[i]);
void invert(struct array a[i]);
void get_array(int n);
void initial(int n); 
// -----------------------------------------------------------------------------------------------------------------------               
int main()
{
	struct array a[100]; 
	int o=0;
	initial(1);
	while(True):
	{
		if(o=0)
			get_array(1);
			o++;
		else
		{
			printf("You can do the following operations on the matrices --\n
			1. Addition \n
			2. Subtraction \n
			3. Multiplication \n
			4. Division \n
			5. Transpose \n
			6. Scalar multiplication\n");
			scanf(&n);
			switch(n)
			{
				case 1 : add_matrix();
						break;
				case 2 : sub_matrix();
						break;
				case 3 : mul_matrix();
						break;
				case 4 : div_matrix();
						break;
				case 5 : invert();
						break;
				default : exit(0);
			}
		}
	}
}



// ---------------------------------------------------------------------------------------------------------------------
void initial(int n)                                     // To initialize 
{
	printf("You can do the following operations on the matrices\n
	1. Addition \n
	2. Subtraction \n
	3. Multiplication \n
	4. Division \n
	5. Transpose \n
	6. Scalar multiplication\n");
	
}
void get_array(int n)
{
	if(n==1)
	{
		scanf("Enter the size of row and column of first matrix: %d %d", &a[i].r, &a[i].c);   // Getting first matrix
		for(int c=0; c<a[i].c ; c++)
		{
			for(int r=0 ; r<a[i].r ; r++)
			{
				printf("Enter the value for a[%d][%d] : ",r,c);
				scanf(&a[i].ar[r][c]);
			}
		}
		scanf("Enter the size of row and column of second matrix: %d %d", &a[i].r, &a[i].c);  // Getting second matrix
		for(int c=0; c<a[i+1].c ; c++)
		{
			for(int r=0 ; r<a[i+1].r ; r++)
			{
				printf("Enter the value for a[%d][%d] : ",r,c);
				scanf(&a[i+1].ar[r][c]);
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
	else
	{
		printf("Invalid input");
		initial(1);
	}

}
void add_matrix(struct array a[i] )           // To add the matrices
{
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
void sub_matrix(struct array a[i])            // To subtract matrices
{
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





















