#include<stdio.h>
/*#include <stdlib.h>*/
#include <string.h>
int k,k1,k2,k3,r,s;//��¼a
char p[10];//p����Ϊ���ڡ����ӡ�����
char q1[]="����",q2[]="����",q3[]="����";
char a[10],t[10];//������������
char b[]="ʮ",c[]="��",d[]="��",e[]="��",f[]="��",g[]="��",h[]="��",i[]="��",j[]="��",m[]="һ",n[]="��";
int ZH(char a[10])//����->����
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
int ZH1(char a[10])//����->����
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
int ZH2(char a[10])//����->����
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
char ZH3(int s)//����->����
{
		if(s==0)
		{	char t[]="��";
			printf("t:%s\n",t);	}
		else if(s==1)
		{	char t[]="һ";printf("%s\n",t);	}
		else if(s==2)
		{	char t[]="��";printf("%s\n",t);	}
		else if(s==3)
		{	char t[]="��";printf("%s\n",t);	}
		else if(s==4)
		{	char t[]="��";printf("%s\n",t);	}
		else if(s==5)
		{	char t[]="��";printf("%s\n",t);	}
		else if(s==6)
		{	char t[]="��";printf("%s\n",t);	}
		else if(s==7)
		{	char t[]="��";printf("%s\n",t);	}
		else if(s==8)
		{	char t[]="��";printf("%s\n",t);	}
		else if(s==9)
		{	char t[]="��";printf("%s\n",t);	}
		else if(s==10)
		{	char t[]="ʮ";printf("%s\n",t);	}
		else
			printf("t:NULL\n");
		return t[10];
}
void main()
{
	printf("%s %s ","����","����");
	scanf("%s",&p);//p����Ϊ���ڡ����ӡ�����
	if(strcmp(p,q1)==0)//pΪ����
	{	scanf("%s",&a);ZH(a);	}

	printf("%s ","����");
	scanf("%s",&p);//p����Ϊ���ڡ����ӡ�����
	if(strcmp(p,q2)==0)//pΪ����
	{	scanf("%s",&a);ZH1(a);k=k-k1;	}
	else if(strcmp(p,q3)==0)//pΪ����
	{	scanf("%s",&a);ZH2(a);k=k+k2;
		/*printf("k:%d\n",k);*/	}

	printf("%s ","����");
	scanf("%s",&p);//p����Ϊ���ڡ����ӡ�����
	if(strcmp(p,q2)==0)//pΪ����
	{	scanf("%s",&a);ZH1(a);r=k-k1;
		/*printf("r:%d\n",r);*/	}
	else if(strcmp(p,q3)==0)//pΪ����
	{	scanf("%s",&a);ZH2(a);r=k+k2;
		/*printf("r:%d\n",r);*/	}
	printf("%s %s\n","����","����");
	printf("%s %s %s %s %s %s %s %s %s %s\n","���","����","����","��","��","����","��ã�����","����","����","��������");
	if(r>8)
	{	ZH3(r);printf("��ã�����\n");	}
	else
	{	ZH3(r);printf("��������\n");	}
}
