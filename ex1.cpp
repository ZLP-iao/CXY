#include<stdio.h>
/*#include <stdlib.h>*/
#include <string.h>
int k,k1,k2,k3,r,s;//记录a
char p[10];//p可以为等于、增加、减少
char q1[]="等于",q2[]="减少",q3[]="增加";
char a[10],t[10];//输入文字数字
char b[]="十",c[]="九",d[]="八",e[]="七",f[]="六",g[]="五",h[]="四",i[]="三",j[]="二",m[]="一",n[]="零";
int ZH(char a[10])//汉字->数字
{
		if(strcmp(a,b)==0)
		{	k=10;	}
		else if(strcmp(a,c)==0)
		{	k=9;	}
		else if(strcmp(a,d)==0)
		{	k=8;	}
		else if(strcmp(a,e)==0)
		{	k=7;	}
		else if(strcmp(a,f)==0)
		{	k=6;	}
		else if(strcmp(a,g)==0)
		{	k=5;	}
		else if(strcmp(a,h)==0)
		{	k=4;	}
		else if(strcmp(a,i)==0)
		{	k=3;	}
		else if(strcmp(a,j)==0)
		{	k=2;	}
		else if(strcmp(a,m)==0)
		{	k=1;	}
		else if(strcmp(a,n)==0)
		{	k=0;/*printf("k:%d\n",k);*/	}
		else
			printf("k:NULL\n");
		return k;
}
int ZH1(char a[10])//汉字->数字
{
		if(strcmp(a,b)==0)
		{	k1=10;	}
		else if(strcmp(a,c)==0)
		{	k1=9;	}
		else if(strcmp(a,d)==0)
		{	k1=8;	}
		else if(strcmp(a,e)==0)
		{	k1=7;	}
		else if(strcmp(a,f)==0)
		{	k1=6;	}
		else if(strcmp(a,g)==0)
		{	k1=5;	}
		else if(strcmp(a,h)==0)
		{	k1=4;	}
		else if(strcmp(a,i)==0)
		{	k1=3;	}
		else if(strcmp(a,j)==0)
		{	k1=2;	}
		else if(strcmp(a,m)==0)
		{	k1=1;	}
		else if(strcmp(a,n)==0)
		{	k1=0;/*printf("k:%d\n",k1);*/	}
		else
			printf("k:NULL\n");
		return k1;
}
int ZH2(char a[10])//汉字->数字
{
		if(strcmp(a,b)==0)
		{	k2=10;	}
		else if(strcmp(a,c)==0)
		{	k2=9;	}
		else if(strcmp(a,d)==0)
		{	k2=8;	}
		else if(strcmp(a,e)==0)
		{	k2=7;	}
		else if(strcmp(a,f)==0)
		{	k2=6;	}
		else if(strcmp(a,g)==0)
		{	k2=5;	}
		else if(strcmp(a,h)==0)
		{	k2=4;	}
		else if(strcmp(a,i)==0)
		{	k2=3;	}
		else if(strcmp(a,j)==0)
		{	k2=2;	}
		else if(strcmp(a,m)==0)
		{	k2=1;	}
		else if(strcmp(a,n)==0)
		{	k2=0;/*printf("k:%d\n",k2);*/	}
		else
			printf("k:NULL\n");
		return k2;
}
char ZH3(int s)//数字->汉字
{
		if(s==0)
		{	char t[]="零";
			printf("t:%s\n",t);	}
		else if(s==1)
		{	char t[]="一";printf("%s\n",t);	}
		else if(s==2)
		{	char t[]="二";printf("%s\n",t);	}
		else if(s==3)
		{	char t[]="三";printf("%s\n",t);	}
		else if(s==4)
		{	char t[]="四";printf("%s\n",t);	}
		else if(s==5)
		{	char t[]="五";printf("%s\n",t);	}
		else if(s==6)
		{	char t[]="六";printf("%s\n",t);	}
		else if(s==7)
		{	char t[]="七";printf("%s\n",t);	}
		else if(s==8)
		{	char t[]="八";printf("%s\n",t);	}
		else if(s==9)
		{	char t[]="九";printf("%s\n",t);	}
		else if(s==10)
		{	char t[]="十";printf("%s\n",t);	}
		else
			printf("t:NULL\n");
		return t[10];
}
void main()
{
	printf("%s %s ","整数","气温");
	scanf("%s",&p);//p可以为等于、增加、减少
	if(strcmp(p,q1)==0)//p为等于
	{	scanf("%s",&a);ZH(a);	}

	printf("%s ","气温");
	scanf("%s",&p);//p可以为等于、增加、减少
	if(strcmp(p,q2)==0)//p为减少
	{	scanf("%s",&a);ZH1(a);k=k-k1;	}
	else if(strcmp(p,q3)==0)//p为增加
	{	scanf("%s",&a);ZH2(a);k=k+k2;
		/*printf("k:%d\n",k);*/	}

	printf("%s ","气温");
	scanf("%s",&p);//p可以为等于、增加、减少
	if(strcmp(p,q2)==0)//p为减少
	{	scanf("%s",&a);ZH1(a);r=k-k1;
		/*printf("r:%d\n",r);*/	}
	else if(strcmp(p,q3)==0)//p为增加
	{	scanf("%s",&a);ZH2(a);r=k+k2;
		/*printf("r:%d\n",r);*/	}
	printf("%s %s\n","看看","气温");
	printf("%s %s %s %s %s %s %s %s %s %s\n","如果","气温","大于","八","则","看看","你好，世界","否则","看看","冻死我了");
	if(r>8)
	{	ZH3(r);printf("你好，世界\n");	}
	else
	{	ZH3(r);printf("冻死我了\n");	}
}
