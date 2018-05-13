#pragma once

class Person {
public:
	friend std::istream &read(std::istream &is, Person &item);
	friend std::ostream &print(std::ostream &os, const Person &item);
	
	std::string address() const { return full_address; }
	std::string name() const { return full_name; }

	Person(const std::string &s) :full_name(s) {}
	Person(const std::string &s, const std::string &p) :full_name(s), full_address(p) {}
	Person(std::istream &is) { read(is, *this); }
private:
	std::string full_address;
	std::string full_name;
};