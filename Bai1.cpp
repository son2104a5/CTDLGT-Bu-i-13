#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int arr[], int n){
	for(int i = 0; i < n-1; i++){
		int stop = 0;
		for(int j = 0; j < n-i-1; j++){
			if(arr[j] > arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				stop++;
			}
		}
		if(stop == 0){
			return;
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
	printf("before: ");
	for(int i = 0; i < n; i++){
		printf("%d\t", arr[i]);
	}
	printf("\n");
	bubbleSort(arr, n);
	printf("after: ");
	for(int i = 0; i < n; i++){
		printf("%d\t", arr[i]);
	}
	printf("\n");
	return 0;
}

