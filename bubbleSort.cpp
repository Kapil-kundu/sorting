#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n) {
	for(int i = 0; i < n - 1; i++) {
		for(int j = 0; j < n - 1 - i; j++) {
			if(arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
			}
		}
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
	cout << "before sorting: ";
	print(arr, n);
	cout << " after sorting: ";
	bubbleSort(arr, n);
	print(arr, n);
	return 0;
}
