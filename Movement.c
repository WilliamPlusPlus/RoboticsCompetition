#pragma config(Motor,  port2,           largeLeft,     tmotorVex393_MC29, openLoop, reversed, driveLeft)
#pragma config(Motor,  port3,           largeRight,    tmotorVex393_MC29, openLoop, driveRight)
#pragma config(Motor,  port4,           Forklift,      tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port5,           testServo,     tmotorServoStandard, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{



//vexRT[Ch1];\
bool armPosition = false;
int forkliftPosition = 0;
while (true) {
//int forwardPower = vexRT[Ch3];
//int previousChannel3 = 0;

//int previousChannel4 = 0;

if (vexRT[Btn8D] == 1 ) {
motor[largeLeft] = 100;
motor[largeRight] = 112;

//motor[largeLeft] = vexRT[Ch3];
//motor[largeRight] = vexRT[Ch3];

}
//motor[largeLeft] = vexRT[Ch3]+254 * -1;
//motor[largeRight] = vexRT[Ch3]/127+254 * -1;


//motor[largeLeft] = -100;
//motor[largeRight] = -115;
if (abs(vexRT[Ch2]) > 0.5) {
	// (vexRT[Ch2] < 1) {
		//forkliftPosition > -5) {
		//otor[Forklift] = vexRT[Ch2] * 0.75;
//
//else {
// (-(motor[Forklift])>= 0) {
//if (forkliftPosition <= 90 && forkliftPosition >= 0) {
	motor[Forklift] = -(vexRT[Ch2]);
//} else {
//if (forkliftPosition < 100) {
//forkliftPosition = 0;
//} else {
//forkliftPosition = 90;

//else {
//tor[Forklift] =-1;
//

//forkliftPosition += vexRT[Ch2];
}

//

///
//
 if (vexRT[3] < 1) {
   //negative
} else {
//positive
}
//if (abs (vexRT[Ch3]) > 1){
if (abs(vexRT[Ch3]) > abs(vexRT[Ch4])) {
motor[largeLeft] = vexRT[Ch3];
motor[largeRight] = vexRT[Ch3];
} else {
//}

if ((vexRT[Ch4]) > 25) {
//motor[largeLeft] = vexRT[Ch4] * -1;
motor[largeLeft] = vexRT[Ch4];
motor[largeRight] = vexRT[Ch4] * 0.2;
}

if ((vexRT[Ch4]) < -25) {
//motor[largeLeft] = vexRT[Ch4] * -1;
motor[largeRight] = vexRT[Ch4] * -1;
motor[largeLeft] = vexRT[Ch4] * -0.2;
}}
// (veRT[Btn6U) {motor[testServo] = 0};
if (vexRT[Btn6D]) {
motor[testServo] = 127;
}
if (vexRT[Btn7L] == 1) {
motor[largeLeft] = 50;
motor[largeRight] = -50;

}

if (vexRT[Btn7R] == 1 ) {
motor[largeLeft] = -50;
motor[largeRight] = 50;
}

if (vexRT[Btn8L] == 1) {
motor[largeLeft] = -75;
motor[largeRight] = -100;

}

if (vexRT[Btn8R] == 1 ) {
motor[largeLeft] = -100;
motor[largeRight] = -50;
}

if (vexRT[Btn7U] == 1) {

motor[largeLeft] = 0;
motor[largeRight] = 0;



}

}
}
