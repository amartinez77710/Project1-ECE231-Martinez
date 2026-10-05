#include <iostream>
#include <cmath>
#include "capacitor.h"

//float currentthroughCapacitor(){

//float voltageacrossCapacitor(){


int main(){
	//DYNAMICALLY ALLOCATE CAPACITOR
	Capacitor *pCapacitor = new Capacitor;

	//ALLOCATE FOR VALUES
	pCapacitor->time = new double[50000];
	pCapacitor->voltage = new double[50000];
	pCapacitor->current = new double[50000];
	
	//INITIAL PARAMETERS
	double timeStep = 1e-10;
	double resistance = 1000;
	double capacitance = 100e-12;
	double finalTime = 5e-6;
	double constantCurrent = 1e-2;
	double sourceVoltage = 10;

	//CONSTANT CURRENT SOURCE POWER SUPPLY
	/* this section of the main will go into the first power supply configuration. With I(t) = C(dV(t)/dt) and the finite-difference method */

	
	
	
	return 0;
}
