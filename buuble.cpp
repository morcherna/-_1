////Bubble sorting
#include <iostream>

template <typename T>// создаем шаблон
static int sorting(T arr[]){
    for (int i = 0; i < sizeof(arr); i++) { //начинаем перебирать элементы массива с 0 индекса
        for (int j = 0; j < sizeof(arr); j++) {
            if (arr[j] > arr[j + 1])//если среди рассматриваемых значений левое больше, тогда меняем из местами
                std::swap(arr[j], arr[j + 1]);

        }
    }
}

int main() {
    std::cout << "Enter the size of the array"<< std::endl;//просим пользователя ввести размер массива
    int size_arr = 0;
    std::cin >> size_arr;


    int arr[size_arr]; // объявили массив

    std::cout << "Enter numbers to fill the array: " << std::endl;//просим пользователя ввести значения массива

    for (int i = 0; i < size_arr; i++) {
        std::cin >> arr[i]; // заполняем массив
    }

    sorting(arr);//выполняем сортировку

    for (int i = 0; i < size_arr; i++) {
        std::cout << arr[i] << " "; // выводим результаи
    }
    return 0;
}
