// ArrayStatisticsCalculatorAdvanced
// TITLE: Array Statistics Calculator with Mean and Median

#include <iostream>
using namespace std;

// Function that adds up the array and divides it by the size to find the mean
// Returns the answer
float mean(int size[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += size[i];
    return (sum / (float)n);
}

// Function that sorts the array then finds the middle of the array
// If array size is even, it gets the two middle elements and divides them by 2
// If array size is odd, it only gets the middle element
// Prints the numbers that the user put in sorted, then returns the answer
float median(int size[], int n) {
    int temp;
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (size[i] > size[j]) {
                temp = size[i];
                size[i] = size[j];
                size[j] = temp;
            }

    cout << "The list is:" "\n{";
    for (int i = 0; i < n; i++) {
        cout << size[i];
        if (i != n - 1) {
            cout << ",";
        }
    }
    cout << "}\n";

    if (n % 2 == 0)
        return ((size[n / 2 - 1] + size[n / 2]) / 2.0);
    else
        return (size[n / 2]);
}

// Main function where we give the max array size of 100
// Then we ask for the size of the array and ask for the numbers
// Then we add the numbers to the array
// Then we call the functions and print them
int main() {
    int size[100];
    int n;
    float median1, mean1;

    cout << "Enter size of array: ";
    cin >> n;
    cout << "Enter the list of numbers :";
    for (int i = 0; i < n; i++) {
        cin >> size[i];
    }

    median1 = median(size, n);
    cout << "The Median is = " << median1 << endl;
    mean1 = mean(size, n);
    cout << "The Mean is = " << mean1 << endl;

    return 0;
}
