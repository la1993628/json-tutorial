#include <iostream>
#include <string>
using namespace std;

typedef struct{
	const char* json;
}lept_context;

int main()
{
	lept_context c;
	c.json = "ABC";
	string a = "BDFG";
const string &b = c.json;
	const char *p = c.json;
//	while( *p ){
//		cout << *p << endl;
//		p++;
//	}

	cout <<  << endl;;
	
	return 0;
	
}
