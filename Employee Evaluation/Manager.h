#pragma once
#include "Employee.h"
#include <string>
#include <vector>

class Manager : Employee
{
public:
	Manager() = default;
	Manager(std::string firstname, std::string lastname, int efficiency_rating, double salary, std::string notes, std::string title, std::string department);
	~Manager() override;
protected:
	std::string title_;
	std::string department_;
public:
	std::string get_firstname() override;
	std::string get_lastname() override;
	std::string PrintValues() override;

	void set_title(std::string t);
	std::string get_title();
	void set_department(std::string d);
	std::string get_department();
};

