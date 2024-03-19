#include "CountSort.h"

void CountSort(int* arr, int size) 
{
    // ������� ������������ � ����������� �������� � �������
    int max = arr[0], min = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    // ������� ��������������� ������ ��� �������� ���������
    int range = max - min + 1;
    int* count = new int[range] {0};

    // ������������ ���������� ������� ��������
    for (int i = 0; i < size; ++i)
        ++count[arr[i] - min];

    // ��������������� ��������������� ������
    int index = 0;
    for (int i = 0; i < range; ++i) {
        while (count[i] > 0) {
            arr[index] = i + min;
            index++;
            count[i]--;
        }
    }

    // ����������� ������, ���������� ��� ���������������� �������
    delete[] count;
}