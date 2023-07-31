#pragma once
#include <streambuf>
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

#include <string>
class Admin
{
public:
	int ReadFile();
	int ShowMain();
	int Open();
	Admin();
private:
	int userCount;
	int startNum;
	string password;
	int index;

};

