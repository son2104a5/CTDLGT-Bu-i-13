#include <stdio.h>
#include <stdlib.h>

void selectionSort(int arr[], int n){
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

int binarySearch(int arr[], int n, int searchValue){
	int low = 0;
	int high = n - 1;
	while(low <= high){
		int mid = low + (high - low) / 2;
		if(arr[mid] == searchValue){
			return mid;
		} else if (arr[mid] > searchValue){
			high = mid - 1;
		} else {
			low = mid + 1;
		}
	}
	return -1;
}

int main(){
	int n, searchValue;
	scanf("%d", &n);
	int arr[n];
	for(int i =0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	selectionSort(arr, n);
	scanf("%d", &searchValue);
	int result = binarySearch(arr, n, searchValue);
	printf("Mang sau khi sap xep:\n");
	for(int i = 0; i < n; i++){
		printf("%d\t", arr[i]);
	}
	printf("\n");
	if(result != -1){
		printf("Phan tu %d duoc tim thay o vi tri thu %d", searchValue, result);
	} else printf("Khong tim thay phan tu %d", searchValue);
	return 0;
}

