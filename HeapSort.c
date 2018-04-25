/*****************************
�����㷨ʵ��֮---������һ��ѡ������
ƽ��ʱ�临�Ӷȣ�O(Nlog(N))
��һ�ַǳ��ȶ����㷨
˼·��//1.����󶥶�:�����ң����ϵ���
//2.����
******************************/
#include<stdio.h>
#include<windows.h>

void PrecolateUp(int *array,int i);
void BuildHeap(int *array);
void HeapSort(int *array);
int arr[10] = {9,5,8,7,3,4,6,2,1,0};//������������

//����
void HeapSort(int *array)
{
	int j;
	BuildHeap(arr);//�����󶥶�
	//
	for(j=9;j>0;j--)
	{
		int temp=array[0];
		array[0]=array[j];
		array[j]=temp;
		PrecolateUp(arr,0,j);//����Ľڵ��ڼ��٣����������������ڲ��ϼ���
	}
}

//�����󶥶�
void BuildHeap(int *array)
{
	int i;
	for(i=4;i>=0;i--)//�ӵ�һ����Ҷ�ӽڵ㿪ʼ�����㷽��Ϊ��array.length/2-1?Ϊʲô?
	{
		PrecolateUp(arr,i,10);//��ȫ��Ԫ�ؽ��������γɴ󶥶�
	}
}
//���ˡ������ң����ϵ���
void PrecolateUp(int *array,int i,int length)
{
		int temp,k;
		temp = array[i];//���ڵ�ֵ����temp��

		for(k=i*2+1;k<length;k=2*k+1)//�ӽڵ�i����ڵ㿪ʼ
		{
			if(array[k+1]>array[k] && k+1<length)//���ӽڵ�������ӽڵ�
			{
				k++;
			}
			if(array[k]>temp)//������ӽڵ���ڸ��ڵ�
			{
				array[i]=array[k];//�����ӽڵ��ֵ��Ϊ���ڵ�
                array[k]=temp;//����ֱ�ӽ�����Ҳ���Խ�temp�е�ֵ�ŵ����ȷ����λ��
				i=k;//���ڵ������ҲҪ��Ϊk
			}
			
			else
			{
				break;
			}
			
		}
		//array[i]=temp;//��temp��ֵ�ŵ����յ�λ��
}

void main()
{
	int i,j;
	HeapSort(arr); 
	for(i=0;i<10;i++)
	printf("%d ",arr[i]);
	system("pause");
}