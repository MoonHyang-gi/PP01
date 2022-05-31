//#define _CRTDBG_MAP_ALLOC
//#include <stdlib.h>
#include <crtdbg.h>
#include <iostream>

int main(void)
{
	std::cout << "¿¹~\n";

	int* a = new int[6];
	_CrtDumpMemoryLeaks();
}