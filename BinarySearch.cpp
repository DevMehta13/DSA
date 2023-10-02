#include<iostream>
#include<vector>
using namespace std;

int binarySearch(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;
    while (start <= end) {
        int mid = (start + end) / 2;
        if (arr[mid] == key)
            return mid;
        if (arr[mid] < key) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    return -1; 
}

int main() {
    int size, key, i;
    cout << "Enter the size of array: ";
    cin >> size;
    int arr[size];
    cout << "Enter the elements of array: ";
    for (i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cout << "Enter the key : ";
    cin >> key;
    int result = binarySearch(arr, size, key);
    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } 
    else {
        cout << "Element not found" << endl;
    }
    return 0;
}
