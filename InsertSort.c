#include<stdio.h>
#include<windows.h>
/*************************************************************
简单排序---直接插入排序
时间复杂度：O(N^2)
稳定性高（意味着每一步所做的排序均有效）
基本思想：每一步将一个待排序的的记录，插入到前面已经排好的序列中，直到所有都结束
**************************************************************/

void InsertSort(int *array);

void InsertSort(int *array)
{
	int i,j,temp;//i代表位置

	for(i=1;i<10;i++)//因为有j--，所以这里要从数组下标为1开始循环，不然会出现数组越界的情形
	{	
		temp = array[i];//假设i处是已排序状态
		for(j=i;j>0 && array[j-1]>temp;j--)//循环条件：前一个元素大于temp中的值而且j>0
		{
			array[j] = array[j-1];//把j-1位置上的元素放到j位置
		}
		array[j] = temp;//由于j--之后，现在的j位置是原来的j-1的位置，因此把temp中的值放到j-1的位置上
	}
}


void main()
{
	int i;
	int arr[10] = {9,5,8,3,3,4,6,2,1,0};
	InsertSort(arr); 
	for(i=0;i<10;i++)
	printf("%d ",arr[i]);
	system("pause");
}
