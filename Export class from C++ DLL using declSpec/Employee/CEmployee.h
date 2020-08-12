#pragma once
#ifdef Employee_Lib
#define DECLSPEC __declspec(dllexport)
#else
#define DECLSPEC __declsec(dllimport)
#endif
class DECLSPEC CEmployee 
{
private:
	int _EmployeeId;
	char* _EmployeeName;
public:
	CEmployee(int id, const char* name);
	~CEmployee();
	int getId();
	char* getName();
};
