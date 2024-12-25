#include <stdio.h>
#include <stdlib.h>

int selectionSort(int arr[], int n){
	int count = 0;
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
		printf("Hoan doi: ");
		for(int i = 0; i < n; i++){
			printf("%d\t", arr[i]);
		}
		count++;
		printf("\n");
	}
	return count;
}

int main(){
	int n;
	scanf("%d", &n);
	int arr[n];
	for(int i =0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	printf("Mang ban dau: ");
	for(int i = 0; i < n; i++){
		printf("%d\t", arr[i]);
	}
	printf("\n");
	int result = selectionSort(arr, n);
	printf("Sap xep hoan thanh voi %d lan thay doi\n", result);
	printf("Mang da sap xep: ");
	for(int i = 0; i < n; i++){
		printf("%d\t", arr[i]);
	}
	printf("\n");
	return 0;
}

