#define _CRT_SECURE_NO_WARNINGS 1  //����ʹ�ò���ȫ�Ŀ⺯��

#include <stdio.h>  //����һ����<stdio.h>���ļ�
#include <string.h> //�����ַ���ͷ�ļ�

////main�����ǳ�������
////һ�������е�main�������ҽ���һ��
////mainǰ���int��ʾmain�������÷���һ������ֵ
//int mian()
//{
//	//�������������
//	//����Ļ�ϴ�ӡ���hello world
//	//����printf -function-print ��ӡ����
//	//�⺯��-C���Ա����ṩ�����ǵĺ���  #include
//	printf("hello world!!!");
//	return 0;  //����0
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

//��ӡ�������ʹ�С
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

//�������
//int main()
//{
//	short age = 20; //���ڴ�����2���ֽ�=16bitλ���ڴ��20
//	//float weight = 95.6f; //���ڴ�����4���ֽ�,���С��,��f����ǿ�Ƶ����ȸ�����
//	double weight = 95.6f;
//	//C���Ա�׼�涨sizeof(long)>= sizeof(int)
//	printf("%d\n%lf\n",age,weight);
//	return 0;
//}

//�ֲ�������ȫ�ֱ���
//int num1 = 20;
//
//int main()
//{
//	int num1 = 10; //�ֲ�����-������{}������ڲ��ı���
//	//�ֲ�������ȫ�ֱ��������ֲ�Ҫ��ͬ-�������
//	//���ֲ�������ȫ�ֱ�����������ͬʱ,�ֲ���������
//	printf("%d",num1);
//	return 0;
//}

//���������������
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;  //C�����﷨�涨,����Ҫ�����ڵ�ǰ��������ǰ��
//
//	//��������-ʹ�����뺯��scanf
//	scanf("%d%d",&num1,&num2);  //ȡ��ַ������
//	sum = num1 + num2;
//
//	printf("%d\n",sum);
//	return 0;
//}


//int main()
//{
//	//��Щ�������泣��
//	//3;
//	//100;
//	//3.1415926;
//
//	//const - ������
//	//const ���εĳ�����
//	//const int a = 1;
//	//printf("%d\n",a);
//	//a = 8;
//	//printg("%d\n",a);
//
//	//int num = 1; //����һ������
//	//const int n = 10; //n�Ǳ���,�������г�����,��������˵n�ǳ�����
//	//int arr1[n] = {10};
//	//n = 20;
//
//	return 0;
//}


//int main()
//{
//
//	const float pai = 3.1415936; //�����pai��const���εĳ�����
//	pai = 5.14; //�ǲ���ֱ���޸ĵ�
//	//pai����Ϊconst���εĳ�����,const���εĳ�����ֻ�����﷨���������˱���pai����ֱ�ӱ��ı�,����pai�����ϻ���һ������,���Խ���������
//	
//	return 0;
//}

//��ʶ������
//#define ����ı�ʶ������

//#define MAX 10
//int main()
//{
//	int arr[MAX] = {0};
//	printf("%d\n",MAX);
//	return 0;
//}

//ö�ٳ���
//ö��-- һһ�о�
//ö�ٹؼ���-enum
//MALE.FEMALE,SECRTE-�����ö�ٳ���
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
//	char arr1[] = "abc"; //����
//	//"abc" -- 'a' 'b' 'c' '\0' -- '\0'�ַ����Ľ�����־
//	char arr2[] = {'a','b','c'};
//	//'a' 'b' 'c' û���ַ���������־
//	printf("%s\n",arr1);
//	printf("%s\n",arr2);
//
//	return 0;
//}


//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c' }; 
//	//����\0ͳ�����ֵ,��\0����,����\0,�������3
//	printf("%d\n",strlen(arr1)); //strlen --string length -�����ַ�������
//	printf("%d\n",strlen(arr2));
//	return 0;
//}

//int main()
//{
//	printf("c:\test\32\test.c\n");
//	//\tˮƽ�Ʊ��
//	printf("c:\\test\\32\\test.c\n");
//	return 0;
//}

//int main()
//{
//	printf("%d\n",strlen("c:\test\32\test.c"));
//	printf("%c\n",'\32');
//	//\32 -- 32������8��������
//	//32��Ϊ8���ƴ�����Ǹ�ʮ��������,��Ϊascll��ֵ,��Ӧ���ַ�
//	//32-->10����26-->��Ϊascll��ֵ������ַ�
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
//	printf("��ӭ�������\n");
//	printf("���ѡ���ô�����? ����0����1\n");
//	scanf("%d",&coding);
//
//	if (coding == 1)
//	{
//		printf("���,����к�offer\n");
//	}
//	else
//	{
//		printf("�����ؼ������\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	printf("��ӭ�������\n");
//
//	while (line < 20)
//	{
//		printf("��һ�д���,����ֵ��1,%d\n",line);
//		line++;
//	}
//
//	if (line <= 20)
//	{
//		printf("�õ���offer\n");
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
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10}; //����һ�����10���������ֵ�����
//
//	//printf("%d\n",arr[3]);  //�±귽ʽ��������
//
//	//��ӡ0-9
//	int i = 0;
//	while (i<10)
//	{
//		printf("%d\n",i);
//		i++;
//	}
//
//	return 0;
//}


