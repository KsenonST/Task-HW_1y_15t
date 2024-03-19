#include <cstdio>
#include <iostream>
#include "WriteRes.h"
#pragma warning(disable : 4996)


using namespace std;

void WriteRes(const char* filename, int number_1, float number_2, bool update = true)

{
	FILE* file;

	

	if (update)
	{
		file = fopen(filename, "w");

	}

	else
	{
		file = fopen(filename, "a");
	}

	if (file != NULL)

	{
		fprintf(file, "%d\t%f\n", number_1, number_2);
		cout << number_1 << "\t" << number_2 << "\n";
		fclose(file);

	}
	else
	{
		cout << "File wasn't opened";
	}

	return;

}