#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n) {
	
	for(int i = 0; i < n - 1; i++) {
		int min_idx = i;
		for(int j = i + 1; j < n; j++) {
			if(arr[min_idx] > arr[j]) {
				min_idx = j;
			}
		}
		swap(arr[min_idx], arr[i]);
	
	}
}

void print(int arr[], int n) {
	for(int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main() {
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cout << "Before sorting: ";
	print(arr, n);
	cout << "after sorting: ";
	selectionSort(arr, n);
	print(arr, n);
	return 0;
}
	
