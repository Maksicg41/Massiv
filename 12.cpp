#include <iostream>
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
    bool vys(int year)
    {
        bool res = false;
        if (year % 4 == 0)
            res = true;
        if (year % 100 == 0)
            res = false;
        if (year % 400 == 0)
            res = true;
        return res;
    }
    int date(int d, int m, int y)
    {
        int k = d;
        if (vys(y) && (m > 2))
            k += y * 366;
        else k += y * 365;
        switch (m - 1)
        {
        case 12: k += 31;
        case 11: k += 30;
        case 10: k += 31;
        case  9: k += 30;
        case  8: k += 31;
        case  7: k += 31;
        case  6: k += 30;
        case  5: k += 31;
        case  4: k += 30;
        case  3: k += 31;
        case  2: k += 28;
        case  1: k += 31;
        }
        return k;
    }
    int difference(int day1, int day2, int mon1, int mon2, int year1, int year2)
    {
        int k = date(day2, mon2, year2) - date(day1, mon1, year1) + 1;
        return k;
    }
    void main()
    {
        int d1, d2, m1, m2, y1, y2;
        cout << "Input first day: ";
        cin >> d1;
        cout << "Input first month: ";
        cin >> m1;
        cout << "Input first year: ";
        cin >> y1;
        cout << "Input second day: ";
        cin >> d2;
        cout << "Input second month: ";
        cin >> m2;
        cout << "Input second year: ";
        cin >> y2;
        cout << "Between these two dates are " << difference(d1, d2, m1, m2, y1, y2) << " days\n";
    }
    
    double average(int arr[], int len) {
        double sum = 0;
        for (int i = 0; i < len; i++) {
            sum += arr[i];
        }
        return sum / len;
    }

    int main() {
        int arr[] = { 1, 2, 3, 4, 5 };
        int len = sizeof(arr) / sizeof(arr[0]);
        std::cout << average(arr, len) << std::endl; // 3
        return 0;
    }

    int massiv[] = { 1, -2, 3, -4, 0, 0, -7, 8, -9 };
    int arDimention = sizeof(massiv) / sizeof(int);
    cout << "The program searches for the number of" << endl <<
        "positive, negative and zero elements" << endl;
    //выводим на экран исходный массив
    printArr(massiv, arDimention);
    //вызываем функцию подсчета +/-/0 элементов
    calculatingMassiv(massiv, arDimention);
    return 0;
}

void printArr(int arr[], int dimention)
{
    cout << "Start massiv: ";
    for (int i = 0; i < dimention; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void calculatingMassiv(int arr[], int dimention)
{
    int plus = 0;
    int minus = 0;
    int zero = 0;

    for (int i = 0; i < dimention; i++)
    {
        if (arr[i] > 0)
        {
            plus++;
        }
        else if (arr[i] < 0)
        {
            minus++;
        }
        else
        {
            zero++;
        }
    }
    cout << "The number of positive elements = " << plus << endl <<
        "The number of negative elements = " << minus << endl <<
        "The number of zero elements = " << zero << endl;


}