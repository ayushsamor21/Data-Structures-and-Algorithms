#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr;
    int size, element;
    cout << "Enter the size of the array: ";
    cin >> size;
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> element;
        arr.push_back(element);
    }

    int secondLargest = INT_MIN;
    int largest = INT_MIN;
    for (int i = 0; i < size; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    cout << "The second largest element is: " << secondLargest << endl;
    return 0;
}   