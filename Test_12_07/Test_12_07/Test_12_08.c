/*
date��2018/12/7
author:BetterMe1
program:
compiler:Visual Studio 2013
*/

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
/*1.ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��������9�����9*9�ھ�������12�����12*12�ĳ˷��ھ���;*/
//�˷��ھ���;
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
//	int n = 0;//�С���;
//	printf("���������ӡ�˷��ھ�����С�����:>");
//	scanf("%d", &n);
//	printf("%d*%d�˷��ھ���:\n",n,n);
//	multiplication_table(n);//�˷��ھ���;
//	system("pause");
//	return 0;
//}
/*2.ʹ�ú���ʵ���������Ľ���;*/
//ע��ʹ��ָ�룬�������ָ�룬ֻ�ǽ�����x,y��ֵ�������ǽ�����a,b��ֵ;
//ʹ��ָ��ʹx,yָ��a,b�ĵ�ַ���ı�x,y��ֵ�Ⱦ��Ǹı�ָ��a,b��ֵ;
//void swap(int* x, int* y){
//	int temp = *x;
//	*x = *y;
//	*y = temp;
//}
//
//int main(){
//	int a = 0;
//	int b = 0;
//	printf("������Ҫ��������:>");
//	scanf("%d %d", &a, &b);
//	swap(&a,&b);
//	printf("%d %d\n", a, b);
//	system("pause");
//	return 0;
//}
/*3.ʵ��һ�������ж�year�ǲ������ꡣ */
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
//	printf("���������:>");
//	scanf("%d", &year);
//	if (Is_leap(year) == 1){
//		printf("%d�����ꡣ\n", year);
//	}
//	else{
//		printf("%d��ƽ�ꡣ\n", year);
//	}
//	system("pause");
//	return 0;
//}
/*4.����һ�����飬ʵ�ֺ���init������ʼ�����顢ʵ��empty����������顢ʵ��reverse���������������Ԫ�ص����á� */
//��ʼ������;
//#include <memory.h>
//void init(int arr[],int len){
//	for (int i = 0; i < len; i++){
//		int input = 0;
//		printf("�������%d��ֵ:>",i+1);
//		scanf("%d", &input);
//		arr[i] = input;
//	}
//}
////��ӡ����;
//void print_arr(int arr[], int len){
//	for (int i = 0; i < len; i++){
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
////��������;
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
//	printf("�������ʼ������ĳ���(������1000):>");
//	scanf("%d", &len);
//	init(arr, len);//��ʼ������;
//	printf("��ʼ���������Ϊ:>");
//	print_arr(arr, len);//��ӡ����;
//	reverse(&arr, len);//��������;
//	printf("����������Ϊ:>");
//	print_arr(arr, len);
//	empty(arr, len);
//	printf("��պ������Ϊ:>");
//	print_arr(arr, len);
//	system("pause");
//	return 0;
//}
/*5.ʵ��һ���������ж�һ�����ǲ�������;*/
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
	printf("������һ����:>");
	scanf("%d", &n);
	if (IsPrime(n) == 1){
		printf("%d������\n", n);
	}
	else{
		printf("%d��������\n", n);
	}
	system("pause");
	return 0;
}