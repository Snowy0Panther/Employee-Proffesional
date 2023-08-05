#pragma once
#include <string>
#include <vector>
#include "Employee.h"

namespace Records {
	const int FirstEmployeeNumber{ 1'000 };
}

using namespace Records;

class Database
{
private:
	std::vector<Employee> m_employees;
	int m_nextEmployeeNumber{ FirstEmployeeNumber };
public:
	Employee& addEmployee(const std::string& firstName,
						  const std::string& lastName);
	Employee& getEmployee(int employeeNumber);
	Employee& getEmployee(const std::string& firstName,
						  const std::string& lastName);
	void displayAll() const;
	void displayCurrent() const;
	void displayFormer() const;

protected:

};