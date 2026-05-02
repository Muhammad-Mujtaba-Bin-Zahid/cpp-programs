#include <iostream>
#include <cmath>
using namespace std;
double stdev(double x[], int n);                                
// function declaration
int main() {
    double arr[] = {90000, 67.677, 4567, 420, 23000};           
    // array initialization
    int size = sizeof(arr)/sizeof(arr[0]);                      
    // calculate the size of array
    cout << "The Standard Deviation is: " << stdev(arr, size);  
    // function is called to calculate the standard deviation
    return 0;
}
double stdev(double x[], int n) {                               
    // function definition
    double sum = 0, avg = 0, dev, div, sqsum = 0, diff = 0;     
    // intializing required variables for calculation
    for (int i = 0; i < n; i++) {                               
        // calculates the sum
        sum += x[i];
    }
    avg = sum/n;                                                
    // calculated the average or x^bar
    for (int i = 0; i < n; i++) {                               
        // loop to calculate the sigma(i=0 to i=n-1)
        diff = x[i]-avg;
        sqsum += pow(diff, 2);
    }
        div = sqsum/(n-1);
        dev = sqrt(div);
        return dev;                                             
        // returns the standard deviation
}