#include "Header.h"

Display::Display(double d) {
	this->dioganal = d;
}

Display::~Display() {

}

Keyboard::Keyboard(char color, int n) {
	this->color = color;
	this->keyCount = n;
}

Keyboard::~Keyboard() {

}

Laptop::Laptop(double dioganal, char color, int keyCount, double weight) {
	this->dioganal = dioganal;
	this->color = color;
	this->keyCount = keyCount;
	this->weight = weight;
}

Laptop::~Laptop() {

}

void Laptop::print() {
	std::cout << "Laptop: dioganal - " << dioganal << ", color - " << color << ", count of key - " << keyCount << ", weight - " << weight << '\n';
}

Phone::Phone(double dioganal, char color, int keyCount, std::string manufacturer) {
	this->dioganal = dioganal;
	this->color = color;
	this->keyCount = keyCount;
	this->manufacturer = manufacturer;
}

Phone::~Phone() {

}

void Phone::print() {
	std::cout << "Phone: dioganal - " << dioganal << ", color - " << color <<", count of key - " << keyCount << ", manufacturer - " << manufacturer << '\n';
}

Computer::Computer(double dioganal, char color, int keyCount, std::string os) {
	this->dioganal = dioganal;
	this->color = color;
	this->keyCount = keyCount;
	this->os = os;
}

Computer::~Computer() {

}

void Computer::print() {
	std::cout << "Computer: dioganal - " << dioganal << ", color - " << color << ", count of key - " << keyCount << ", os - " << os << '\n';
}