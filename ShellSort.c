#include<stdio.h>
#include<windows.h>
/*************************
排序算法实现之----希尔排序
最坏情况时间复杂度：O(N^2)
这其中蕴含了分治的思想
**************************/

void ShellSort(int *array);

void ShellSort(int *array)
{
	int i,j,Increment;
	int temp;
	//这里使用的是希尔增量，循环变量（增量序列）为Increment/=2
	 for(Increment=5;Increment>0;Increment/=2)//分组，数组的长度length=10，故初始条件为5
	 {
		//进行直接插入排序，组内排序
		for(i=Increment;i<10;i++)//从第Increment个元素进行插入操作
		{
			temp=array[i];//把第Increment个元素放到temp中存起来
			//循环增量为j减去增量，即为同组的那个元素
			for(j=i;j>=Increment;j-=Increment)//j开始等于5，每次循环之后j=j-Increment，直到它大于或者等于0结束循环，防止数组越界
			{
				if(temp<array[j-Increment])
				{
					array[j]=array[j-Increment];
				}
				else
					break;
			}
			array[j] = temp;//现在的j在循环结束之后，变成了j-increment，把temp的值赋给了j
		}
	 }
}

void main()
{
	int i;
	int arr[10] = {9,5,8,3,3,4,6,2,1,0};//测试数组
	ShellSort(arr); 
	for(i=0;i<10;i++)
	printf("%d ",arr[i]);
	system("pause");
}