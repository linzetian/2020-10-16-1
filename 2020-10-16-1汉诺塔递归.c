//汉诺塔递归
#include<stdio.h>
int i = 1;//记录步数//用全局变量
Hanoi(int m, char a, char b, char c)
{
	if (m == 1)
		printf("第%d步：盘子从%c——>%c\n",i++,a, c);//A上一个盘子则，A移动到C
	else
	{
		Hanoi(m - 1, a, c, b);//m-1个盘子从A移动到B，C盘子为过度盘子，则c放在中间位置
		printf("第%d步：盘子从%c——>%c\n",i++, a, c);// A上一个盘子则，A移动到C
		Hanoi(m - 1, b, a, c);//m-1个盘子从B移动到C，A盘子为过度盘子，则A放在中间位置
	}
}
int main()
{
	int n = 0;
	//static int i = 1;如果用局部变量，函数调用的时候i传不过去，要用局部变量
	printf("请输入盘子个数：");
	scanf("%d",&n);
	Hanoi(n, 'A', 'B', 'C');
	return 0;
}
