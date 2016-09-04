/*
 * MiniDuckSimulator.cpp

 *
 *  Created on: Sep 4, 2016
 *      Author: berkanercan
 */
#include <iostream>
#include "FlyWithWings.h"
#include "Duck.h"
#include "MallardDuck.h"
#include "RubberDuck.h"

int main(){

	Duck* mallard = new MallardDuck();
	mallard->performFly();

	printf("*****\n");
	Duck* rubber = new RubberDuck();
	rubber->performFly();
	return 0;
}




