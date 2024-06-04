#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int reversedNum = 0;
    int originalNum = num;

    while (num > 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    int sum = originalNum + reversedNum;

    cout << "Sum of " << originalNum << " and its reverse " << reversedNum << " is " << sum << endl;

    return 0;
}

// output is

Enter a number: 12
Sum of 12 and its reverse 21 is 33
