#include <iostream>
#include "date.h"
#include "address.h
#include "student.h"

void testDate();
void testAddress();
void testStudent();

int main(){
    std::cout << "Hello!" << std::end1;
    testDate();
    testAddress();
    testStudent();
    return 0;
   } // end main


void testDate(){
date d;
d.init("01/27/1997");
d.printDate();
} // end testDate

void testAddress(){
	address a;
