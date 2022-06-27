#define _CRT_SECURE_NO_WARNINGS 1  //忽略使用不安全的库函数

#include <stdio.h>  //包含一个叫<stdio.h>的文件
#include <string.h> //包含字符串头文件

////main函数是程序的入口
////一个工程中的main函数有且仅有一个
////main前面的int表示main函数调用返回一个整形值
//int mian()
//{
//	//在这里完成任务
//	//在屏幕上打印输出hello world
//	//函数printf -function-print 打印函数
//	//库函数-C语言本身提供给我们的函数  #include
//	printf("hello world!!!");
//	return 0;  //返回0
//}

//int main()
//{
//	int a = 10;
//	float f = 5.0;
//	double d = 3.24;
//
//	printf("%d\n%f\n%lf\n",a,f,d);
//
//	return 0;
//}

//打印数据类型大小
//int main()
//{
//	printf("%d\n",sizeof(char));
//	printf("%d\n",sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	return 0;
//}

//定义变量
//int main()
//{
//	short age = 20; //向内存申请2个字节=16bit位用于存放20
//	//float weight = 95.6f; //向内存申请4个字节,存放小数,加f代表强制单精度浮点数
//	double weight = 95.6f;
//	//C语言标准规定sizeof(long)>= sizeof(int)
//	printf("%d\n%lf\n",age,weight);
//	return 0;
//}

//局部变量和全局变量
//int num1 = 20;
//
//int main()
//{
//	int num1 = 10; //局部变量-定义在{}代码块内部的变量
//	//局部变量和全局变量的名字不要相同-容易误会
//	//当局部变量和全局变量的名字相同时,局部变量优先
//	printf("%d",num1);
//	return 0;
//}

//计算两个数的相加
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;  //C语言语法规定,变量要定义在当前代码块的最前面
//
//	//输入数据-使用输入函数scanf
//	scanf("%d%d",&num1,&num2);  //取地址操作符
//	sum = num1 + num2;
//
//	printf("%d\n",sum);
//	return 0;
//}


//int main()
//{
//	//这些都是字面常量
//	//3;
//	//100;
//	//3.1415926;
//
//	//const - 常属性
//	//const 修饰的常变量
//	//const int a = 1;
//	//printf("%d\n",a);
//	//a = 8;
//	//printg("%d\n",a);
//
//	//int num = 1; //这是一个变量
//	//const int n = 10; //n是变量,但是又有常属性,所以我们说n是常变量
//	//int arr1[n] = {10};
//	//n = 20;
//
//	return 0;
//}


//int main()
//{
//
//	const float pai = 3.1415936; //这里的pai是const修饰的常变量
//	pai = 5.14; //是不能直接修改的
//	//pai被称为const修饰的常变量,const修饰的常变量只是在语法层面限制了变量pai不能直接被改变,但是pai本质上还是一个变量,所以叫做常变量
//	
//	return 0;
//}

//标识符常量
//#define 定义的标识符常量

//#define MAX 10
//int main()
//{
//	int arr[MAX] = {0};
//	printf("%d\n",MAX);
//	return 0;
//}

//枚举常量
//枚举-- 一一列举
//枚举关键字-enum
//MALE.FEMALE,SECRTE-定义的枚举常量
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//int main()
//{
//	//enum Sex s = FEMALE;
//	printf("%d\n",MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//	return 0;
//}

//enum Color
//{
//	RED,
//	YELLOW,
//	BLUE
//};
//
//int main()
//{
//	enum Color color = YELLOW;
//	color = YELLOW;
//	printf("%d\n",color);
//	return 0;
//}


//int main()
//{
//	char arr1[] = "abc"; //数组
//	//"abc" -- 'a' 'b' 'c' '\0' -- '\0'字符串的结束标志
//	char arr2[] = {'a','b','c'};
//	//'a' 'b' 'c' 没有字符串结束标志
//	printf("%s\n",arr1);
//	printf("%s\n",arr2);
//
//	return 0;
//}


//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c' }; 
//	//不带\0统计随机值,到\0结束,带有\0,结束输出3
//	printf("%d\n",strlen(arr1)); //strlen --string length -计算字符串长度
//	printf("%d\n",strlen(arr2));
//	return 0;
//}

//int main()
//{
//	printf("c:\test\32\test.c\n");
//	//\t水平制表符
//	printf("c:\\test\\32\\test.c\n");
//	return 0;
//}

//int main()
//{
//	printf("%d\n",strlen("c:\test\32\test.c"));
//	printf("%c\n",'\32');
//	//\32 -- 32是两个8进制数字
//	//32作为8进制代表的那个十进制数字,作为ascll码值,对应的字符
//	//32-->10进制26-->作为ascll码值代表的字符
//	return 0;
//}

//int main()
//{
//	printf("%c\n",'x61');
//	return 0;
//}

//int main()
//{
//	int coding = 0;
//	printf("欢迎加入比特\n");
//	printf("你会选择敲代码吗? 输入0或者1\n");
//	scanf("%d",&coding);
//
//	if (coding == 1)
//	{
//		printf("坚持,你会有好offer\n");
//	}
//	else
//	{
//		printf("放弃回家买红薯\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	printf("欢迎加入比特\n");
//
//	while (line < 20)
//	{
//		printf("敲一行代码,经验值加1,%d\n",line);
//		line++;
//	}
//
//	if (line <= 20)
//	{
//		printf("拿到好offer\n");
//	}
//
//	return 0;
//}

//int Add(int x,int y)
//{
//	int z = x + y;
//	return z;
//}
//
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int sum = 0;
//	int a = 100;
//	int b = 200;
//
//	sum = num1 + num2;
//	printf("%d\n", sum);
//
//	sum = Add(a,b);
//	printf("%d\n",sum);
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10}; //定义一个存放10个整数数字的数组
//
//	//printf("%d\n",arr[3]);  //下标方式访问数组
//
//	//打印0-9
//	int i = 0;
//	while (i<10)
//	{
//		printf("%d\n",i);
//		i++;
//	}
//
//	return 0;
//}


