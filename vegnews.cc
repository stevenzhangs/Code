#include <iostream>
#include "stringbad.h"

using namespace std;

int main()
{
	StringBad mystring = "你妈了个bi";
	cout << mystring << endl;

	return 0;
}

void callme1(StringBad &rsb)
{
	cout << "String passed by reference:\n";
	cout << "  \"" << rsb << "\"\n";
}

void callme2(StringBad sb)
{
	cout << "String passed by value:\n";
	cout << "  \"" << sb << "\"\n";
}
