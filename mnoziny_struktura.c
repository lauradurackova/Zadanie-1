#include <stdio.h>
#include <math.h>

typedef struct{
	int* pole;
	unsigned int dlzka;
}MNC;

void prienik(MNC* a, MNC* b, MNC* c)
{
	int i,j,h=0;
	
	for(i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
		{
			if(a->pole[i]==b->pole[j])
			{	
				c->pole[h]=a->pole[i];
				h++;
			}
		}
	}
	
	for(i=0;i<h;i++)
	{
		printf("%d ",c->pole[i]);
	}
}

void zjednotenie(MNC* a, MNC* b, MNC* d)
{
	int i,j=0,n=0,h=0;
	
	for(i=0;i<6;i++)
	{
		while(d->pole[j]!=0)
		{
			if(a->pole[i]==d->pole[j])
				n=1;
			j++;
		}
		if(n==0)
		{
			d->pole[j]=a->pole[i];
			h++;
		}
	}
	
	for(i=0;i<6;i++)
	{
		j=0;
		n=0;
		while(d->pole[j]!=0)
		{
			if(b->pole[i]==d->pole[j])
				n=1;
			
			j++;
		}
		if(n==0)
		{
			d->pole[j]=b->pole[i];
			h++;
		}
	}
	
	for(i=0;i<h;i++)
	{
		printf("%d ",d->pole[i]);
	}
}


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
	
	printf("\n");
	
	printf("prienik mnozin: ");
	prienik(&a,&b,&c);
	
	printf("\n");
	
	printf("zjednotenie mnozin: ");	
	zjednotenie(&a,&b,&d);	
  
 }
