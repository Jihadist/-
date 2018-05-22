#pragma once

class X {
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
private:
};

class Y {
	std::string book;
	unsigned units = 0;
	double rev = 0.0;
	//double *a = X::revenue;
private:
	X test;
	//double *a = X::revenue;
};