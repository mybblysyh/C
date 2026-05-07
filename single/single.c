#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int arr[] = { 1,2,1,3,2,4,5,4,3 };
	

	int res = sizeof(arr) / sizeof(arr[0]);
	/* 法一:for (int i = 0; i < res; i++) {
		int count = 0;
		for (int j = 0; j < res; j++) {
			
			if (arr[i] == arr[j]) {
				count++;
			}
			
		}
		if (count == 1) {
			printf("单身狗:%d\n", arr[i]);
		}
	}
	return 0;*/
	//法二:
	int num = 0;
	for (int i = 0; i < res; i++) {
		num=num^arr[i];
		
	}
	printf("单身狗:%d\n", num);
	

}