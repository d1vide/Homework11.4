#pragma once
#include <iostream>

class Display {
protected:
	double dioganal;
public:
	Display(double diogoanal = 0);
	~Display();
	virtual void print() = 0;

};

class Keyboard {
protected:
	char color;
	int keyCount;
public:
	Keyboard(char color = 'r', int keyCount = 0);
	~Keyboard();
	virtual void print() = 0;
};

class Laptop : public Display, public Keyboard {
private:
	double weight;
public:
	Laptop(double dioganal = 0, char color = 'r', int keyCount = 0, double weight = 0);
	~Laptop();
	void print() override;
};

class Phone : public Display, public Keyboard {
private:
	std::string manufacturer;
public:
	Phone(double dioganal = 0, char color = 'r', int keyCount = 0, std::string manufacturer = "unknown");
	~Phone();
	void print() override;
};

class Computer : public Display, public Keyboard {
private:
	std::string os;
public:
	Computer(double dioganal = 0, char color = 'r', int keyCount = 0, std::string os = "unknown");
	~Computer();
	void print() override;
};