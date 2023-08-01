#include "Employee.h"
#include <string>
#include <vector>


Employee::Employee(std::string firstname, std::string lastname, int efficiency_rating, double salary, std::string notes)
	: firstname_{ std::move(firstname)}, lastname_{ std::move(lastname) }, efficiency_rating_{ efficiency_rating }, salary_{ salary }, notes_{ std::move(notes) } {};

Employee::~Employee() = default;



void Employee::set_firstname(std::string const &firstname)
{
	firstname_ = firstname;
}

std::string Employee::get_firstname()
{
	return firstname_;
}

void Employee::set_lastname(std::string const& lastname)
{
	lastname_ = lastname;
}

std::string Employee::get_lastname()
{
	return lastname_;
}

void Employee::set_rating(int const e_rating)
{
	efficiency_rating_ = e_rating;
}

int Employee::get_rating() const
{
	return efficiency_rating_;
}

void Employee::set_salary(double s)
{
	salary_ = s;
}

double Employee::get_salary()
{
	return salary_;
}


void Employee::set_notes(std::string const& n)
{
	notes_ = n;
}

std::string Employee::get_notes()
{
	return notes_;
}



