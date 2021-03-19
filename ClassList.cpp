#include <iostream>;
#include "list.h";
#include "complex.h"
using namespace std;
int main()
{
	int a[5];
	for (int i = 0; i < 5; i++)
		a[i] = rand() % 10;
	for (int i = 0; i < 5; i++)
	cout << a[i];
	List<int> b(a, 5);
	cout << b;
	List<int> c;
	c = b;
	cout << c;
	List<complex>g(3);
	cout << g;
	c = c + b;
	cout << c;
}