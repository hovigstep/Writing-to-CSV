// writetoCSV.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;


int main(int argc, char* argv[])
{
	ofstream myfile;
	myfile.open("example.csv", ofstream::app);
	//myfile << "This is the first cell in the first column.\n";
	myfile << "a,b,c,\n";
	myfile << "c,s,v,\n";
	myfile << "1,2,3\n";
	myfile.close();
	return 0;
}
