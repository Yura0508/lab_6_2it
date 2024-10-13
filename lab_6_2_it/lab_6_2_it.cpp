// lab_6_2_it.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//



#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

// Функція для генерації масиву
void Create(int* a, const int size, const int Low, const int High) {
    for (int i = 0; i < size; i++)
        a[i] = Low + rand() % (High - Low + 1);
}

// Функція для виведення масиву
void Print(const int* a, const int size) {
    for (int i = 0; i < size; i++)
        cout << setw(4) << a[i];
    cout << endl;
}
// Функція для максимального значення
int Max(int* a, const int size)
{
    int max = a[0];
    for (int i = 1; i < size; i++)
        if (a[i] > max)
            max = a[i];
    return max;
}
// Функція для мінімального значення
int Min(int* a, const int size) 
{
    int min = a[0];
    for (int i = 1; i < size; i++)
        if (a[i] < min)
            min = a[i];
    return min;
}

int main() {
    srand(static_cast<unsigned>(time(nullptr)));
    const int size = 10;
    int a[size];
    const int Low = -10;
    const int High = 100;

    
    Create(a, size, Low, High);
    cout << "massif b:" << endl;
    Print(a, size);

    cout << "max = " << Max(a, size) << endl;
    cout << "min = " << Min(a, size) << endl;
 

    cin.get();
    return 0;
}








