#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

using namespace std;

int nAmount;
unsigned long long int x = 0;
int n = 0;

class Number {
public:
    int number;
};

void printSeq(int num, int a[], int len, int s, Number number[])
{
    if(num <= 0){
        for(int j = 0; j < len; j++){
            n = 0;
            for (int k = 0; k < nAmount; k++){
                if (a[j] == number[k].number) {
                    n = 1;
                }
            }
            if (n == 0){
                n = 0;
                break;
            }
        }
    }

    if (n == 1){
        x = x + 1;
        n = 0;
    }
    n = 0;

    for(int i = s; i <= num; i++)
    {
        a[len] = i;
        printSeq(num - i, a, len + 1, i, number);
    }
}

Number getNumber() {
    Number number;

    cout << "Enter number: ";
    cin >> number.number;

    return number;
}

int getNumbers(Number number[]){
    int i;
    for (i = 0; i < nAmount; i++){
        number[i] = getNumber();
    }
    return i;
}


int main()
{
    cout << "Enter the required outcome number: ";
    int nIn;
    cin >> nIn;

    cout << "Enter the amount of numbers to be typed in: ";
    cin >> nAmount;

    Number number[nAmount];

    getNumbers(number);

    int a[nIn];
    printSeq(nIn,a,0,1,number);

    cout << "The possible amount of outcome is: " << x;

    getch();
}
