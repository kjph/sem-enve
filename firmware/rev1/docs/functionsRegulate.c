void mc_start (void)
{
    //Used to start the motor. The regulation loop is launched to set the duty
    //cycle. Then the first phase commutation is executed
}

void mc_stop (void)
{
    //Used to stop the motor by turning off the appropriate register pins
}

bool mc_isMotorRunning (void)
{
    //Returns the motor state, 'TRUE' for running and 'FALSE' for stopped
}

bool mc_isDirFwd (void)
{
    //Returns 'TRUE' for correct direction and 'FALSE' elsewise
}

void mc_refSpeedSet (uint8_t speed)
{
    //Set the reference speed for the motor controller to adjust to
    //Update the output compare registers of timer which controls the duty cycle
    //of the PWM output, thus the speed of the motor.
}

uint8_t mc_refSpeedGet (void)
{
    //Returns the reference speed
}

uint8_t mc_measuredSpeedSet (uint8_t measured_speed)
{
    //Saves the measured speed in the measured_speed variable
}

uint8_t mc_measuredSpeedGet (void)
{
    //Gets the measured speed.
}

