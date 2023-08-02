#include "Manager.h"
#include "Employee.h"

Manager::Manager(std::string firstname, std::string lastname, int efficiency_rating, double salary, std::string notes, std::string title, std::string department)
	: Employee(std::move(firstname), std::move(lastname), efficiency_rating, salary, std::move(notes)), title_{ std::move(title) }, department_{ std::move(department) } {}

Manager::~Manager() = default;


std::string Manager::get_firstname()
{
	return firstname_;
}

std::string Manager::get_lastname() 
{
	return lastname_;
}


std::string Manager::get_title()
{
	return title_;
}

std::string Manager::get_department()
{
	return department_;
}

std::string Manager::get_notes()
{
	return notes_;
}


double Manager::get_salary()
{
	return salary_;
}

int Manager::get_rating() const
{
	return efficiency_rating_;
}

void Manager::set_department(std::string  const &d)
{
	department_ = d;
}

void Manager::set_title(std::string const& t)
{
	title_ = t;
}



