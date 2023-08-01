

/*
Name: Colin Chavez
Class: SDEV-340
Project: Employee Evaluation - Polymorphism & Multiple Inheritance
Date: 08/1/2023
Requirements: 
 The base class shall have a constructor that inputs the employee's first and last name, efficiency rating (use 1 through 5), a notes field and their salary.
 
Within employee create a virtual destructor and virtual accessors and getters for firstname, last name, efficiency rating and salary. The getSalary() and getFirstName() and getLastName() accessors shall be virtual methods.

Include a virtual method called PrintValues() that outputs all of the information stored in the base class.

Create a manager class that inherits from employee. The virtual class shall have a constructor that takes in the same information as the employee class, but also includes the manager's title and department.
Include virtual methods for getSalary(), getEfficiency() and printValues(). PrintValues() shall output all of the information about the manager.
Add functionality of your choosing that implements at least one of the Standard Template Libraries found in C++.
*/



#pragma once
#include<iostream>
#include<ostream>
#include<string>
#include<vector>

class Employee
{
public: 
	Employee() = default;
	Employee(std::string firstname, std::string lastname, int efficiency_rating, double salary, std::string notes);
	virtual ~Employee();

protected:
	std::string firstname_;
	std::string lastname_;
	int efficiency_rating_;
	double salary_;
	std::string notes_;
	std::vector<std::string> employees;

public:
	void set_firstname(std::string firstname);
	virtual std::string get_firstname();

	void set_lastname(std::string lastname);
	virtual std::string get_lastname();

	void set_rating(int e_rating);
	int get_rating();

	void set_salary(double s);
	virtual double get_salary();

	void set_notes(std::string n);
	std::string get_notes();

	virtual std::string PrintValues();
};

