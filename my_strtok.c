/*************************************************************************
  > File Name: my_strtok.c
  > Author: lyx
  > Mail: 694215916@qq.com 
  > Created Time: 2017年09月26日 星期二 17时18分17秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
int main(void)
{
	char buf[]="hello@boy@this@is@heima";
	char*temp = strtok(buf,"@");
	while(temp)
	{
		printf("%s ",temp);
		temp = strtok(NULL,"@");
	}
	return 0;
}
