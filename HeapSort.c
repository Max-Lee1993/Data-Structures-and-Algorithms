/*****************************
排序算法实现之---堆排序（一种选择排序）
平均时间复杂度：O(Nlog(N))
是一种非常稳定的算法
思路：//1.构造大顶堆:从左到右，从上到下
//2.排序
******************************/
#include<stdio.h>
#include<windows.h>

void PrecolateUp(int *array,int i);
void BuildHeap(int *array);
void HeapSort(int *array);
int arr[10] = {9,5,8,7,3,4,6,2,1,0};//测试排序数组

//排序
void HeapSort(int *array)
{
	int j;
	BuildHeap(arr);//构建大顶堆
	//
	for(j=9;j>0;j--)
	{
		int temp=array[0];
		array[0]=array[j];
		array[j]=temp;
		PrecolateUp(arr,0,j);//无序的节点在减少，待排序的数组个数在不断减少
	}
}

//构建大顶堆
void BuildHeap(int *array)
{
	int i;
	for(i=4;i>=0;i--)//从第一个非叶子节点开始，计算方法为：array.length/2-1?为什么?
	{
		PrecolateUp(arr,i,10);//对全部元素进行排序，形成大顶堆
	}
}
//上滤。从左到右，从上到下
void PrecolateUp(int *array,int i,int length)
{
		int temp,k;
		temp = array[i];//父节点值存在temp中

		for(k=i*2+1;k<length;k=2*k+1)//从节点i的左节点开始
		{
			if(array[k+1]>array[k] && k+1<length)//右子节点大于左子节点
			{
				k++;
			}
			if(array[k]>temp)//如果左子节点大于父节点
			{
				array[i]=array[k];//把左子节点的值赋为父节点
                array[k]=temp;//可以直接交换，也可以将temp中的值放到最后确定的位置
				i=k;//父节点的索引也要变为k
			}
			
			else
			{
				break;
			}
			
		}
		//array[i]=temp;//把temp的值放到最终的位置
}

void main()
{
	int i,j;
	HeapSort(arr); 
	for(i=0;i<10;i++)
	printf("%d ",arr[i]);
	system("pause");
}