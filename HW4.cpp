//============================================================================
// Name        : HW4.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================



#include "aircraft.h"
#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <sstream>
#include <fstream>


using namespace std;

//Basically, we will read the whole line and then parse it.
//parseString will store the strings created by parsing whenever there is a space and a comma
//parseString2 will store the strings created by parsing whenver there is a double quote
void parseString(string theLine, vector<string *> &List);
void parseString2(string theLine, vector<string *> &theList);
int main()
{
	ifstream input_file;
		input_file.open("input.txt");

    vector <aircraft*> point;
	string commandstring;
	string newstring;
	vector <string*> separatestring;
	vector <string*> separatestring2;
	int command1;
	int command2;
	int command3;
	int count;
	count=0;
	getline(input_file,commandstring);//read the whole line
	parseString(commandstring,separatestring);//parse
	parseString2(commandstring,separatestring2);
	if (*(separatestring[0])=="n")//command "n"
	{
		istringstream ss(*separatestring[1]);
		ss >> command1;
		//convert the string to int
		switch (command1)
		{
		case 0:
		{
			istringstream ss2(*separatestring[1]);
					ss2 >> command2;
			istringstream ss3(*separatestring[1]);
					ss3 >> command3;
					aircraft *aircraft1=new aircraft(command2,command3);
					point.push_back(aircraft1);
					//create the corresponding aircraft type based on input
			break;
		}
		case 1:
		{
			istringstream ss2(*separatestring[1]);
						ss2 >> command2;
			istringstream ss3(*separatestring[1]);
						ss3 >> command3;
						fighter *aircraft2=new fighter(command2,command3);
												point.push_back(aircraft2);
						//create the corresponding aircraft type based on input
			break;
		}
		case 2:
			{
				acrobat *aircraft3=new acrobat(*separatestring2[1],*separatestring2[3]);
				point.push_back(aircraft3);
				//create the corresponding aircraft type based on input
				break;
			}
		case 3:
		{
			istringstream ss2(*separatestring[2]);
			ss2 >> command2;
			freight *aircraft4=new freight(command2,*separatestring2[1],*separatestring2[3]);
			point.push_back(aircraft4);
			//create the corresponding aircraft type based on input
			break;
		}

	}
	}
	if (*separatestring[0]=='p')//for output command
	{
		istringstream ss3(*separatestring[1]);
			ss3 >> command1;
		command1=*separatestring[1];
			switch (command1):
	{
			case 0://print all
				for(i=0;i<point.size();++i)
				{
					point[i]->printCharacteristics();
				}
			case 1:
				for(i=0;i<point.size();++i)
				{
					if point[i]->type=1
							point[i]->printCharacteristics();
				}
			case 2:
				for(i=0;i<point.size();++i)
				{
					if point[i]->type=2
					point[i]->printCharacteristics();
				}
			case 3:
				for(i=0;i<point.size();++i)
							{
								if point[i]->type=3
								point[i]->printCharacteristics();
							}

	}
	}
	input_file.close();
	return 0;
}

void parseString(string theLine, vector<string *> &theList)
	{
	// Make copy
	char buffer[theLine.length()+1];
	theLine.copy(buffer, theLine.length(), 0);
	buffer[theLine.length()]='\0'; // Add NULL
	char * token;
	token = strtok(buffer, ", \t");
	while(token != NULL)
	{
	cout << "Token was: " << token << endl;
	theList.push_back(new string(token));
	token = strtok(NULL, ", \t");
	}
	};

void parseString2(string theLine, vector<string *> &theList)
	{
	// Make copy
	char buffer[theLine.length()+1];
	theLine.copy(buffer, theLine.length(), 0);
	buffer[theLine.length()]='\0'; // Add NULL
	char * token;
	token = strtok(buffer, "\"");
	while(token != NULL)
	{
	cout << "Token was: " << token << endl;
	theList.push_back(new string(token));
	token = strtok(NULL, "\"");
	}
	};

