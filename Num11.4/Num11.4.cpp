#include "Header.h"

int main() {
	Laptop first(13.3, 'b', 32, 2);
	first.print();
	Phone second(4.7, 'w', 1, "Iphone");
	second.print();
	Computer third(18, 'r', 32, "Windows");
	third.print();
	return 0;
}