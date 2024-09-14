#include <iostream>
using namespace std;

class Student {
private:
	string _name;
	string _date_of_birth;
	long long _telephone;
	string _student_city;
	string _student_country;
	string _name_school;
	string _city_school;
	string _country_school;
	string _number_group;
public:
	Student() {
		_name = "No name";
		_date_of_birth = "01.01.2000";
		_telephone = 12345678;
		_student_city = "no city";
		_student_country = "no country";
		_name_school = "no name";
		_city_school = "no city";
		_country_school = "no country";
		_number_group = "AB:123";

	}
	Student(string name, string date_of_birth, long long telephone, string student_city, string student_country, string name_school, string city_school, string country_school, string number_group) :Student() {
		_name = name;
		_date_of_birth = date_of_birth;
		_telephone = telephone;
		_student_city = student_city;
		_student_country = student_country;
		_name_school = name_school;
		_city_school = city_school;
		_country_school = country_school;
		_number_group = number_group;
	}

	//setters
	void set_name(string name) {
		_name = name;
	}
	void set_date_of_birth(string date_of_birth) {
		_date_of_birth = date_of_birth;
	}
	void set_telephone(int telephone) {
		_telephone = telephone;
	}
	void set_student_city(string student_city) {
		_student_city = student_city;
	}
	void set_student_country(string student_country) {
		_student_country = student_country;
	}
	void set_name_school(string name_school) {
		_name_school = name_school;
	}
	void set_city_school(string city_school) {
		_city_school = city_school;
	}
	void set_country_school(string country_school) {
		_country_school = country_school;
	}
	void set_number_group(string number_group) {
		_number_group = number_group;
	}

	//getters
	string get_name() {
		return _name;
	}
	string get_date_of_birth() {
		return _date_of_birth;
	}
	long long get_telephone() {
		return _telephone;
	}
	string get_student_city() {
		return _student_city;
	}
	string get_student_country() {
		return _student_country;
	}
	string get_name_school() {
		return _name_school;
	}
	string get_city_school() {
		return _city_school;
	}
	string get_country_school() {
		return _country_school;
	}
	string get_number_group() {
		return _number_group;
	}


	void print() {
		cout << "Name: " << _name << endl;
		cout << "Date of birth: " << _date_of_birth << endl;
		cout << "Telephone: " << _telephone << endl;
		cout << "Student city: " << _student_city << endl;
		cout << "Student country: " << _student_country << endl;
		cout << "Name school: " << _name_school << endl;
		cout << "City school: " << _city_school << endl;
		cout << "Country school: " << _country_school << endl;
		cout << "Number group: " << _number_group << endl;
	}
};

int main()
{
	Student student1("Alex","01.01.2000", 3807812343, "City_1","USA","IT Step","VInitsya","Ukraine","AC:123");
	student1.print();
	system("pause");
	return 0;
}