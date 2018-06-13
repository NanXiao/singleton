# Singleton
A simple singleton implemented in `C++`. Example (`main.cpp`):  

	#include "singleton.hpp"
	
	int main()
	{
		singleton();
		return 0;
	}

Build:

	$ c++ main.cpp singleton.cpp

Run:  

	$ ./a.out
	Singleton constructor is called
	Singleton operator() is called
	Singleton destructor is called
