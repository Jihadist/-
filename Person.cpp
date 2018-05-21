#include "stdafx.h"
#include "Person.h"

std::istream &read(std::istream &is, Person &item)
{
	is >> item.full_name >> item.full_address;
	return is;
}

std::ostream &print(std::ostream &os, const Person &item)
{
	os << item.full_name << " " << item.full_address;
	return os;
}