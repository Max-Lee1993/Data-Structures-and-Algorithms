/****************************** 
�����㷨ʵ��֮---��ѡ������ 
ʱ�临�Ӷȣ�O(N^2) 
�ǲ��ȶ����� 
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
		min = i;//�������������СԪ�ص��±꣬ 
		for(j=i+1;j<10;j++)
		{
			if(array[j]<array[min])	
			min = j;
			
		}
		//��������Ԫ�ص�λ�� 
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
