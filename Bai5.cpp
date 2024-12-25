#include <stdio.h>
#include <stdlib.h>

int bubbleSort(int arr[], int n){
	int count = 0;
	for(int i = 0; i < n-1; i++){
		int stop = 0;
		for(int j = 0; j < n-i-1; j++){
			if(arr[j] > arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				stop++;
				count++;
			}
		}
		
		if(stop == 0){
			return count;
		}
	}
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
	int result = bubbleSort(arr, n);
	printf("Sap xep hoan thanh sau %d lan lap\n");
	printf("Mang da sap xep: ");
	for(int i = 0; i < n; i++){
		printf("%d\t", arr[i]);
	}
	printf("\n");
	return 0;
}

