#include "CEmployee.h"
#include <string>

CEmployee::CEmployee(int id, const char* name)
{
	_EmployeeId = id;
	_EmployeeName = new char[strlen(name) + 1];
	strcpy_s(_EmployeeName, strlen(name) + 1, name);
}

CEmployee::~CEmployee()
{
	delete[] _EmployeeName;
}

int CEmployee::getId()
{
	return _EmployeeId;
}

char* CEmployee::getName()
{
	return _EmployeeName;
}
