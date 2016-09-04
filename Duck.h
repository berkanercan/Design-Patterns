/*
 * Duck.h
 *
 *  Created on: Sep 4, 2016
 *      Author: berkanercan
 */

#ifndef DUCK_H_
#define DUCK_H_
#include <iostream>
#include "FlyBehavior.h"
using namespace std;

class Duck
{
public:
	Duck();
	~Duck();
	void setFlyBehavior();
	void performFly();

protected:
	FlyBehavior* flyBehavior;

};



#endif /* DUCK_H_ */
