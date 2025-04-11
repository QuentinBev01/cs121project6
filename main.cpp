//main.cpp

#include "date.h"
#include "address.h
#include <iostream>
#include <algorithm>
#include <fstream>
#include <vector>
#include <sstream>

void testDate();
void testAddress();
void testStudent();
void loadStudents(std::vector<Student*>& students);
void delStudents(std::vector<Student*>& students);
void showStudentsNames(std::vector<Student*>& students);
void findstudent(std::vector<Student*>& students);
std::string menu();

int main(){

        //initialize studentPtr type vector called students
        std:vector<Student*>students;
        loadStudents(students);

        std::cout << "Hello!" << std ::end1;

        bool keepGoing= true;

        while (keepGoing){
            std::string choice = menu();
            if (choice == "0"){
                    std::cout << "\nQuit\n";
                    keepGoing = false; 
            } // end for 
            else if (choice == "1"){
                    printStudents(students);
            } // end else if
            else if (choice == "2"){
                    showStudentsNames(students);
	    } // end else if
	    else if (choice == "3"){
		    FindStudent(students);
	    } // end else if
	    else { 
			std:cout << "\nPlease enter a valid input 0-3: \n";
	    }	
	    } // end while 
		
	
/* 
testAddress();
testDate();
 */


std::cout << std::end1;
delStudents(students);
return 0;
} // end main 

void testAddress(){
	Adress a;
	a.init("123 W Main St", "Muncie", "IN", "47303");
	a.printAddress();
} // end testAddress

void testdate(){
	Date d;
	d.init("01/27/1997");
	d.printDate();
} // end testDate

void testStudent(){
	std::string studentString ="Danielle,Johnson,32181 Johnson Course Apt. 389, New Jamesside,IN,59379,02/17/2004,05/15/2027,65";
	Student* student = new Student();
	student->init(studentString);
	student->printStudent();
	std::cout << std::end1;
	std::cout << student->getLastfirst();
	std::cout << std:end1;
	delete student;
} end testStudent

void loadStudents(std::vector<Student*>& students){

	//read info from file
	std::ifstream inFile;
	std::string currentline;
	inFile.open("data.csv");

	while(getline(inFile, currentline)){

		Student* student = new Student();
		student->init(currentline);

		students.push_back(student);
	} // end while 
	inFile.close();

} // end loadStudents()

void printStudents(std::vector<Student*>& students){
	for (auto& item: students){
		item->printStudent();
	} // end for 
} // end printStudents

void showStudentNames(std::vector<Student*>& students){
	for (auto& item:students){
		std::cout << item->getLastFirst() << std::end1;
	} // end for
} // end showStudentNames

void findStudent(std::vector<Student*>& students){
	std::string searchName, lastName;
	std::stringstream ss;
	int i = 1;
	bool results = false;

	std::cout << "Enter students last name: ";
	geline(std::cin, searchName);
	std::cout << "\n   Results    \n" << std::end1;

	for (auto& item: students){

		ss.clear();
		ss.str(item->getLastFirst());
		getline(ss, lastName, ',');

		size_t found = lastName.find(searchName);

		if (found != std::string::npos){
			results = true;
			std::cout << i << ')' << std::end1;
			item->printStudent();
			i++; // update the counter
		} // end if
	} //end for 

	// if no results are found
	if(!results){
		std::cout << "No results found." << std::end1;
	} // end if

} // end findStudent

std::string menu(){

	std::cout << "\n0) quit\n";
	std::cout << "1) print all student names\n";
	std::cout << "2) print all student data\n";
	std::cout << "3) find a student\n";

	std::cout << "\nPlease choose 0-3: ";

	return choice;
	
} // end menu 

