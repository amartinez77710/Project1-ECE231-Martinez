#include <iostream>
#include <cmath>
#include "capacitor.h"

//float currentthroughCapacitor(double current, double time, double capacitance){

	

void voltageacrossCapacitor(Capacitor *capacitorData, double timeStep){
	

	for(int i = 1; i < 50000; i++){
		capacitorData->time[i] = capacitorData->time[i - 1] + timeStep;
		capacitorData->voltage[i] = capacitorData->voltage[i - 1] + (capacitorData->current[i - 1] * timeStep) / capacitorData->C;
	}
}	


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

	//Assigning to Struct at t = 0
	pCapacitor->time[0] = 0;
	pCapacitor->voltage[0] = 0;
	pCapacitor->current[0] = 10/1000;
	pCapacitor->C = capacitance;



	voltageacrossCapacitor(pCapacitor, timeStep);
	std::cout << "\n" << pCapacitor->time[2] << "\n" << std::endl;
	std::cout << "\n" << pCapacitor->voltage[2] << "\n" << std::endl;
	std::cout << "\n" << pCapacitor->current[2] << "\n" << std::endl;


	//CONSTANT CURRENT SOURCE POWER SUPPLY
	/* this section of the main will go into the first power supply configuration. With I(t) = C(dV(t)/dt) and the finite-difference method */

	
	
	
	return 0;
}
