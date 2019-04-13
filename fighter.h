/*
 * fighter.h
 *
 *  Created on: Oct 27, 2016
 *      Author: superhhu
 */

#ifndef FIGHTER_H_
#define FIGHTER_H_
#include "aircraft.h"

class fighter:public aircraft
{
private:
	std::string rangeandspeed;
public:
	void printCharacteristics(void);
	fighter(int,int,std::string);
};

#endif /* FIGHTER_H_ */
