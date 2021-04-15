#define _CRT_SECURE_NO_WARING
#include <stdio.h>

//1. 如有以下代码：
//struct student
//{
//	int num;
//	char name[32];
//	float score;
//}stu;
//struct是结构体类型的关键字
//struct student是用户定义的结构体类型
//num，score都是结构体成员名
//stu是用户定义的结构体变量名



//2. 下面程序要求输出结构体中成员a的数据，可以填入横线处的内容是：
/*
struct S
{
	int a;
	int b;
};
int main()
{
	struct S a, * p = &a;//创建指针变量； a->结构体变量；  p->结构体指针 ； 
	                     //*和struct S组合成结构体指针
	a. a = 99; //第一个a -> 结构体变量；  第二个a -> 结构体成员
	printf("%d\n", ______); //可以放a.a;  p->a;  (*p).a
	return 0;
}
*/


/*3.
struct stu
{
	int num;
	char name[10];
	int age;
};

void fun(struct stu* p)
{
	printf("%s\n", (*p).name);
	return;
}

int main()
{
	struct stu students[3] = { {9801,"zhang",20},{9802,"wang",19},{9803,"zhao",18} };
	fun(students + 1);
	return 0;
}
*/



// 4.结构体访问成员的操作符包括：
//  .操作符
//  ->操作符
//  *解引用操作符



//喝汽水问题：喝汽水，一瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以喝多少汽水

int main()
{
	int money = 0;
	int total = 0;// 
	int empty = 0;
	scanf_s("%d", &money);
	//买回来的汽水喝掉
	if (money == 0)
		total = 0;
	else
		total = 2 * money - 1;

	//total = money;
	//empty = money;
	////换回来的汽水
	//while (empty >= 2)
	//{
	//	total += empty / 2;
	//	empty = empty / 2 + empty % 2;
	//}

	printf("total = %d\n", total);
	return 0;
}

