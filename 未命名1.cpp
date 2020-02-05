#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
int main()
{
	int how(char how[20]);
	int sums(int num);
	void change(int number);
	int sum,witness,first,second,count,f;
	char a[20],b[20],c[20],d[20];
	scanf("%s %s %s %s",a,b,c,d);
	count=strlen(d);
	if(count==4)
	{
		f=d[0];
		if(f!=-54)sum=sums(f)*10;
		if(f==-54)sum=10+sums(d[2]);
	}
	if(count==6)
	{
		f=d[0];
		sum=sums(f)*10;
		f=d[4];
		sum+=sums(f);
	}
	if(count==2)sum=sums(d[0]);
    while(1)
	{
		scanf("%s ",a);
		if(strcmp(a,"看看")==0)break;
		scanf("%s %s",b,c); 
		witness=how(b);
		if(witness)sum+=sums(c[0]);
		else sum-=sums(c[0]);
	}
	if(sum<=10)change(sum);
	if(sum>=20)
	{
		second=sum%10;
		first=(sum/10)%10;
		change(first);
		printf("十");
		change(second); 
	}
	if(sum>10&&sum<20)
	{
		printf("十");
		second=sum%10;
		change(second); 
	}
}
void change(int number)
{
	if(number==0)printf("零");
	else if(number==1)printf("一"); 
	else if(number==2)printf("二"); 
	else if(number==3)printf("三"); 
	else if(number==4)printf("四"); 
	else if(number==5)printf("五"); 
	else if(number==6)printf("六"); 
	else if(number==7)printf("七"); 
	else if(number==8)printf("八"); 
	else if(number==9)printf("九"); 
	else if(number==10)printf("十"); 
}
int how(char how[20])
{
	if(strcmp(how,"减少")==0)return 0;
	else return 1; 
}
int sums(int num)
{
	if(num==-63)return 0;
	if(num==-46)return 1;
	if(num==-74)return 2;
	if(num==-56)return 3;
	if(num==-53)return 4;
	if(num==-50)return 5;
	if(num==-63)return 6;
	if(num==-58)return 7;
	if(num==-80)return 8;
	if(num==-66)return 9;
	if(num==-54)return 10;
}
