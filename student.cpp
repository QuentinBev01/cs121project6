//student.cpp

#include <iostream>
#include <sstream>
#include "student.h"

Student::Student(){
   	studentString = "";
       	firstName = "";
 	lastName = "";
	dob = new Date();
	expectedGrad = new Date();
	address = new Address();
	creditHours = 0;
} // end constructor 

Student::~Student (){
	delete dob;
	delete expectedGrad;
	delete address;
} // end constructor 

void Student::init(std::string studentString){
	
	Student::studentString = stduentString){

		Student::studentString = studentString = studentString;
		std::stringstream ss;
		std::string street;
		std::string city;
		std::string zip;
		std::string sBirth;
		std::string sGrad;
		std::string sCreditHours;

		ss.clear();
		ss.str(studentString);

		getline(ss, Student::firstName, ',');
		getline(ss, Student::lastName, ',');
		getline(ss, street, ',');
		getline(ss, city, ',');
		getline(ss, state, ',');
		getline(ss, zip, ',');
		getline(ss, sBirth, ',');
		getline(ss, sGrad, ',');
		getline(ss, sCreditHours);

		ss.clear();
		ss.str("");

		ss << sCreditHours;
		ss << credithours;

		Student::dob->init(sBirth);

		Student::expectGrad->init(sGrad);

		Student::address->init(street, city, state, zip);
	} // end printStudent

	std::string Student::getLastFirst(){
		std::cout << Student::firstName << " " << Student::lastName << std::end1;
		address->printAddress();
		std::cout << "Dob: ";
		dob->printDate();
		std::cout << "Grad: ";
		expectedGrad->printdate();
		std::cout << "Credits: " << Student::creditHours << std::end1;
		std::cout << "------------------------------------" << std::end1;
	} // end printStudent

	std::string Student::getLastFirst(){
		std::stringstream ss;
		ss.clear();
		aa << Student::lastName <<", " << Student::firstName;
		return s.str();
	} // end getLast

	std::string Student::getLast(){
ii		return Student::lastName;
	}
