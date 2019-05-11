#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main()
{
	int arr0[5], arr1[5], temp;
	printf("请输入数组一的5个数,以空格隔开\n");
	for (int i = 0; i < 5; i++){
		scanf("%d", &arr0[i]);
	}
	printf("第一个数组arr0的值为:\n");
	for (int i = 0; i < 5; i++){
		printf("%d\t", arr0[i]);
	}
	printf("\n");
	printf("请输入数组二的5个数,以空格隔开\n");
	for (int i = 0; i < 5; i++){
		scanf("%d", &arr1[i]);
	}
	printf("第二个数组arr1的值为:\n");
	for (int i = 0; i < 5; i++){
		printf("%d\t", arr1[i]);
	}
	printf("\n");
	for (int i = 0; i < 5; i++){
		temp = arr0[i];
		arr0[i] = arr1[i];
		arr1[i] = temp;
	}//交换arr0与arr1中的值;
	printf("交换后的值为\n");
	for (int i = 0; i < 5; i++){
		printf("%d\t", arr0[i]);
	}
	printf("\n");
	for (int i = 0; i < 5; i++){
		printf("%d\t", arr1[i]);
	}
	system("pause");
	return 0;
}

int main1()
{
	int i;
	double sum = 0;
	for (i = 1; i < 101; i++){
		sum += (pow(-1, i + 1)) / i;
	}
	printf("和值约为%f\n", sum);
	system("pause");
	return 0;
}

int main2()
{
	int i, j=0;
	for (i = 1; i < 101; i++){
			if (i % 10 == 9){
				j++;
			}
		    if(i-i%10==90){
				j++;
		}
	}
	printf("1-100中含9的个数为：%d\n", j);
	system("pause");
	return 0;
}