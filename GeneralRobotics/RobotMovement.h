// Created on Fri March 20 2015

#ifndef _ROBOT_MOVEMENT_H_
#define _ROBOT_MOVEMENT_H_


#define LEFTWHEEL 3 /** LEFTWHEEL the port that the left motor wheel is attached to **/
#define RIGHTWHEEL 1  /** RIGHTWHEEL the port that the right motor wheel is attached to **/
#define SRVARM 3 /**SRVARM the port that the servo is attached to **/
#define MAXARM 1300 /** MAXAARM is the max position of the arm without breaking off **/
/**
 * forward
 * Causes the robot to move forward at power for duration in seconds.
 * @param power integer value from -100 to 100. Full forward power is 100.
 * @param duration float value of seconds the robot will move forward for
 */
void forward(int power, float duration);

/**
 * turnRight
 * Causes the robot to turn right at power for duration in seconds.
 * @param power integer value from -100 to 100. Full forward power is 100.
 * @param duration float value of seconds the robot will turn right for
 */
void turnRight (int power, float duration);

/**
 * turnLeft
 * Causes the robot to turn left at power for duration in seconds.
 * @param power integer value from -100 to 100. Full forward power is 100.
 * @param duration float value of seconds the robot will turn left for
 */
void turnLeft (int power, float duration);

/**
 * left
 * Causes the robot to move in reverse at power for duration in seconds
 * @param power integer value from -100 to 100. Full forward power is 100.
 * @param duration float value of seconds the robot will move backward
 */
void reverse (int power, float duration) ;

#endif
