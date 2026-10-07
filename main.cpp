#include <iostream>
#include <cmath>
#include "capacitor.h"

void currentthroughCapacitor(Capacitor *capacitorData, double timeStep, double constvoltage, double resistance){
	for(int i = 1; i < 50000; i++){
		capacitorData->time[i] = capacitorData->[i - 1] + timeStep;
		capacitorData->voltage[i] = constvoltage;
		capacitorData->current[i] = capacitorData->current[i - 1] - (capacitorData->current[i - 1] / (resistance * capacitorData->C)) * capacitor->time[i];
	}
}
	

void voltageacrossCapacitor(Capacitor *capacitorData, double timeStep, double constcurrent){
	for(int i = 1; i < 50000; i++){
		capacitorData->time[i] = capacitorData->time[i - 1] + timeStep;
		capacitorData->current[i] = constcurrent;
		capacitorData->voltage[i] = capacitorData->voltage[i - 1] + (capacitorData->current[i] * timeStep) / capacitorData->C;
		
	}
}	


int main(){
	//DYNAMICALLY ALLOCATE CAPACITOR
	Capacitor *pCapacitor = new Capacitor;

	//ALLOCATE FOR VALUES
	//cc means constant current source
	//vc means constant voltage source
	ccCapacitor->time = new double[50000];
	ccCapacitor->voltage = new double[50000];
	ccCapacitor->current = new double[50000];

	vcCapacitor->time = new double[50000];
        vcCapacitor->voltage = new double[50000];
        vcCapacitor->current = new double[50000];
	
	//INITIAL PARAMETERS
	double timeStep = 1e-10;
	double resistance = 1000;
	double capacitance = 100e-12;
	double finalTime = 5e-6;
	double sourceCurrent = 1e-2;
	double sourceVoltage = 10;

	
	//CONSTANT CURRENT SOURCE SUPPLY
        /* this section of the main will go into the first power supply configuration. With I(t) = C(dV(t)/dt) and the finite-difference method */
	
	//Assigning to Struct at t = 0

        ccCapacitor->time[0] = 0;
        ccCapacitor->voltage[0] = 0;
        ccCapacitor->current[0] = sourceCurrent;
        ccCapacitor->C = capacitance;
	
	
	voltageacrossCapacitor(ccCapacitor, timeStep, sourceCurrent);
	//for(int i = 0; i < 10; i++){
	//std::cout << "\n" << pCapacitor->time[i] << "\n" << std::endl;
	std::cout << "\n" << ccCapacitor->voltage[50000] << "\n" << std::endl;
	//}


	//CONSTANT CURRENT SOURCE SUPPLY
	/* this section of the main will go into the first power supply configuration. With I(t) = C(dV(t)/dt) and the finite-difference method */
	
	//Assigning to Struct at t = 0
	vcCapacitor->time[0] = 0;
	vcCapacitor->voltage[0] = sourceVoltage;
	vcCapacitor->current[0] = sourceVoltage/resistance;
	vcCapacitor->C[0] = capacitance;


	
	
	
	return 0;
}
