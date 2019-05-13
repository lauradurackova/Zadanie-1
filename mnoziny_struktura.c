#include <stdio.h>
#include <math.h>

typedef struct{
	int* pole;
	unsigned int dlzka;
}MNC;

int main(void)
{
	int i,j,n=0,h=0;
	int A[6]={3,9,4,8,7,1}, B[6]={1,2,3,4,5,6}, C[6]={}, D[12]={};
	MNC a,b,c,d;
	
	a.pole=A;
	b.pole=B;
	c.pole=C;
	d.pole=D;
	
	printf("mnozina A: ");
	for(i=0;i<6;i++)
	{
		printf("%d ",A[i]);
	}
	
	printf("\n");
	
	printf("mnozina B: ");
	for(i=0;i<6;i++)
	{
		printf("%d ",B[i]);
	}
  
 }
