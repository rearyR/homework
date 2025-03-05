﻿//求一大小為n的整數陣列中，第0個元素之值是否為其中之最大值？
#include<iostream>
using namespace std;
int main() {
	
	int n;
	cin >> n;

	int* arr = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	bool isBiggest = true;
	
	for (int i = 1; i < n; i++) {
		if (arr[0] <= arr[i]) {
			isBiggest = false;
			break;
		}
	}

	if (isBiggest) cout << "yes" << endl;
	else cout << "no" << endl;

	delete[] arr;
	return 0;
}