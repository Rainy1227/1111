#include<stdio.h>
#include<stdlib.h>

void bublle(int* arr, int num);
int main()
{
	int num;
	printf("请输入需排序多少位数字：");
	scanf_s("%d", &num);
	int* arr = (int*)malloc(num * sizeof(int));
	int i;
	for (i = 0; i < num; i++) {
		scanf_s("%d", &arr[i]);
	}
	bublle(arr,  num);
	for (i = 0; i < num; i++) {
		printf("%d ",arr[i]);
	}

}
void bublle(int* arr, int num)
{
	int i;
	for (i = 0; i < num - 1; i++) {
		int j;
		for (j = 0; j < num - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int tem;
				tem = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tem;
			}
		}
	}
}
