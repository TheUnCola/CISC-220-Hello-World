#ifndef HELLO
#define HELLO

class hello {
public:
	hello();
	hello(char* a);
	~hello();
	char* geta();
private:
	char* b = "Hello World";

};

#endif
