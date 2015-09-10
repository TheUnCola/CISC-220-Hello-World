#include "hello.h"

hello::hello() {}

hello::hello(char* a) {
	b = a;
}

char* hello::geta() {
     return b;
}

hello::~hello() {

}

