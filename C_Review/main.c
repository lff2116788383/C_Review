#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//2数据的输入输出
//#define DATA_INPUT_OUTPUT
/*	%c字符char %s字符串char* %p打印地址 
* 转义字符字符串里\\代表\
*/

//3.选择结构
#define SELECT_STRUCT
/*关系运算符 大于小于等于不等于
* 逻辑运算符 && || ！
* if
* switch
*/

//4.循环结构
#define LOOP_STRUCT
/* while
* do while
* for
* break
* continue
*/
//5.数组
#define ARRAY
/*一维数组
* 多维数组
* 字符数组
*/

//6.函数
#define FUNCTION

//7.指针
#define POINTER

//8.自定义数据类型
#define CUSTOM_DATA_TYPE
/*结构体大小要注意  注意字节对齐的问题
*
*/

//9.位运算
#define BIT_OPERATION
/*异或运算 二进制
*/

//10.常用算法
#define COMMON_ALGORITHM
//内容
//基本的排序算法，递推，递归，贪心，二分，广度优先搜索，动态规划初步。
//要点
//（1）掌握冒泡、选择、插入、归并、快速、堆排序算法。
//（2）掌握递推、递归程序的写法。
//（3）掌握贪心、二分方法的应用，会写贪心、二分程序。
//（4）掌握广度优先搜索程序的写法。
//（5）了解动态规划，能理解基本的动态规划程序，如矩阵连乘问题、动态规划算法的基本要素、最长公共子序列、最大子段和。
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
	//给一个随机种子获取一个从1到100的随机数
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
	printf("与运算：%04x\n", bit1&bit2);
	printf("或运算：%04x\n", bit1 | bit2);

	printf("异或运算：%04x\n", bit1 ^ bit2);
	printf("反运算：%04x\n", ~bit1);

	printf("左移运算：%04x\n", bit1 << 2);
	printf("右移运算：%04x\n", bit1 >>2);
#endif // BIT_OPERATION
#ifdef COMMON_ALGORITHM
	printf("排序算法练习：\n");
	int arr[10] = {1,8,5,4,6,5,4,10,3,7};
	int sortId = 0;
	printf("请选择排序算法: \
1.冒泡排序 2.选择排序 3.插入排序 (其他不做任何处理)\n");
	scanf("%d",&sortId);

	printf("排序前的数组>");
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
	printf("当前的数组>");
	for (size_t i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("size:%d\n", size);
}
void PrintSortArray(int arr[], int size)
{
	printf("排序后的数组>");
	for (size_t i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("size:%d\n", size);
}

//冒泡排序 时间复杂度O(n^2)
/*冒泡排序的原理是：从左到右，相邻元素进行比较。每次比较一轮，就会找到序列中最大的一个或最小的一个。这个数就会从序列的最右边冒出来。
*以从小到大排序为例，第一轮比较后，所有数中最大的那个数就会浮到最右边；第二轮比较后，所有数中第二大的那个数就会浮到倒数第二个位置……
*就这样一轮一轮地比较，最后实现从小到大排序。
*/
void Bubble_Sort(int arr[], int size)
{
	printf("冒泡排序:\n");
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

//选择排序
/*基本思想
*选择排序(Selection - sort)是一种简单直观的排序算法。它的工作原理：首先在未排序序列中找到最小（大）元素，存放到排序序列的起始位置，
*然后，再从剩余未排序元素中继续寻找最小（大）元素，然后放到已排序序列的末尾。以此类推，直到所有元素均排序完毕。
*主要思路
*每一次从无序组的数据元素中选出最小的一个元素，存放在无序组的起始位置，无需组的元素减少，有序组的元素增加，直到全部待排序的数据元素排完。
*/
void Selection_Sort(int arr[], int size)
{
	printf("选择排序:\n");
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

//插入排序
/* 基本思想
*将待排序的无序数列看成是一个仅含有一个元素的有序数列和一个无序数列，将无序数列中的元素逐次插入到有序数列中，从而获得最终的有序数列。
*主要思路
*插入排序是最简单常用的方法，将数组分为两部分，排好序的数列，以及未排序的数列，将未排序的数列中的元素 与排好序的数列进行比较，然后将该元素插入到已排序列的合适位置中。
*/
void Insert_Sort(int arr[],int size)
{
	printf("插入排序:\n");
	int i, j;
	int tmp;
	for (i = 1; i < size; i++)//后面未排序数组
	{
		tmp = arr[i]; //待排元素
		for (j = i-1; j >=0&&arr[j] > tmp; j--) //前面已排序数组 
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











//快速排序
/*基本思想
*快速排序算法的基本思想为分治思想。
*先从数列中取出一个数作轴值（基准数）pivot；
*根据基准数将数列进行分区，小于基准数的放左边，大于基准数的放右边；
*重复分区操作，知道各区间只有一个数为止。
*主要思路
*快速排序是找出一个元素（理论上可以随便找一个）作为基准，然后对数组进行分区操作，使基准左边元素的值都不大于基准值，基准右边的值都不小于基准值，
*如此作为基准的元素调整到排序后的正确位置。递归快速排序，将其他n - 1 个元素也调整到排序后的正确位置。最后每个元素都是在排序后的正确位置，排序完成。
*所以快速排序算法的核心算法是分区操作，及如何调整基准的位置以及调整返回基准的最终位置以便分治递归。
*/
void Quick_Sort(int arr[], int size)
{
}