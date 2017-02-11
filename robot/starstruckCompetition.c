#pragma config(Motor,  port2,           driveFrontLeft, tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           driveFrontRight, tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port4,           arm1,          tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port5,           mantis,        tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port6,           arm3,          tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port7,           arm2,          tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port8,           driveBackLeft, tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,           driveBackRight, tmotorVex393_MC29, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

/*!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!*
 *!! IF YOU ARE NOT A TEAM PROGRAMMER: !!*
 *!!     DO NOT MODIFY CODE BELOW!     !!*
 *!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!*/




// This code is for the VEX cortex platform
#pragma platform(VEX2)

// Select Download method as "competition"
#pragma competitionControl(Competition)

// Main competition background code
#include "Vex_Competition_Includes.c"

// Import constants and user settings
#include "constants.h"
#include "settings.h"

// Import robot control library
#include "robotControl.c"

// DISABLED #include "JoystickDriver.c"

void pre_auton() {

	bStopTasksBetweenModes = true;
	bDisplayCompetitionStatusOnLcd = true;

	halt();

}

task autonomous() {
	AutonomousCodePlaceholderForTesting();
	//setDrive(0, -100, 0);
	//wait1Msec(1000);
	//halt();
	//wait1Msec(2000);
	//setWrist(MOTOR_MAX);
	//wait1Msec(1250);
	//halt();
	//wait1Msec(2000);
	//setArm(negate(MOTOR_MAX));
	//wait1Msec(500);
	//setDrive(0, 80, 0);
	//wait1Msec(1000);
	//halt();
	//wait1Msec(2000);
	//setDrive(0, -80, 0);
	//wait1Msec(1300);
	//halt();

}

task usercontrol() {
	killSwitchState = false;

	while (true) {
		if (!killSwitch()) {
			mantisControl();
			driveControl();
			armControl();
		} else {
			halt();
		}
	}
}
