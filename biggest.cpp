/*
    Jake Ferner
    program: biggest.cpp
*/
#include <fstream>
#include <iostream>

using namespace std;

int main() {
    int nums[10];
    cout << "\nEnter 10 integers" << endl;
    for (int i = 0; i < 10; i ++) {
        cin >> nums[i];
    }
    int biggest = nums[0];
    for (int i = 0; i < 10; i ++) {
        if (nums[i] > biggest) {
            biggest = nums[i];
        }
    }
    cout << "\nThe biggest integer you entered is " << biggest << endl;
}