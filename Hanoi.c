#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:4996)//取消scanf返回值的警告

#include <stdio.h>
#include <assert.h>

int total;
void Hanoi(char,char,char,int);

//递归实现汉诺塔
int main()
{
	printf("请输入汉诺塔层数：>");
	int input;
	int n=scanf("%d", &input);
	total = 0;
	Hanoi('1', '2', '3', input);
	return 0;
}



void Hanoi(char a, char b, char c, int n)
{
	////n层汉诺塔思路 分两种情况 1 只有1层 直接1->3     2 n>1  先把n-1层1->2  然后把第n层1->3  然后n-1层2-》3
	assert(n > 0);//n不能为负或者0
	if (n==1)
	{
		printf("%d:%c->%c  ", total++,a, c);
	}
	else
	{
		Hanoi(a, c, b, n - 1);
		printf("%d:%c->%c  ", total++, a, c);
		Hanoi(b, a, c, n - 1);
	}

}