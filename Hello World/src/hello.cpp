#include "hello.h"
#include <iostream>

hello::hello() {
	std::cout << geta();
}

char* hello::geta() {
     return a;
}

hello::~hello() {

}

