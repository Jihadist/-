

#include "stdafx.h"
#include "Sales_data.h"
#include "Person.h"
#include "Screen.h"
#include "Window_mgr.h"

//0-201-78345-X 3 20.00
//0-201-78345-X 4 25.00



int main()
{
	Screen myscreen(5, 5, 'A');
	myscreen.move(4, 0);
	myscreen.set('#');
	myscreen.display(std::cout);
	std::cout << std::endl;
	myscreen.display(std::cout);
	std::cout << std::endl;
	
	// declare variables to hold running sum and data for the next record 



	Sales_data total, trans;
	//Sales_data add(const Sales_data&, const Sales_data&);
	//std::ostream &print(std::ostream&, const Sales_data&);
	//std::istream &read(std::istream&, const Sales_data&);
	// is there data to process?
	if (read(std::cin,total)){
		// if so, read the transaction records 
		while (read(std::cin,trans))
			if (total.isbn()==trans.isbn())
				// match: update the running total 
			{
				total.combine(trans);

			}
			else {
				// no match: print & assign to total
				print(std::cout, total);
				total = add(total, trans);
			}
			// remember to print last record
			print(std::cout, total);
	}
	else {
		// no input!, warn the user
		std::cout << "No data?!" << std::endl;
		return -1;  // indicate failure
	}
	_getch();
	return 0;
}
