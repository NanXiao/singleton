#pragma once

#include <iostream>

class Singleton
{
private:
	Singleton()
	{
		std::cout << "Singleton constructor is called\n";
	}
public:
	Singleton(const Singleton&) = delete;
	Singleton(Singleton&&) = delete;
	Singleton& operator=(const Singleton&) = delete;
	Singleton& operator=(Singleton&&) = delete;
	virtual ~Singleton()
	{
		std::cout << "Singleton destructor is called\n";
	}
	
	static Singleton& getSingleton()
	{
		static Singleton s;
		return s;
	}
	
	void operator()()
	{
		std::cout << "Singleton operator() is called\n";
	}
};

extern Singleton& singleton;