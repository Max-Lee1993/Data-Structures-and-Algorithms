#include<stdio.h>
#include<windows.h>
/*************************
�����㷨ʵ��֮----ϣ������
����ʱ�临�Ӷȣ�O(N^2)
�������̺��˷��ε�˼��
**************************/

void ShellSort(int *array);

void ShellSort(int *array)
{
	int i,j,Increment;
	int temp;
	//����ʹ�õ���ϣ��������ѭ���������������У�ΪIncrement/=2
	 for(Increment=5;Increment>0;Increment/=2)//���飬����ĳ���length=10���ʳ�ʼ����Ϊ5
	 {
		//����ֱ�Ӳ���������������
		for(i=Increment;i<10;i++)//�ӵ�Increment��Ԫ�ؽ��в������
		{
			temp=array[i];//�ѵ�Increment��Ԫ�طŵ�temp�д�����
			//ѭ������Ϊj��ȥ��������Ϊͬ����Ǹ�Ԫ��
			for(j=i;j>=Increment;j-=Increment)//j��ʼ����5��ÿ��ѭ��֮��j=j-Increment��ֱ�������ڻ��ߵ���0����ѭ������ֹ����Խ��
			{
				if(temp<array[j-Increment])
				{
					array[j]=array[j-Increment];
				}
				else
					break;
			}
			array[j] = temp;//���ڵ�j��ѭ������֮�󣬱����j-increment����temp��ֵ������j
		}
	 }
}

void main()
{
	int i;
	int arr[10] = {9,5,8,3,3,4,6,2,1,0};//��������
	ShellSort(arr); 
	for(i=0;i<10;i++)
	printf("%d ",arr[i]);
	system("pause");
}