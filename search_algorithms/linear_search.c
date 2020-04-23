#include <stdio.h>

int linear_search(int arr[], int search){
	for (int i=0;i<sizeof(arr)/sizeof(arr[0]);++i){
		if (arr[i] == search){
			return search;
		}
	}
	return -1;
}

int main(){
	int arr[] = {124,234,24,234};
	printf("%d\n", linear_search(arr, 32));
}