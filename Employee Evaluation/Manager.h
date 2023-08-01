#pragma once
#include "Employee.h"
#include <string>
#include <vector>

class Manager : public Employee
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
	std::string get_notes() override;
	int get_rating() const override;
	double get_salary() override;

	void set_title(std::string t);
	std::string get_title();
	void set_department(std::string d);
	std::string get_department();

	virtual std::ostream& print(std::ostream& out) const override
	{
		out << "\nManager: \n "
			<< "Title: " << title_ << "\n"
			<< "Department: " << department_ << "\n"
			<< "First Name: " << firstname_ << "\n "
			<< "Last Name: " << lastname_ << "\n "
			<< "Efficiency Rating: " << efficiency_rating_ << "\n "
			<< "Salary: " << "$" << salary_ << "\n"
			<< "Notes: " << notes_ << "\n";

		return out;
	}
};

