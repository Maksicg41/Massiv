#include <iostream>
#include <Windows.h>
void Unoarray(int* arr, int size)
{
    cout << "Нахождение максимального значения в одномерном массиве;." << endl;
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100;
        cout << arr[i] << endl;
    }
    cout << endl;
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    cout << "\nМаксимальное значение в одномерном массиве: " << max << endl << endl;

    cout << endl << endl;
}
void Dosarray(int** arr, int size) {
    cout << "Нахождение максимального значения в двухмерном массиве;." << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            arr[i][j] = rand() % 100;
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    int max = arr[0][0];
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
    }
    cout << "\nМаксимальное значение во двухмерном массиве: " << max << endl << endl;
    cout << endl << endl;
}

void tresarray(int*** arr, int size) {
    cout << "Нахождение максимального значения в трехмерном массиве;." << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            for (int z = 0; z < size; z++)
            {
                arr[i][j][z] = rand() % 100;
                cout << arr[i][j][z] << "\t";
            }
            cout << endl;
        }
        int max = arr[0][0][0];
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                for (int z = 0; z < size; z++)
                {
                    if (arr[i][j][z] > max)
                    {
                        max = arr[i][j][z];
                    }
                }
            }
        }
        cout << "\nМаксимальное значение в трехмерном  массиве: " << max << endl << endl;
    }

    cout << endl << endl;
}
void initAndPrintMassiv(int* massiv, int massivSize)
{
    for (int i = 0; i < massivSize; i++)
    {
        *(massiv + i) = rand() % 101;
        cout << fixed << setw(4) << *(massiv + i) << " ";
        if (i % 10 == 9)
        {
            cout << endl;
        }
    }

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
    srand((int)time(NULL));
    int const massivSize = 100;
    int massiv[massivSize];
    int min = INT_MAX;
    initAndPrintMassiv(massiv, massivSize);
    searchMin(massiv, massivSize, 0, min);
    cout << "Min = " << min << endl;
    return 0;
}

int searchMin(int* massiv, int massivSize, int startIndex, int& min)
{
    int localMin = 0;
    //для выхода при окончании массива
    if (startIndex + 9 == massivSize)
    {
        return 0;
    }
    //вычисление суммы 10 элементов
    for (int i = startIndex; i < startIndex + 10; i++)
    {
        localMin += massiv[i];
    }
    if (localMin < min)
    {
        min = localMin;
    }
    //ниже строчка для проверки
    // cout << "Start = " << startIndex << " minSum = " << min << endl;
    return searchMin(massiv, massivSize, startIndex + 1, min);
}
setlocale(LC_ALL, "russian");
srand(time(0));
int*** arr;
int size;
cout << "Введите число = ";
cin >> size;
arr = new int** [size];
for (int i = 0; i < size; i++) {
    arr[i] = new int* [size];

    for (int j = 0; j < size; j++) {
        arr[i][j] = new int[size];
    }
}
Unoarray(**arr, size);
Dosarray(*arr, size);
tresarray(arr, size);
delete[] arr;
system("pause");
return 0;







}