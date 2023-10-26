
#include <iostream>
#include <string>
class Person {
public:
	std::string first_name;
	std::string last_name;
	std::string passport_number;
	std::string birthdate;
	std::string additional_info;
	std::string unique_id;
};
class Student :public Person 
{
public:
	std::string specialization;
	std::string group;
	std::string university;
	
};

int main() {
	setlocale(LC_ALL, "ukr");
	Student students[2];
	students[0].passport_number = "007631573";
	students[0].first_name = "Ivan";
	students[0].last_name = "Bobrik";
	students[0].birthdate = "01.12.2006";
	students[0].additional_info = "Additional info";
	students[0].university = "Массачусетский технологiчний институт, США";
	students[0].group = "Группа-5";
	students[0].specialization = "iнженерiя програмного забезпечення";

	students[1].passport_number = "01202301923";
	students[1].first_name = "Seriy";
	students[1].last_name = "Patron";
	students[1].birthdate = "01.12.2005";
	students[1].additional_info = "Additional info";
	students[1].university = "Массачусетский технологiчний институт, США";
	students[1].group = "Группа-23";
	students[1].specialization = "Кiбербезпека";





	for (int i = 0; i < 2; i++) {
		std::cout << "Name " << students[i].first_name << std::endl;
		std::cout << "Last_name " << students[i].last_name << std::endl;
		std::cout << "University " << students[i].university << std::endl;
		std::cout << "Specialization " << students[i].specialization << std::endl;
		std::cout << "Group " << students[i].group << std::endl;
		std::cout<<"Birthdate"<< students[i].birthdate << std::endl;
		std::cout << "Passport Number" << students[i].passport_number << std::endl;
		std::cout << std::endl;



	}









	return 0;
}

