#include <iostream>
using namespace std;
void getExtremes(float& min,float& max, float a[], int n);          
// function declaration and passing variables by reference (&)
int main() {
    float max, min;                                                 
    // variable intialization
    float arr[] = {67, -15, 0, 1, 10};                              
    // array defination
    int size = sizeof(arr)/sizeof(arr[0]);                          
    // calculate the size of array
    cout << "Array is : ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    // outputs the array
    getExtremes(min, max, arr, size);                               
    // function is called to get the extremes
    cout << "\n\nMin: " << min 
         << "\nMax: " << max;
    return 0;
}
void getExtremes(float& min,float& max, float a[], int n){          
    // function to get the minimum and maximum value from array
    min = a[0];
    max = a[0];
    for (int i = 0; i < n; i++) {
        if (min < a[i]) { min = a[i]; }
        if (max > a[i]) { max = a[i]; }
        // finds the maximum and minimum
    }
}