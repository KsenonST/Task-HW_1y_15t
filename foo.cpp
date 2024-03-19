#include <iostream>
#include "foo.h"
#pragma warning(disable : 4996)

using namespace std;

void foo()
{
	int test = 10;
	FILE* f = fopen("test", "w");
	for (int i = 1; i < 11; i++)
	{
		for (int j = 1; j < 11; j++)
		{
			fprintf(f, "%d\t", i * j);
			cout << i * j << "\t";

		}

		fprintf(f, "\n");
		cout << "\n";

	}

	cout << endl << "Check test" << endl << endl;

	fclose(f);

}