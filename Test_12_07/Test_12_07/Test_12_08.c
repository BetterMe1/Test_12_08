/*
date：2018/12/7
author:BetterMe1
program:
compiler:Visual Studio 2013
*/

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
/*1.实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定，输入9，输出9*9口诀表，输入12，输出12*12的乘法口诀表;*/
//乘法口诀表;
//void multiplication_table(int n){
//	for (int i = 1; i <= n; i++){
//		for (int j = 1; j <= i; j++){
//			printf("%d*%d=%d  ", i, j, i*j);
//		}
//		printf("\n");
//	}
//}
//
//int main(){
//	int n = 0;//行、列;
//	printf("请输入想打印乘法口诀表的行、列数:>");
//	scanf("%d", &n);
//	printf("%d*%d乘法口诀表:\n",n,n);
//	multiplication_table(n);//乘法口诀表;
//	system("pause");
//	return 0;
//}
/*2.使用函数实现两个数的交换;*/
//注意使用指针，如果不用指针，只是交换了x,y的值，而不是交换了a,b的值;
//使用指针使x,y指向a,b的地址，改变x,y的值既就是改变指向a,b的值;
//void swap(int* x, int* y){
//	int temp = *x;
//	*x = *y;
//	*y = temp;
//}
//
//int main(){
//	int a = 0;
//	int b = 0;
//	printf("请输入要交换的数:>");
//	scanf("%d %d", &a, &b);
//	swap(&a,&b);
//	printf("%d %d\n", a, b);
//	system("pause");
//	return 0;
//}
/*3.实现一个函数判断year是不是闰年。 */
//int Is_leap(int year){
//	if (year % 100 == 0){
//		if (year % 4 == 0){
//			return 1;
//		}
//		return 0;
//	}
//	else{
//		if (year % 4 == 0){
//			return 1;
//		}
//		return 0;
//	}	
//}
//
//int main(){
//	int year = 0;
//	printf("请输入年份:>");
//	scanf("%d", &year);
//	if (Is_leap(year) == 1){
//		printf("%d是闰年。\n", year);
//	}
//	else{
//		printf("%d是平年。\n", year);
//	}
//	system("pause");
//	return 0;
//}
/*4.创建一个数组，实现函数init（）初始化数组、实现empty（）清空数组、实现reverse（）函数完成数组元素的逆置。 */
//初始化数组;
//#include <memory.h>
//void init(int arr[],int len){
//	for (int i = 0; i < len; i++){
//		int input = 0;
//		printf("请输入第%d个值:>",i+1);
//		scanf("%d", &input);
//		arr[i] = input;
//	}
//}
////打印数组;
//void print_arr(int arr[], int len){
//	for (int i = 0; i < len; i++){
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
////逆序数组;
//void reverse(int* arr[], int len){
//	int left = 0;
//	int right = len-1;
//	while (left < right){
//		int temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//}
//void empty(int arr[], int len){
//	memset(arr, '\0', sizeof(int)*len);
//}
//int main(){
//	int len = 0;
//	int arr[1000] = { 0 };
//	printf("请输入初始化数组的长度(不超过1000):>");
//	scanf("%d", &len);
//	init(arr, len);//初始化数组;
//	printf("初始化后的数组为:>");
//	print_arr(arr, len);//打印数组;
//	reverse(&arr, len);//逆序数组;
//	printf("逆序后的数组为:>");
//	print_arr(arr, len);
//	empty(arr, len);
//	printf("清空后的数组为:>");
//	print_arr(arr, len);
//	system("pause");
//	return 0;
//}
/*5.实现一个函数，判断一个数是不是素数;*/
#include<math.h>
int IsPrime(int n){
	for (int i = 2; i <= sqrt(n); i++){
		if (n%i == 0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int n = 0;
	printf("请输入一个数:>");
	scanf("%d", &n);
	if (IsPrime(n) == 1){
		printf("%d是素数\n", n);
	}
	else{
		printf("%d不是素数\n", n);
	}
	system("pause");
	return 0;
}