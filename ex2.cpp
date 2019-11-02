#include<stdio.h>
#define nmax 100
int main ()
{
	int T[nmax];
	int i,j,n,VAL,existe;
do{
	printf("donner la taille du tableau ");
	scanf("%d",&n);
}while (n>nmax && n<1);
for(i=0;i<n;i++)
{
	printf("donner la valeur %d:",i);
	scanf("%d",&T[i]);
}
do{
	printf ("donner la valeur VAL : ");
	scanf("%d",&VAL);
}while(VAL>nmax && VAL<1);
existe=0;j=0; i=0;
do{
	if(VAL==T[i])
	{
	j=i;
	existe =1;
	}
	else
	i++;
}while(i<n && existe ==0);
if (existe)
printf (" la valeur existe %d dans la post %d",VAL,j);
else 
printf (" il n'existe pas ");
return 0;
}
