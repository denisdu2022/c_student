#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h> //�ַ���ͷ�ļ�




//int main()
//{
//	//int a = 10;
//	//sizeof������Ǳ���/������ռ�ռ�Ĵ�С,��λ���ֽ�
//	//printf("sizeof = %d\n",sizeof(a));//4
//	//printf("sizeof = %d\n",sizeof(int));//4
//	//printf("sizeof = %d\n",sizeof a);//4
//
//	int arr[10] = {0}; //����һ��10������Ԫ�ص�����
//	int sz = 0;
//	printf("size of = %d\n",sizeof(arr));
//	//���������Ԫ�ظ���
//	//����= �����ܴ�С/ÿ��Ԫ�صĴ�С
//	sz = sizeof(arr)/sizeof(arr[0]);
//	printf("%d\n",sz);
//	return 0;
//}


	//��Ŀ������
	//˫Ŀ������
	//��Ŀ������

//int main()
//{
//	//int a = 10;
//	//int b = 20;
//	//a+b; //˫Ŀ������
//	//C���������Ǳ�ʾ���
//	//0-��
//	//��0Ϊ��
//
//	//int a = 0;
//	//int a = -2; //��Ŀ������
//	//int a = +3; //���Ŷ���ʡ��
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
//	a = 20; //=��ֵ    ==�ж����
//	a = a+1;
//	a +=1;
//	a = a-20;
//	a -= 20;
//	a = a&2;
//	a &= 2;
//	//���ϸ�ֵ��
//	//+= -= *= /= %= <<= >>= &= |= ^=
//
//	return 0;
//}



//int main()
//{
//	//(2����)λ����
//	//&��λ��
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
//	//| ��λ��
//	//int d =a|b;
//	//a = 011
//	//b = 101
//	//d = 111
//	//printf("%d\n",d);
//	
//	//^ ��λ���
//	int e = a^b; //���Ǵη������
//	//���ļ������
//	//��Ӧ�Ķ�����λ��ͬ,��Ϊ0
//	//��Ӧ�Ķ�����λ����,��Ϊ1
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
//	//��(2����)λ������
//	//<<����
//	//>>����
//	int a = 1;
//	//����1ռ�ĸ��ֽ�-32bitλ
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
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10}; //����һ�����10���������ֵ�����
//
//	//printf("%d\n",arr[4]);  //�±�ķ�ʽ��������
//
//	//��ӡ0-9
//	int i = 0;
//	while(i<10)
//	{
//		printf("%d ",arr[i]);
//		i++;
//	}
//
//	return 0;
//}




//int Add(int x, int y)   //�Զ��庯��Add
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
//	printf("�������\n");
//
//	while(line < 20000)
//	{
//		printf("��һ�д���,%d\n",line);
//		line++;
//	}
//
//	if(line >= 20000)
//		printf("�õ���offer\n");
//	
//	return 0;
//}



//int main()
//{
//	int input = 0;
//	
//	printf("�������\n");
//	printf("��Ҫ�ú�ѧϰ��?(1/0)>:");
//
//	scanf("%d",&input); //1/0
//
//	if(input == 1)
//		printf("��offer\n");
//	else
//		printf("������\n");
//
//	return 0;
//}











//int main()
//{
//	printf("%c\n",'x61');
//	return 0;
//}

//����ע��

/*
����ע��
*/



//int main()
//{
//	printf("%d\n",strlen("c:\test\32\test.c"));
//	printf("%c\n",'\32');
//	//\32 --32��2��8��������
//	//32��Ϊ8���ƴ�����Ǹ�ʮ��������,��ΪASCLL��ֵ,��Ӧ���ַ�
//	//32 -->10����26-����Ϊacsll��ֵ������ַ�
//
//	return 0;
//}





//int main()
//{
//	char arr1[] = "abc"; //����
//	//"abc" --  'a' 'b' 'c' '\0' -- '\0'�ַ����Ľ�����־
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
//	char arr2[] = {'a','b','c'};//����\0ͳ�����ֵ,��\0����,����\0.�������3
//	printf("%d\n",strlen(arr1)); //strlen - string length -�����ַ�������
//	printf("%d\n",strlen(arr2));
//
//	return 0;
//}

//int main()
//{
//	printf("c:\test\32\test.c\n");
//	//\t-ˮƽ�Ʊ��
//	printf("c:\\test\\32\\test.c\n"); //ת���
//	return 0;
//}



















