#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h> //字符串头文件




//int main()
//{
//	//int a = 10;
//	//sizeof计算的是变量/类型所占空间的大小,单位是字节
//	//printf("sizeof = %d\n",sizeof(a));//4
//	//printf("sizeof = %d\n",sizeof(int));//4
//	//printf("sizeof = %d\n",sizeof a);//4
//
//	int arr[10] = {0}; //定义一个10个整形元素的数组
//	int sz = 0;
//	printf("size of = %d\n",sizeof(arr));
//	//计算数组的元素个数
//	//个数= 数组总大小/每个元素的大小
//	sz = sizeof(arr)/sizeof(arr[0]);
//	printf("%d\n",sz);
//	return 0;
//}


	//单目操作符
	//双目操作符
	//三目操作符

//int main()
//{
//	//int a = 10;
//	//int b = 20;
//	//a+b; //双目操作符
//	//C语言中我们表示真假
//	//0-假
//	//非0为真
//
//	//int a = 0;
//	//int a = -2; //单目操作符
//	//int a = +3; //正号都会省略
//	printf("%d\n",a);
//	printf("%d\n",!a);
//
//
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	a = 20; //=赋值    ==判断相等
//	a = a+1;
//	a +=1;
//	a = a-20;
//	a -= 20;
//	a = a&2;
//	a &= 2;
//	//复合赋值符
//	//+= -= *= /= %= <<= >>= &= |= ^=
//
//	return 0;
//}



//int main()
//{
//	//(2进制)位操作
//	//&按位与
//
//
//	int a = 3;
//	int b = 5;
//	//int c = a&b;
//	//a = 011
//	//b = 101
//	//c = 001
//	
//	//printf("%d\n",c);
//
//	//| 按位或
//	//int d =a|b;
//	//a = 011
//	//b = 101
//	//d = 111
//	//printf("%d\n",d);
//	
//	//^ 按位异或
//	int e = a^b; //不是次方是异或
//	//异或的计算规律
//	//对应的二进制位相同,则为0
//	//对应的二进制位相异,则为1
//	//a = 011
//	//b = 101
//	//e = 110
//	printf("%d\n",e);
//
//
//	return 0;
//}



//int main()
//{
//	//移(2进制)位操作符
//	//<<左移
//	//>>右移
//	int a = 1;
//	//整形1占四个字节-32bit位
//	//00000000000000000000000000001
//	int b = a << 2;
//	//b = a +1;
//	printf("%d\n",a);
//	printf("%d\n",b);
//	
//	return 0;
//}


//int main()
//{
//	int a = 5%2;
//	printf("%d\n",a);
//	return 0;
//}

//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10}; //定义一个存放10个整数数字的数组
//
//	//printf("%d\n",arr[4]);  //下标的方式访问数组
//
//	//打印0-9
//	int i = 0;
//	while(i<10)
//	{
//		printf("%d ",arr[i]);
//		i++;
//	}
//
//	return 0;
//}




//int Add(int x, int y)   //自定义函数Add
//{
//	int z =x+y;
//	return z;
//}
//
//
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
//	printf("sum = %d\n",sum);
//
//	sum = Add(a,b);
//	printf("sum = %d\n",sum);
//
//	return 0;
//}



//int main()
//{
//	int line = 0;
//	printf("加入比特\n");
//
//	while(line < 20000)
//	{
//		printf("敲一行代码,%d\n",line);
//		line++;
//	}
//
//	if(line >= 20000)
//		printf("拿到好offer\n");
//	
//	return 0;
//}



//int main()
//{
//	int input = 0;
//	
//	printf("加入比特\n");
//	printf("你要好好学习吗?(1/0)>:");
//
//	scanf("%d",&input); //1/0
//
//	if(input == 1)
//		printf("好offer\n");
//	else
//		printf("卖红薯\n");
//
//	return 0;
//}











//int main()
//{
//	printf("%c\n",'x61');
//	return 0;
//}

//单行注释

/*
多行注释
*/



//int main()
//{
//	printf("%d\n",strlen("c:\test\32\test.c"));
//	printf("%c\n",'\32');
//	//\32 --32是2个8进制数字
//	//32作为8进制代表的那个十进制数字,作为ASCLL码值,对应的字符
//	//32 -->10进制26-→作为acsll码值代表的字符
//
//	return 0;
//}





//int main()
//{
//	char arr1[] = "abc"; //数组
//	//"abc" --  'a' 'b' 'c' '\0' -- '\0'字符串的结束标志
//	char arr2[] = {'a','b','c'};
//	//'a' 'b' 'c'
//	
//	printf("%s\n",arr1);
//	printf("%s\n",arr2);
//	
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = {'a','b','c'};//不带\0统计随机值,到\0结束,带有\0.结束输出3
//	printf("%d\n",strlen(arr1)); //strlen - string length -计算字符串长度
//	printf("%d\n",strlen(arr2));
//
//	return 0;
//}

//int main()
//{
//	printf("c:\test\32\test.c\n");
//	//\t-水平制表符
//	printf("c:\\test\\32\\test.c\n"); //转义后
//	return 0;
//}



















