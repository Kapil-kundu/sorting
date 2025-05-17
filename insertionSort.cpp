#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n) {	
	int key;
	for(int i = 1; i < n; i++) {
		int key = arr[i];
		int j = i - 1;
		// arr[1] = 8
		while(arr[j] > key && j >= 0) {
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}
}

void print(int a[], int n) {
	for(int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}

int main() {
	//  0 1 2 3 4 
	//  3 0 2 4 6
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cout << "Before sorting : ";
	print(a, n);
	insertionSort(a, n);
	cout << "After sorting : ";
	print(a, n);
	return 0;
}
