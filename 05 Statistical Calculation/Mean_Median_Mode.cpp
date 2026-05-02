#include <iostream>
#include <algorithm>
// library for the function sort()
using namespace std;
// function declaration
double getMean(int a[], int n);
double getMedian(int a[], int n);
void getMode(int& mode, int& occurance, int a[], int n);
// passing variables by reference (&)
int main() {
    int arr[] ={34, 56, 34, 23, 13, 45, 34, 78, 55, 99};
    // array intialization
    int size = sizeof(arr)/sizeof(arr[0]);
    // calculating size of array
    int mode = 0, occurance = 0;
    // intialiizing required variables
    cout << "Array is : ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    // outputs the array
    getMode(mode, occurance, arr, size);
    // function called to calculate the mode
    cout << "\n\nMean   : " << getMean(arr, size)
         // function called to get mean
         << "\nMedian : " << getMedian(arr, size)
         // function called to get median
         << "\nMode   : " << mode 
         << " appeared " << occurance << " times";
         // output the mode and how many times it appeared
}
double getMean(int a[], int n) {
    // function to calculate the mean
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
        // calculate the sum
    }
    // return the mean/average
    return sum/n;
}
double getMedian(int a[], int n) {
    // function to calculate the median
    sort(a, a + n);
    // sort the array in increasing order
    if (n % 2 != 0) {
        return a[n/2];
        // if size of array is odd, return the middle value
    } else {
        return (a[n/2]+a[(n-1)/2])/2;
        /*  if size of array is even,
            return the average of two middle values */
    }
}
void getMode(int& mode, int& occurance, int a[], int n) {
    // function to calculate the mode and occurance
    for (int i = 0; i < n; i++) {
        // nested loop to match each value with whole array
        int count = 0;
        // variable to find occurance
        for (int j = 0; j < n; j++) {
            if (a[i] == a[j]) {
                count++;
                // increment
            }
        }
        if (count > occurance) {
            // finds the value which appeared the most
            occurance = count;
            mode = a[i];
        }
    }
}