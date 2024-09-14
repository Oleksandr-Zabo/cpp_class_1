#include <iostream>
using namespace std;

struct date {
private:
    int _day;
    int _month;
    int _year;
public:
    date() {
        _day = 1;
        _month = 1;
        _year = 2000;
    }
    date(int day, int month, int year) {
        this->_day = day;
        this->_month = month;
        this->_year = year;
    }
    void print() const {
        cout << _day << "." << _month << "." << _year << endl;
    }
    void set_day(int day) {
        _day = day;
    }
    void set_month(int month) {
        _month = month;
    }
    void set_year(int year) {
        _year = year;
    }
};

class Student {
private:
    string _name;
    date _date_of_birth;
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
        _date_of_birth.set_day(1);
        _date_of_birth.set_month(1);
        _date_of_birth.set_year(2000);
        _telephone = 12345678;
        _student_city = "no city";
        _student_country = "no country";
        _name_school = "no name";
        _city_school = "no city";
        _country_school = "no country";
        _number_group = "AB:123";
    }
    Student(string name, date date_of_birth, long long telephone, string student_city, string student_country, string name_school, string city_school, string country_school, string number_group) {
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
    Student(string name, int day, int month, int year, long long telephone, string student_city, string student_country, string name_school, string city_school, string country_school, string number_group) {
        _name = name;

        _date_of_birth.set_day(day);
        _date_of_birth.set_month(month);
        _date_of_birth.set_year(year);

        _telephone = telephone;
        _student_city = student_city;
        _student_country = student_country;
        _name_school = name_school;
        _city_school = city_school;
        _country_school = country_school;
        _number_group = number_group;
    }

    // setters
    void set_name(string name) {
        _name = name;
    }
    void set_date_of_birth(date date_of_birth) {
        _date_of_birth = date_of_birth;
    }
    void set_date_of_birth(int day, int month, int year) {
        _date_of_birth.set_day(day);
		_date_of_birth.set_month(month);
		_date_of_birth.set_year(year);
    }
    void set_telephone(long long telephone) {
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

    // getters
    string get_name() const {
        return _name;
    }
    date get_date_of_birth() const {
        return _date_of_birth;
    }
    long long get_telephone() const {
        return _telephone;
    }
    string get_student_city() const {
        return _student_city;
    }
    string get_student_country() const {
        return _student_country;
    }
    string get_name_school() const {
        return _name_school;
    }
    string get_city_school() const {
        return _city_school;
    }
    string get_country_school() const {
        return _country_school;
    }
    string get_number_group() const {
        return _number_group;
    }

    void print() const {
        cout << "Name: " << _name << endl;
        cout << "Date of birth: ";
        _date_of_birth.print();
        cout << "Telephone: " << _telephone << endl;
        cout << "Student city: " << _student_city << endl;
        cout << "Student country: " << _student_country << endl;
        cout << "Name school: " << _name_school << endl;
        cout << "City school: " << _city_school << endl;
        cout << "Country school: " << _country_school << endl;
        cout << "Number group: " << _number_group << endl;
		cout << endl;
    }
};

int main() {
    date dob(1, 1, 2000);
    Student student1("Alex", dob, 3807812343, "City_1", "USA", "IT Step", "Vinnytsia", "Ukraine", "AC:123");
    student1.print();

    Student student2("Ann", 25, 7, 2005, 3807832143, "City_2", "Canada", "IT Step", "Odessa", "Ukraine", "AC:453");
    student2.print();
    system("pause");
    return 0;
}
