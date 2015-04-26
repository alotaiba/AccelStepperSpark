// ConstantSpeed.ino
// -*- mode: C++ -*-
//
// Shows how to run AccelStepper in the simplest,
// fixed speed mode with no accelerations
/// \author  Mike McCauley (mikem@airspayce.com)
// Copyright (C) 2009 Mike McCauley

#include "AccelStepperSpark/AccelStepperSpark.h"

AccelStepper stepper; // Defaults to AccelStepper::FULL4WIRE (4 pins) on D2, D3, D4, D5

void setup()
{  
   stepper.setMaxSpeed(1000);
   stepper.setSpeed(50);	
}

void loop()
{  
   stepper.runSpeed();
}
