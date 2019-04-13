/*
 * acrobat.h
 *
 *  Created on: Oct 27, 2016
 *      Author: superhhu
 */

#ifndef ACROBAT_H_
#define ACROBAT_H_
#include "aircraft.h"

class acrobat:public aircraft
{
private:
	std::string manufacturer;
	std::string performance;
public:
	void printCharacteristics;

	acrobat(std::string,std::string);
};


#endif /* ACROBAT_H_ */
