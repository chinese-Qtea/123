#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int num=0; 
	char hows[20],what[20];
	int how(char how[20]); 
	int whats(char how[20]);
	strcpy(hows,"����"); 
	strcpy(what,"����"); 
	if(!how(hows))num++;
	if(!whats(what))num++;
	if(num==2)printf("��������");
	else printf("�����쳣"); 
	system("pause");
	return 0;
}
int how(char how[20])
{
    if (strcmp(how, "����") == 0)return 0;
    else return 1; 
}
int whats(char how[20])
{
    if (strcmp(how, "����") == 0)return 0;
    else return 1; 
}
