#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	
	int red[6] = {},blue = rand()%16+1;
	
	for(int i = 0,j; i<6; )
	{
		red[i] = rand()%33+1;
		for(j=0; j<i; j++)
		{
			if(red[i] == red[j])
			{
				break;	
			}
		}
		if(j == i)
		{
			i++;
		}
	}
	
	printf("������һ��˫ɫ�����:");
	int ret[7] = {},cnt = 0;
	for(int i=0; i<6; i++)
	{
		scanf("%d",&ret[i]);
		for(int j=0; j<6; j++)
		{
			if(red[j] == ret[i])
			{
				cnt++;
				break;
			}
		}
	}
	scanf("%d",&ret[6]);
	if(6 == cnt && blue == ret[6])
	{
		printf("һ�Ƚ�\n");
	}
	else if(6 == cnt)
	{
		printf("���Ƚ�\n");
	}
	else if(5 == cnt && blue == ret[6])
	{
		printf("���Ƚ�\n");
	}
	else if(5 == cnt || (4 == cnt && blue == ret[6]))
	{
		printf("�ĵȽ�\n");
	}
	else if(4 == cnt || (3 == cnt && blue == ret[6]))
	{
		printf("��Ƚ�\n");
	}
	else if(blue == ret[6])
	{
		printf("���Ƚ�\n");	
	} 
	else
	{
		printf("���ź�G��\n"); 
	}
	printf("�н�����Ϊred:");
	for(int i=0; i<6; i++)
	{
		printf("%d ",red[i]);
	}
	printf("blue:%d\n",blue);
	
}
			



 





 

 
