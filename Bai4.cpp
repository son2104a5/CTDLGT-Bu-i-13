#include <stdio.h>
#include <stdlib.h>

void insertionSort(int arr[], int n){
	for(int i = 0; i < n-1; i++){
		int min = i;
		for(int j = i + 1; j < n; j++){
			if(arr[j] < arr[min]){
				min = j;
			}
		}
		int temp = arr[i];
		arr[i] = arr[min];
		arr[min] = temp;
	}
}


int main(){
	int n, searchValue;
	scanf("%d", &n);
	int arr[n];
	for(int i =0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	printf("before: ");
	for(int i = 0; i < n; i++){
		printf("%d\t", arr[i]);
	}
	printf("\n");
	insertionSort(arr, n);
	printf("after: ");
	for(int i = 0; i < n; i++){
		printf("%d\t", arr[i]);
	}
	printf("\n");
	return 0;
}

