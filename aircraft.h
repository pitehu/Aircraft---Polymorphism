/*
 * aircraft.h
 *
 *  Created on: Oct 26, 2016
 *      Author: superhhu
 */
#include <string>
#include <iostream>
#ifndef AIRCRAFT_H_
#define AIRCRAFT_H_
class aircraft
{
private:
	int numofengines;
	int seatcapacity;
public:
	aircraft::aircraft(int x, int y)
	{
		aircraft::numofengines=x;
		aircraft::seatcapacity=y;
	};
	aircraft::aircraft(int x)
	{
			aircraft::numofengines=x;
			aircraft::seatcapacity=1;
	};
	void aircraftset1(int x, int y)
				{
							aircraft::numofengines=x;
							aircraft::seatcapacity=y;
				};
	virtual void aircraft1(int,int);
	virtual void printCharacteristics(void)
	{
		cout << "Name:aircraft"<<" "<<"numbers of engines", numofengines<< "seat capacity"<< seatcapacity;
	}
	virtual ~aircraft();
};
class fighter:public aircraft
{
private:
	std::string rangeandspeed;
public:
	void printCharacteristics(void){
		cout << "Name:fighter"<<" "<<"numbers of engines", numofengines<< "seat capacity"<< seatcapacity
				<<"range and speed description"<< rangeandspeed;
	}
	fighter::fighter(int x, int y,std::string c)
	{
		fighter::rangeandspeed=c;
		fighter::numofengines=x;
		fighter::seatcapacity=y;
		type =1;
	};
};
class acrobat:public aircraft
{
private:
	std::string manufacturer;
	std::string performance;
	int type;
public:
	void printCharacteristics(void)
	{
		cout << "Name:acrobat"<<"manufacturer description"<< manufacturer << "performance description"<<performance;
	}

	acrobat::acrobat(std::string a,std::string b)
	{
		acrobat::manufacturer=a;
		acrobat::performance=b;
		type =2;
	}
};

class freight:public aircraft
{
private:
	std::string company;
	std::string capacity;
	int type;
public:
	void printCharacteristics(void)
	{
		cout << "Name:freight"<<"number of engines"<< numofengines << "company"<<company<<"capacity"<<capacity;
	}
	freight::freight(int x,std::string a,std::string b)
	{
		freight::numofengines=x;
		freight::capacity=a;
		freight::company=b;
		type=3;
	}
};




#endif /* AIRCRAFT_H_ */
