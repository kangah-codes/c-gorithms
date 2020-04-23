// author = Joshua Akangah

#include <stdio.h>

void bubble_sort(int arr[], int n){
	for (int i=0;i<n;++i){
		bool swapped = false;

		for (int j=0;j<n;++j){
			if (arr[j] > arr[j+1]){
				int temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
				swapped = true;
			}
		}

		if (!swapped){
			break;
		}
	}
}

void printArray(int arr[], int size){
	for (int i=0;i<size;++i){
		printf("%d ", arr[i]);
	}
}

int main(){
	int arr[] = {1,2234,534,242};

	bubble_sort(arr, sizeof(arr)/sizeof(arr[0]));

	printArray(arr, sizeof(arr)/sizeof(arr[0]));

	return 0;
}