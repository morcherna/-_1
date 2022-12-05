#include <iostream>
////quik sorting с рандомными штуками
template <typename T>
static int partition(T arr[], int idx_start, int idx_end)
{
    int idx_pivot = rand()%sizeof(arr)-1 +0;//выбираем рандомный индекс для сортировки
    // rand
    int pivot = arr[idx_start];

    int counter = 0, i = 0, j = 0;

    for (int i = idx_start + 1; i <= idx_end; ++i)
        if (arr[i] <= pivot)
            counter++;

    idx_pivot = counter + idx_start;

    std::swap(arr[idx_pivot], arr[idx_start]);

    i = idx_start;
    j = idx_end;

    while (i < idx_pivot && j > idx_pivot)
    {
        while (arr[i] <= pivot)
            i++;

        while (arr[j] > pivot)
            j--;

        if (i < idx_pivot && j > idx_pivot)
            std::swap(arr[i], arr[j]);
    }
    return idx_pivot;
}

template <typename T>
void quickSort(T arr[], int idx_start, int idx_end)
{
    if (idx_start >= idx_end)
        return;

    int idx_pivot = partition(arr, idx_start, idx_end);

    quickSort(arr, idx_start, idx_pivot - 1);
    quickSort(arr, idx_pivot + 1, idx_end);

}

int main()
{
    srand(time(NULL));//создаем массив из рандомных значений:
    int i = 0;
    int size_arr = 0;
    std::cout << "Enter the size of the array" << std::endl;//просим пользователя ввести размер массива
    std::cin >> size_arr;
    int arr[size_arr];

    quickSort(arr, 0, size_arr - 1);

    for (int i = 0; i < size_arr; ++i)//выводим результат
        std::cout << arr[i] << " ";
    std::cout << std::endl;

    double arr2[] = { 1.5, 9.5, 7.5, 4.5, 11.5 };
    int size_arr2 = sizeof(arr2) / sizeof(arr2[0]);
    quickSort(arr2, 0, size_arr2 - 1);

    for (int i = 0; i < size_arr2; ++i)
        std::cout << arr2[i] << " ";

    return 0;
}
