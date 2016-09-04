/*
 * FlyNoWay.h
 *
 *  Created on: Sep 4, 2016
 *      Author: berkanercan
 */

#ifndef FLYNOWAY_H_
#define FLYNOWAY_H_

#include "FlyBehavior.h"

class FlyNoWay : public FlyBehavior
{
public:
	FlyNoWay();
	~FlyNoWay();
	void fly();
};



#endif /* FLYNOWAY_H_ */
