#include <iostream>
using namespace std;

int findLengthUsingBinarySearch(const char arr[], int maxSize) {
    int low = 0, high = maxSize - 1;
    int result = -1;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == '\0') {
            result = mid;
            high = mid - 1; 
        } else {
            low = mid + 1; 
        }
    }

    return result; 
}

int main() {
    char arr[1000] = "abcd";
    int length = findLengthUsingBinarySearch(arr, 1000);
    cout << "Length of string: " << length << endl;
    return 0;
}
