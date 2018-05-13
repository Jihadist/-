#pragma once

class Sales_data {
public:

	friend std::ostream &print(std::ostream &os, const Sales_data &item);
	friend std::istream  &read(std::istream &is, Sales_data &item);
	friend Sales_data add(const Sales_data &lhs, const Sales_data &rhs);

	Sales_data() = default;
	std::string isbn() const { return bookNo; }
	Sales_data& combine(const Sales_data&);

	Sales_data(const std::string &s) :bookNo(s) {}
	Sales_data(const std::string &s, unsigned n, double p):bookNo(s),units_sold(n),revenue(p*n){}
	Sales_data(std::istream &is){ read(is, *this); }
private:
	inline double avg_price() const
	{
		return units_sold / revenue ? revenue / units_sold : 0;
	}
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

