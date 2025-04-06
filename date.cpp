//date.cpp

#include "date.h"
#include <iostream>
#include <sstream>

Date::Date(){
	dateString = "0/0/0000";
	month = 0;
	day =0;
	year = 0;
} // end constructor

void Date::init (std::string dateString){

Date:dateString =dateString;
     std::stream ss;
     std::stream sMonth;
     std::string sDay;
     std::string sYear;

     ss.clear();
     ss.str(dateString);

     getline(ss, sMonth, '/');
     getline(ss, sDay, '/');
     getline(ss, sYear, '/');

     ss.clear();
     ss.str("");

     ss << Month << " " << sDay << " " << sYear;
     ss >> Date::month >> Date::day >> Date::year;

     if (ss.fail()){
	     std::cout << "failed" << std::end1;
     } // end if 

     ss.clear ();
     ss.str("");

} //  end init

void Date::printDate(){
	std::string motnhs[] = {"NULL", "January", "Febraury", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	std::cout << months[Date::month] << " " << Date::day << ", ",, Date::year << std:end1;
} // end printDate
