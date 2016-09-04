/*
 * MallardDuck.cpp
 *
 *  Created on: Sep 4, 2016
 *      Author: berkanercan
 */
#include "MallardDuck.h"
#include "FlyWithWings.h"

MallardDuck::MallardDuck()
{
	flyBehavior = new FlyWithWings();
}

MallardDuck::~MallardDuck()
{

}



