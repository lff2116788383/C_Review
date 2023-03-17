#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//2���ݵ��������
//#define DATA_INPUT_OUTPUT
/*	%c�ַ�char %s�ַ���char* %p��ӡ��ַ 
* ת���ַ��ַ�����\\����\
*/

//3.ѡ��ṹ
#define SELECT_STRUCT
/*��ϵ����� ����С�ڵ��ڲ�����
* �߼������ && || ��
* if
* switch
*/

//4.ѭ���ṹ
#define LOOP_STRUCT
/* while
* do while
* for
* break
* continue
*/
//5.����
#define ARRAY
/*һά����
* ��ά����
* �ַ�����
*/

//6.����
#define FUNCTION

//7.ָ��
#define POINTER

//8.�Զ�����������
#define CUSTOM_DATA_TYPE
/*�ṹ���СҪע��  ע���ֽڶ��������
*
*/

//9.λ����
#define BIT_OPERATION
/*������� ������
*/

//10.�����㷨
#define COMMON_ALGORITHM
//����
//�����������㷨�����ƣ��ݹ飬̰�ģ����֣����������������̬�滮������
//Ҫ��
//��1������ð�ݡ�ѡ�񡢲��롢�鲢�����١��������㷨��
//��2�����յ��ơ��ݹ�����д����
//��3������̰�ġ����ַ�����Ӧ�ã���д̰�ġ����ֳ���
//��4�����չ���������������д����
//��5���˽⶯̬�滮�����������Ķ�̬�滮����������������⡢��̬�滮�㷨�Ļ���Ҫ�ء�����������С�����Ӷκ͡�
void PrintCurrentArray(int arr[], int size);
void Bubble_Sort(int arr[], int size);
void Selection_Sort(int arr[], int size);
void Insert_Sort(int arr[], int size);

#include <time.h>
int GetCall(int p1, int p2, int p3, int p4)
{
	if (p1 + p2 + p3 + p4 != 100)
	{
		
		return 0;
	}
	//��һ��������ӻ�ȡһ����1��100�������
	srand(time(NULL));
	int num = rand() % 100 + 1;

	printf("PB: p1:%d p2:%d p3:%d p4:%d num:%d", p1, p2, p3, p4, num);
	if (num > 0 && num <= p1)  //(0,p1]
	{
		printf("debug 1 ");
	}
	else if (num > p1 && num <= p1 + p2)  //(p1,p1+p2]
	{
		printf("debug 2 ");
		
	}
	else if (num > p1 + p2 && num <= p1 + p2 + p3)  //(p1+p2,p1+p2+p3]
	{
		printf("debug 3 ");
		
	}
	else
	{
		printf("debug 4 ");
	
	}

	

	return 0;
}
int main()
{
#ifdef DATA_INPUT_OUTPUT
	printf("hello I'm practicing C\n");
	printf("%d,%02f,%lf\n", 15, 10.00111111111, 0.25646461111);

	char str[10];
	scanf("%s", &str);
	printf("scanf str:%s,  str[0]:%c\n", str, str[0]);
	printf("str addr:%p ,str[0] addr:%p\n", &str, &str[0]);
	printf("\\    / \n");


#endif 

#ifdef SELECT_STRUCT
	int a =0,b =0,s =0;
	if (a >= b||a!=b)
	{
	}
	if (a&&b)
	{

	}
	else if (a||b)
	{

	}
	else
	{

	}

	switch (s)
	{
	case 0:
		break;
	default:
		break;
	}

#endif // SELECT_STRUCT

#ifdef LOOP_STRUCT
	int count = 10000;
	while (count )
	{
		count--;
	}
	printf("while count:%d\n",count);
	do
	{
		count++;
	} while (!count);
	printf("do while count:%d\n", count);

	for (size_t i = 0; i < 1000; i++)
	{
		count++;
	}

	printf("for count:%d\n", count);

	while (1)
	{
		count--;
		if (!count) 
		{
			printf("break count:%d\n", count);
			break;
		}

		if (count !=1000)
		{
			continue;
		}
	
		printf("continue count:%d\n", count);
		

	}
#endif // LOOP_STRUCT

#ifdef ARRAY
	int array1[10];
	int array2[10][10] = { {1} };
	printf("array2[0][0] %d\n",array2[0][0]);
	char strArray[10][10];
#endif // ARRAY


#ifdef FUCTION

#endif // FUCTION


#ifdef POINTER

#endif // POINTER

#ifdef CUSTOM_DATA_TYPE

#endif // CUSTOM_DATA_TYPE
#ifdef BIT_OPERATION
	int bit1 = 9; //1001(2)
	int bit2 = 6; //0110(2)
	printf("�����㣺%04x\n", bit1&bit2);
	printf("�����㣺%04x\n", bit1 | bit2);

	printf("������㣺%04x\n", bit1 ^ bit2);
	printf("�����㣺%04x\n", ~bit1);

	printf("�������㣺%04x\n", bit1 << 2);
	printf("�������㣺%04x\n", bit1 >>2);
#endif // BIT_OPERATION
#ifdef COMMON_ALGORITHM
	printf("�����㷨��ϰ��\n");
	int arr[10] = {1,8,5,4,6,5,4,10,3,7};
	int sortId = 0;
	printf("��ѡ�������㷨: \
1.ð������ 2.ѡ������ 3.�������� (���������κδ���)\n");
	scanf("%d",&sortId);

	printf("����ǰ������>");
	for (size_t i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d ", arr[i]);
	}
	printf("size:%d\n", sizeof(arr) / sizeof(arr[0]));

	switch (sortId)
	{
	case 1:
		Bubble_Sort(arr, sizeof(arr) / sizeof(arr[0]));
		break;
	case 2:
		Selection_Sort(arr, sizeof(arr) / sizeof(arr[0]));
		break;
	case 3:
		Insert_Sort(arr, sizeof(arr) / sizeof(arr[0]));
		break;
	case 4:
		break;
	case 5:
		break;
	case 6:
		break;
	default:
		break;
	}

#endif // COMMON_ALGORITHM


	//GetCall(0,100,0,0);

	return 0;
}

void PrintCurrentArray(int arr[], int size)
{
	printf("��ǰ������>");
	for (size_t i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("size:%d\n", size);
}
void PrintSortArray(int arr[], int size)
{
	printf("����������>");
	for (size_t i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("size:%d\n", size);
}

//ð������ ʱ�临�Ӷ�O(n^2)
/*ð�������ԭ���ǣ������ң�����Ԫ�ؽ��бȽϡ�ÿ�αȽ�һ�֣��ͻ��ҵ�����������һ������С��һ����������ͻ�����е����ұ�ð������
*�Դ�С��������Ϊ������һ�ֱȽϺ��������������Ǹ����ͻḡ�����ұߣ��ڶ��ֱȽϺ��������еڶ�����Ǹ����ͻḡ�������ڶ���λ�á���
*������һ��һ�ֵرȽϣ����ʵ�ִ�С��������
*/
void Bubble_Sort(int arr[], int size)
{
	printf("ð������:\n");
	for (size_t i = 0; i < size-1; i++)
	{
		for (size_t j = 0;  j < size -1 -i;  j++)
		{
			if (arr[j] > arr[j+1])
			{
				int tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}

	PrintSortArray(arr,size);
}

//ѡ������
/*����˼��
*ѡ������(Selection - sort)��һ�ּ�ֱ�۵������㷨�����Ĺ���ԭ��������δ�����������ҵ���С����Ԫ�أ���ŵ��������е���ʼλ�ã�
*Ȼ���ٴ�ʣ��δ����Ԫ���м���Ѱ����С����Ԫ�أ�Ȼ��ŵ����������е�ĩβ���Դ����ƣ�ֱ������Ԫ�ؾ�������ϡ�
*��Ҫ˼·
*ÿһ�δ������������Ԫ����ѡ����С��һ��Ԫ�أ���������������ʼλ�ã��������Ԫ�ؼ��٣��������Ԫ�����ӣ�ֱ��ȫ�������������Ԫ�����ꡣ
*/
void Selection_Sort(int arr[], int size)
{
	printf("ѡ������:\n");
	for (size_t i = 0; i < size - 1; i++)
	{
		for (size_t j = i+1; j < size ; j++)
		{
			if (arr[i] > arr[j])
			{
				int tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
	PrintSortArray(arr, size);
}

//��������
/* ����˼��
*����������������п�����һ��������һ��Ԫ�ص��������к�һ���������У������������е�Ԫ����β��뵽���������У��Ӷ�������յ��������С�
*��Ҫ˼·
*������������򵥳��õķ������������Ϊ�����֣��ź�������У��Լ�δ��������У���δ����������е�Ԫ�� ���ź�������н��бȽϣ�Ȼ�󽫸�Ԫ�ز��뵽�������еĺ���λ���С�
*/
void Insert_Sort(int arr[],int size)
{
	printf("��������:\n");
	int i, j;
	int tmp;
	for (i = 1; i < size; i++)//����δ��������
	{
		tmp = arr[i]; //����Ԫ��
		for (j = i-1; j >=0&&arr[j] > tmp; j--) //ǰ������������ 
		{
			printf("cmp j:%d arr[j + 1]:%d arr[j]:%d\n",j, arr[j + 1], arr[j]);
			arr[j + 1] = arr[j];
		}
		arr[j+1] = tmp;
		printf("round j:%d arr[j+1]:%d\n", j, arr[j + 1]);
		PrintCurrentArray(arr,size);
	}
	PrintSortArray(arr, size);
}











//��������
/*����˼��
*���������㷨�Ļ���˼��Ϊ����˼�롣
*�ȴ�������ȡ��һ��������ֵ����׼����pivot��
*���ݻ�׼�������н��з�����С�ڻ�׼���ķ���ߣ����ڻ�׼���ķ��ұߣ�
*�ظ�����������֪��������ֻ��һ����Ϊֹ��
*��Ҫ˼·
*�����������ҳ�һ��Ԫ�أ������Ͽ��������һ������Ϊ��׼��Ȼ���������з���������ʹ��׼���Ԫ�ص�ֵ�������ڻ�׼ֵ����׼�ұߵ�ֵ����С�ڻ�׼ֵ��
*�����Ϊ��׼��Ԫ�ص�������������ȷλ�á��ݹ�������򣬽�����n - 1 ��Ԫ��Ҳ��������������ȷλ�á����ÿ��Ԫ�ض�������������ȷλ�ã�������ɡ�
*���Կ��������㷨�ĺ����㷨�Ƿ�������������ε�����׼��λ���Լ��������ػ�׼������λ���Ա���εݹ顣
*/
void Quick_Sort(int arr[], int size)
{
}