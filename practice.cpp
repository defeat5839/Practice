#include <iostream>
#include <stdio.h>
#include <string.h>
#include <list>
using namespace std;

class funcionario {
private:
	string name;
	string date_entry;
	int salary;
public:
	funcionario(){
		name = "";
		date_entry = "00/00/0000";
		salary = 0;

	}
	void set_name(string temp_name) { name = temp_name; }
	void set_date(string temp_date) { date_entry = temp_date; }
	void set_salary(int temp_salary) { salary = temp_salary; }
	string get_name() {return this->name; }
	string get_date() { return date_entry; }
	int get_salary() { return salary; }
	

};
class company {
private:
	string name;
	list <funcionario*> employees;
	int RUC;
public:
	company(string temp_name,int temp_RUC) {
		this->name = temp_name;
		RUC = temp_RUC;
	}
	void set_name(string temp_name) { name = temp_name; }
	void add_employees() {
		employees.push_back(new funcionario());
	}
	funcionario *get_employees() {return employees.back();}
};
int main() {
	company ONPE("ONPE",1212312312);
	ONPE.add_employees();
	ONPE.get_employees()->set_name("Juan");
	ONPE.get_employees()->set_date("06/06/2016");
	ONPE.get_employees()->set_salary(340);
	(ONPE.get_employees()->get_date());
	int a;
	cin >> a;


	
}
