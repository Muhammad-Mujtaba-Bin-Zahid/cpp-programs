#include <iostream>
using namespace std;
int const rowA = 3, colA = 3, rowB = 3, colB = 3;                           
// set the rows and column of each matrix using global variables
void GetValueA(int A[rowA][colA]);                                          
// seperate function declaration for each array because order can be different
void GetValueB(int B[rowB][colB]); 
void ComputeAxB(int A[rowA][colA], int B[rowB][colB], int C[rowA][colB]);   
// function to compute AxB
void PrintArray(int A[rowA][colB]);                                         
// function to print the resulting matrix
int main() {
    if (colA != rowB) {                                                     
        // a check to validate if multiplication is possible
        cout << "Multiplication isn't possible.";
        return 0;
    }
    int arr1[rowA][colA], arr2[rowB][colB], result[rowA][colB];             
    // initialization of three arrays
    cout << "Enter Values for Array 1." << endl;
    GetValueA(arr1);                                                        
    // getting input for both arrays by calling the specific function
    cout << "\nEnter Values for Array 2." << endl;
    GetValueB(arr2);
    ComputeAxB(arr1, arr2, result);                                         
    // function called to compute the result
    PrintArray(result);                                                     
    // function called the print the resulting matrix
    return 0;
}
void GetValueA(int A[rowA][colA]) {                                         
    // function to get the inputs for first matrix
    for (int i = 0; i < rowA; i++) {
        for (int j = 0; j < colA; j++) {
            cout << "[" << i+1 << "][" << j+1 << "] = ";
            cin >> A[i][j];
        }
        cout << endl;
    }
}
void GetValueB(int B[rowB][colB]) {                                         
    // function to get the inputs for second matrix
    for (int i = 0; i < rowB; i++) {
        for (int j = 0; j <colB; j++) {
            cout << "[" << i+1 << "][" << j+1 <<"] = ";
            cin >> B[i][j];
        }
        cout << endl;
    }
}
void ComputeAxB(int A[rowA][colA], int B[rowB][colB], int C[rowA][colB]){   
    // function to multiply the A and B matrices correctly
    for (int i = 0; i < rowA; i++) {
        for (int j = 0; j < colB; j++) {
            C[i][j] = 0;
            for (int k = 0; k < rowB; k++) {
                C[i][j] += A[i][k]*B[k][j];
            }
        }
    }
}
void PrintArray(int A[rowA][colB]){                                         
    // function to print the resulting matrix
    cout << "\nA x B\n";
    for (int i = 0; i < rowA; i++) {
        for (int j = 0; j < colB; j++) {
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }   
}