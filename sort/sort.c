#include <stdio.h>
#include "globalFunc.h"
#include "array_funcs.h"

int sort(){
	printf("it's sort\n");
	//int arr[9] = {9, 1, 5, 8, 3, 7, 4, 6, 2};
	int arr[10] = {4, 1, 5, 8, 0, 3, 7, 9, 6, 2};
	//int arr[10] = {0 ,2, 3, 1, 4, 5, 6, 7, 8, 9};
	printArrInt(arr, 10);
	//genericSort(arr, 10);
	bubbleSort(arr, 10);
	printArrInt(arr, 10);
	return 0;
}

int genericSort(int * arr, int len){
	int i, j;
	int count = 0; // just use for debug msg
	int count2 = 0; // just use for debug msg
	for (i = 0; i < len - 1; i++) {
        for (j = i+1; j < len; j++){
			count++; // just use for debug msg
			if (arr[j] < arr[i]){
                count2++; // just use for debug msg
				swap(arr, i, j);
                printf("step %d: changing: ", count); // just use for debug msg
				printArrIntHl(arr, len, i, j); // just use for debug msg
			}
		}
	}
	printf("change count: %d\n", count2);
	printf("compare count: %d\n", count);

	return 0;
}

int swap(int * arr, int i, int j){
	int iTmp = arr[i];
	arr[i] = arr[j];
	arr[j] = iTmp;
}

int bubbleSort(int * arr, int len){
	int i, j, count, count2;
	count = 0;
	count2 = 0;

	for (i = 0; i < len - 1; i++) {
		for (j = len -1; j > i; j--) {
			count++;
			if (arr[j-1] > arr[j]) {
				count2++;
				swap(arr, j, j-1);
				printf("step %d: changing: ", count);
				printArrIntHl(arr, len, j-1, j);
			}
		}
	}
	printf("change count: %d\n", count2);
	printf("compare count: %d\n", count);
}