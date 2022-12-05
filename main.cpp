#include <iostream>
////Selection sorting
template <typename T>// создаем шаблон
static int selection_sort(T arr[], int size_arr){
    int indx_min = 0; //инициализируем индекс минимального значения
    for(int i = 0; i<size_arr-1; i++ ){
        indx_min = i;// начинаем с 0 индекса сортировать
        for (int j = i + 1; j < size_arr; j++)
            if (arr[j] < arr[indx_min])//находим минимальное значение в массиве
                indx_min = j;//фиксируем его за определенным индексом
        if (indx_min!=i)//если индекс мин значения не равен рассматриваемому индексу i,
            std::swap(arr[indx_min], arr[i]);//тогда меняем их местами
    }
}


int main() {
    int arr[] = {5, 4, 3, 1, 2, 1, 8, 1, 8, 4}; // объявили массив
    int size_arr = sizeof(arr)/ sizeof(arr[0]);
    selection_sort(arr, size_arr);//выполняем сортировку

    for (int i = 0; i < size_arr; i++) {
        std::cout << arr[i] << " "; // выводим результаи
    }
}
