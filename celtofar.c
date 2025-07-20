#include <stdio.h>
void celtofar(int c)
{
	int f=(c*9/5)+32;
	printf("ans is %d",f);
}
int main()
{
	int co,cont;
	int c;
	do{
		printf("enter case(1)");
		scanf("%d",&co);
		switch(co)
		{
			case 1:
				printf("enter c");
				scanf("%d",&c);
				celtofar(c);
				
			}
    printf("would you like to continue? yes-1 no-0");
    scanf("%d",&cont);
}while(cont==1);
    return 0;
}

