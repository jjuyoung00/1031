#include<stdio.h>
int main()
{
	int i,j,tot_rep,rep;
	char ch;
	
	printf("반복할 횟수입력:");
	scanf("%d",&tot_rep);
	
	
	for(i=0; i < tot_rep; i++)
	{
		printf("문자와 회수 입력:");
		scanf("%c %d", &ch,&rep);
		for(j=0;j < rep;i++){
			printf("%c",ch);
		}
		printf("\n");
	}
}
