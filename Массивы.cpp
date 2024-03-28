#include <iostream>
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	//1
	const int N = 10;
    int mass[N], max, min;

	 
	for (int i = 0; i < N; i++)
	{
		mass[i] = rand() % 99;
		std::cout << mass[i]  ;
	}
	 

	max = mass[0];
	min = mass[0];
	for (int i = 1; i < N; i++)
	{
		if (max < mass[i]) max = mass[i];
		if (min > mass[i]) min = mass[i];
	}
	std::cout << "Min: " << min ;
	std::cout << "Max: " << max ;



	//2
    int arr[10];
    int n;
    int sum = 0;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 15;
    }
    for (int i = 0;i < n;i++)
    {
        std::cout << arr[i] << "\t";
    }
    std::cout << "\n";
    int x, y;
    std::cin >> x;
    std::cin >> y;
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] < x) sum += arr[i];
        if (arr[i] > y) sum += arr[i];
    }

    std::cout << sum;
    return 0;

    //3
    int r1, r2;
    const int size = 12;
    int arr[size];
    int max = arr[0], min = arr[0];
    for (int i = 0; i < size; i++)
    {
        std::cout << "Введите доход (12 месяцев)"  ;
        std::cin >> arr[i];
    }
    std::cout << " Введите дмапозон :"  ;
    std::cin >> r1 >> r2;
    for (int j = 0; j >= r1, j < r2; j++)
    {
        if (min > arr[j])
            min = arr[j];
        if (max < arr[j])
            max = arr[j];
    }
    std::cout << "Минимальная прибыль: \n" << min  ;
    std::cout << "Максимальная прибыль: \n" << max  ;
return 0;
}