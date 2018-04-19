/****************************** 
排序算法实现之---简单选择排序 
时间复杂度：O(N^2) 
是不稳定排序？ 
******************************/ 
#include<stdio.h> 
#include<windows.h>
void SelectSort(int *array);
// 
void SelectSort(int *array)
{
	int min,i,j,temp;
	for(i=0;i<10;i++)
	{
		min = i;//用来存放数组最小元素的下标， 
		for(j=i+1;j<10;j++)
		{
			if(array[j]<array[min])	
			min = j;
			
		}
		//交换两个元素的位置 
		temp = array[min];
    		array[min] = array[i];
    		array[i] = temp; 
	}

} 

void main()
{
	int i;
	int arr[10] = {9,5,8,3,7,4,6,2,10,0};
	SelectSort(arr); 
	for(i=0;i<10;i++)
	printf("%d ",arr[i]);

	system("pause");
}
