// Motor control functions for 3-axis stepper motors with move, position, and emergency stop functions

#include <Stepper.h>

#define STEPS_PER_REV 200

class MotorControl {
  private:
    Stepper stepperX;
    Stepper stepperY;
    Stepper stepperZ;

  public:
    MotorControl(int pin1, int pin2, int pin3, int pin4) : stepperX(STEPS_PER_REV, pin1, pin2, pin3, pin4) {}

    void moveToPosition(int x, int y, int z) {
      stepperX.step(x);
      stepperY.step(y);
      stepperZ.step(z);
    }

    void emergencyStop() {
      stepperX.stop();
      stepperY.stop();
      stepperZ.stop();
    }
};
