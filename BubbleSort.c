/****************************** 
排序算法实现之---冒泡排序 
时间复杂度：O(N^2) 
是稳定排序
******************************/
#include<stdio.h> 
#include<windows.h>
void BubbleSort(int *array);

void BubbleSort(int *array)
{
	int i,j,temp;
	for(i=0;i<9;i++)//10个数跑9趟就OK，边界如果不减1，会出现数组越出边界，使程序奔溃
	{
		for(j=0;j<9-i;j++)
		{
			if(array[j]>array[j+1])//越界的情况出现在这里
			{
				//交换位置
				temp = array[j+1];
				array[j+1] = array [j];
				array [j] = temp;
			}
		}
	}
}

void main()
{
	int i;
	int arr[10] = {9,5,8,7,3,4,6,2,1,0};
	BubbleSort(arr); 
	for(i=0;i<10;i++)
	printf("%d ",arr[i]);
	system("pause");
}
