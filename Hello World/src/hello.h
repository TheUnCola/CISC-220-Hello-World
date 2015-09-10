#include <string>

#ifndef HELLO
#define HELLO

class hello {
private:
	char* a = "Hello World";
public:
	hello();
	~hello();
	char* geta();
};

#endif
