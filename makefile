main.cpp: date.h adress.h student.h student.cpp main.cpp
	g++ -g -c date.cpp


address.h: address.h adress.cpp
	g++ -g -c address.cpp


date.h: date.h date.cpp
	g++ -g -c date.cpp

student.h: date.h address.h student.h student.cpp
	g+ -g -c student.cpp

run: heapstudents
	./heapstudents 
