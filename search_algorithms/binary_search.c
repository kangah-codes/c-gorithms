#include <stdio.h>

int binary_search(int arr[], int i, int r, int val){
	// i = index 0
	// r = length of array
	if (r >= i){
		int mid = i + (r - 1) / 2;
		if (arr[mid] == val){
			return mid;
		}else if (arr[mid] < val){
			return binary_search(arr, mid+1, r, val);
		}else{
			return binary_search(arr, mid-1, r, val);
		}
	}else{
		return -1;
	}
}


int main(){
	int arr[] = {2, 3, 4, 10, 40};
	int i = 0;
	int r = 4;
	int val = 100;

	printf("%d\n", binary_search(arr, i, r, val));
}