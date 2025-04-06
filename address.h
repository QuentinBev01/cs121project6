//address.h

#ifndef ADRESS_H_EXISTS
#define ADDRESS_H_EXISTS

#include <string>

class Address{
	proctected:
		std::string street;
		std::string city;
		std::string state;
		std::string zip;
	public:
		Address();
		void init(std::string street, std::string city,std:: string state, std::string zip)
		void printAdress();

}; // end class def 

#endif

