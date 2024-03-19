#include "CountSort.h"

void CountSort(int* arr, int size) 
{
    // Находим максимальное и минимальное значения в массиве
    int max = arr[0], min = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    // Создаем вспомогательный массив для подсчета элементов
    int range = max - min + 1;
    int* count = new int[range] {0};

    // Подсчитываем количество каждого элемента
    for (int i = 0; i < size; ++i)
        ++count[arr[i] - min];

    // Восстанавливаем отсортированный массив
    int index = 0;
    for (int i = 0; i < range; ++i) {
        while (count[i] > 0) {
            arr[index] = i + min;
            index++;
            count[i]--;
        }
    }

    // Освобождаем память, выделенную для вспомогательного массива
    delete[] count;
}