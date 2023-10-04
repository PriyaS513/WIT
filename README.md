# WIT
   
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int findNthLargest(vector<int>& arr, int n) {
    if (n < 1 || n > arr.size()) {
        cout << "Invalid value of N." << endl;
        return -1;
    }

    nth_element(arr.begin(), arr.begin() + n - 1, arr.end(), greater<int>());
    return arr[n - 1];
}

int main() {
    int n, N;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the value of N (Nth largest): ";
    cin >> N;

    int nthLargest = findNthLargest(arr, N);

    if (nthLargest != -1) {
        cout << "The " << N << "th largest element is: " << nthLargest << endl;
    }

    return 0;
}
