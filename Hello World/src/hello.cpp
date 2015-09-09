#include "hello.h"

hello::hello(char* a) {
	b = a;
}

char* hello::geta() {
     return b;
}

hello::~hello() {

}

