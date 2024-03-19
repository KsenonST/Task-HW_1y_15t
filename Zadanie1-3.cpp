
#include <iostream>
#include <ctime>
#include "CountSort.h"
#include "WriteRes.h"
#include "foo.h"


using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

    //#Zadanie_1

    cout << "#Zadanie_1" << endl << endl << "input massiv: ";

    srand(time(NULL));

    const int size = 15;

    int massiv[size];



    for (int i = 0; i < size; i++)
    {
        massiv[i] = rand() % 1023;
    }

    for (int i = 0; i < size; i++)
    {
        cout << massiv[i] << " ";
    }

    CountSort(massiv, size);

    cout << endl << endl << "Output massiv: ";

    for (int i = 0; i < size; i++)
    {
        cout << massiv[i] << " ";
    }

    cout << endl << endl;

    //#Zadanie_2

    cout << "#Zadanie_2" << endl << endl;
     const char* file_name = "file1.txt";
     bool Update = true;
    WriteRes(file_name, 10, 3.14, Update);

   
    cout << endl <<  "Check " << file_name << endl << endl;

    //#Zadanie_3

    cout << "#Zadanie_3" << endl << endl << "Эта функция проходит во внешнем цикле значения с i = 1 до 10 и во внутреннем цикле значения с j = 1 до 10 и при этом записывая в файл произведения i*j через табуляцию.";
    cout << endl << "В конце внутреннего цикла происходит переход на новуюстроку.Таким образом выведенные числа образуют таблицу умножения с 1 до 10.";
    cout << endl << endl;



    foo();

    
   
    return 0;

}

