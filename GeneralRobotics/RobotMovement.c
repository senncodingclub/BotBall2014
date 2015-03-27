/**
 * RobotMovement.c
 * This C file demonstrates a few pre-programmed movements for the robot.
 * Senn High School Coding Club - Robotics Division
 * 2015
 */

	// include our function definitions and constants
#include "RobotMovement.h"

/**
 * The main function acts as the main driver script
 */
int main()
{
	int i;
		// MAIN PROGRAM CONTROL HERE
	printf("Move forward for three seconds.\n");
	forward(100, 3);
	
	printf("Turn right for 1 second.\n");
	turnRight(100, 1);

	printf("Reverse for 1 second.\n");
	reverse(100, 1);

	printf("Enable servos \n");
	enable_servos();
	set_servo_position(SRVARM,0);
	
	
	for(i = 0; i <= MAXARM; i+=10) 
	{
		printf("Servo at %d", i);
		set_servo_position(SRVARM, 0);
		msleep(5);
	}
		
	
	
	printf("Program done!\n");
	
	return 0;
}

void forward(int power, float duration) 
{
		// engage both motors
	motor(LEFTWHEEL, power);
	motor(RIGHTWHEEL, power);
		
	msleep(duration*1000); // sleep so that the motors run for the correct amount of time
	
	ao(); // all off
	
	return;
}

void turnRight (int power, float duration) 
{
	motor(LEFTWHEEL, 0); // ensure left motor is off
	motor(RIGHTWHEEL, power); // engage right motor to turn right
		
	msleep(duration*1000); // sleep so that the motors run for the correct amount of time
		
	ao(); // all off
	return;
}

void turnLeft (int power, float duration) 
{
	motor(RIGHTWHEEL, 0); // ensure right motor is off
	motor(LEFTWHEEL, power); // engage left motor to turn left

	msleep(duration*1000); 	// sleep so that the motors run for the correct amount of time
	ao();
	return;
}

void reverse (int power, float duration) 
{
		// engage both motors
	motor(LEFTWHEEL, power*-1); 
	motor(RIGHTWHEEL, power*-1);
	 	// sleep so that the motors run for the correct amount of time
	msleep(duration*1000);
	
	ao();
	
	return;
}
