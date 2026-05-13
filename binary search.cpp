#include <iostream>
using namespace std;

int main() {

    int numbers[] = {2, 5, 8, 12, 16, 23, 38, 45, 56};
    int size = 9;

    int key;
    cout << "Enter number to search: ";
    cin >> key;

    int low = 0;
    int high = size - 1;
    int mid;
    bool found = false;

    // Binary Search
    while(low <= high) {

        mid = (low + high) / 2;

        if(numbers[mid] == key) {

            cout << "Number found at index "
                 << mid;

            found = true;
            break;
        }

        else if(key > numbers[mid]) {
            low = mid + 1;
        }

        else {
            high = mid - 1;
        }
    }

    if(found == false) {
        cout << "Number not found";
    }

    return 0;
}
