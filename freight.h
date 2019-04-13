/*
 * freight.h
 *
 *  Created on: Oct 27, 2016
 *      Author: superhhu
 */

#ifndef FREIGHT_H_
#define FREIGHT_H_
#include "aircraft.h"
class freight:public aircraft
{
private:
	std::string company;
	std::string capacity;
public:
	void printCharacteristics(void);
	freight(std::string,std::string);
};

#endif /* FREIGHT_H_ */
