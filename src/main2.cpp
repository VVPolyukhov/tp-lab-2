#include "task2.h"

int main()
{
	const size_t N = 7;
	char **newArray;
	newArray = createArr<char*, N>(gen1);
	delete[] newArray;

	return 0;
}