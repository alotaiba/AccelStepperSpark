// ProportionalControl.ino
// -*- mode: C++ -*-
//
// Make a single stepper follow the analog value read from a pot or whatever
// The stepper will move at a constant speed to each newly set posiiton, 
// depending on the value of the pot.
//
// Copyright (C) 2012 Mike McCauley

#include "AccelStepperSpark/AccelStepperSpark.h"

// Define a stepper and the pins it will use
AccelStepper stepper; // Defaults to AccelStepper::FULL4WIRE (4 pins) on D2, D3, D4, D5

// This defines the analog input pin for reading the control voltage
// Tested with a 10k linear pot between 5v and GND
#define ANALOG_IN A0

void setup()
{  
  stepper.setMaxSpeed(1000);
}

void loop()
{
  // Read new position
  int analog_in = analogRead(ANALOG_IN);
  stepper.moveTo(analog_in);
  stepper.setSpeed(100);
  stepper.runSpeedToPosition();
}
