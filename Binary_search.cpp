#include <iostream>
using namespace std;

int binarySearch(int [], int, int); //function prototype

int main() {
    const int NUMEL {10};
    int nums[NUMEL] = {5,10,22,32,45,67,73,98,99,101};
    int item {0}, location {0};
    cout << "Enter the item you are searching for in the array: "; 
    cin >> item; 
    location = binarySearch(nums, NUMEL, item);
    if (location > -1) {
        cout << "The item was found at index location " << location << endl;
    } else {
        cout << "The item was not found in the array\n";
    }
    return 0;
}

//This function returns the location of key in the list 
//a -1 is returned if the value is not found

//function args array to be searched, array size & integer search key 
int binarySearch(int list[], int size, int key) {
    int left {0}, right {0}, midpt {0};
    left = 0;
    right = size - 1; //10 -1 = 9, index start 0

    while (left <= right) {
        midpt = (int) ((left + right) /2); //middle element of the array
        if (key == list[midpt]) {
            return midpt;
        //If the search key is less than the middle element of the array, 
        //the first half of the array is searched;
        } else if (key > list[midpt]) {
            left = midpt + 1;
        //Otherwise the second half of the array is searched
        } else {
            right = midpt - 1;
        }
    }
    return -1; //If the search key is not found in the specified subarray
}

//Testing out Binary Search

