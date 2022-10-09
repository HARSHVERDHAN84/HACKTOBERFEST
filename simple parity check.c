#include<stdio.h>
#include<stdlib.h>

void display(int b[100], int n)
{
	int i;
	for (i=0;i<n;i++)
		printf("%d", b[i]);
	printf("\n");
}
int error_correction(int b[100], int n, int a)
{
	b[n]=a;
	return n+1;
}
int verify(int b[100], char p, int n)
{
	int i, c=0;
	for(i=0;i<n;i++)
		if(b[i]==1)
			c++;
	c=c%2;
	if ((p=='e'&&c==0)||(p=='o'&&c==1))
		return 0;
	else
		return 1;
}

int main()
{
	char p, user;
	int n, i, v, b[100];
	printf("Enter the type of paritycheck to be used('o' for odd and 'e' for even): ");
	scanf("%c",&p);
	while(p!=111 && p!= 101 )
	{
	  printf("Enter valid input");
	  exit(1);
	}

	printf("How many bits are there  in message: ");
	scanf("%d",&n);
	printf("Enter the binary message:\n");
	for(i=0;i<n;i++)
	{
		printf("Enter bit no %d: ", i+1);
		scanf("%d", &b[i]);
		while(b[i]!=1&&b[i]!=0)
		{
			printf("Enter valid input: ");
			scanf("%d", &b[i]);
		}
	}
	v=verify(b, p, n);

		n=error_correction(b, n, v);
		printf("Message to be sent is: ");
		display(b, n);
}
