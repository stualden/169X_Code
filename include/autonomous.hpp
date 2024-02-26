#pragma once
#include "globals.hpp"
#include "main.h"


constexpr double kP = 1.0;
constexpr double kD = 3.0;

// double angleDifference(double angle1, double angle2);
// void setoveTargetDistance(double distance);
// oid setMoveTargetUnits(int encoderUnits);
// void setAngleTargetRelative(double degrees);
// void setAngleTargetAbsolute(double degrees);
// void setFourBarPosition(int encoderUnits);
// void wait(int percentComplete);
// void close_awp();
// void far_awp();
// void check_close_elim();
// void close_elim();
// oid far_elim();
// oid prog();

/*void matchstop(){

    leftWheelsBack.move(0);
    leftWheelsFront.move(0);
    rightWheelsBack.move(0);
    rightWheelsFront.move(0);

    pros::delay(60000);
}
void stop(){

  leftWheelsBack.move(0);
    leftWheelsFront.move(0);
    rightWheelsBack.move(0);
    rightWheelsFront.move(0);

   pros::delay(60000);
}

void forward(){

    leftWheelsBack.move(-75);
    leftWheelsFront.move(-75);
    rightWheelsBack.move(75);
    rightWheelsFront.move(75);

}

void backward(){

    leftWheelsBack.move(75);
    leftWheelsFront.move(75);
    rightWheelsBack.move(-75);
    rightWheelsFront.move(-75);

}

void turnright(){

    leftWheelsBack.move(-75);
    leftWheelsFront.move(-75);
    rightWheelsBack.move(-75);
    rightWheelsFront.move(-75);

}
// 90 degree turn is, pros::delay(300)
void turnleft(){

   leftWheelsBack.move(75);
    leftWheelsFront.move(75);
    rightWheelsBack.move(75);
    rightWheelsFront.move(75);

}
void intake_in(){
  intakeMotor.move(100);
}

void intake_out(){
  intakeMotor.move(-100);

}
*/