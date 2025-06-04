#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int mid, int low, int high) {
	int a[100];
	int i = low, j = mid + 1, k = low;
	while(i <= mid && j <= high) {
		if(arr[i] <= arr[j]) {
			a[k] = arr[i];
			k++, i++;
		} else {
			a[k] = arr[j];
			k++, j++ ;
		}
	}
	while(i <= mid) {
		a[k] = arr[i];
		i++, k++;
	}
	while(j <= high) {
		a[k] = arr[j];
		j++, k++;
	}
	for(int i = low; i <= high; i++) {
		arr[i] = a[i];
	}
}
void merge_sort(int arr[], int low, int high) {
	if(low >= high) {
		return;
	}
	int mid = (low + high) / 2;	
	merge_sort(arr, low, mid);
	merge_sort(arr, mid + 1, high);
	merge(arr, mid, low, high);
}

int main() {
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	merge_sort(arr, 0, n - 1);
	for(int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
}
