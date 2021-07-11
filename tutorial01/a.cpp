#include <iostream>
using namespace std;

typedef struct{
	const char* json;
}lept_context;

int main()
{
	lept_context c;
	c.json = "ABC";
	const char *p = c.json;
	while( *p ){
		cout << *p << endl;
		p++;
	}
	
	
	return 0;
	
}
