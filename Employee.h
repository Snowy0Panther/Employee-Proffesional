#pragma once
#include <string>
#include <iostream>
#include <format>
using namespace std;

namespace Records
{
	const int DefaultStartingSalary{ 30'000 };
	const int DefaultRaiseAndDemeritAmount{ 1'000 };
};

using namespace Records;

class Employee
{
private:
	std::string m_firstName;
	std::string m_lastName;
	int m_employeeNumber{ -1 };
	int m_salary{ DefaultStartingSalary };
	bool m_hired{ false };
public:
	Employee(const std::string& firstName,
		const std::string& lastName);
	void promote(int raiseAmount = DefaultRaiseAndDemeritAmount);
	void demote(int demeritAmount = DefaultRaiseAndDemeritAmount);
	void hire(); // Hires or rehires the employee
	void fire(); // Dismesess the employee
	void display() const; // Outputs employee info to console

	// Getters and setters
	void setFirstName(const std::string& firstName);
	const std::string& getFirstName() const;

	void setLastName(const std::string& lastName);
	const std::string& getLastName() const;

	void setEmployeeNumber(int employNumber);
	int getEmployeeNumber() const;

	void setSalary(int newSalary);
	int getSalary() const;

	bool isHired() const;
protected:

};