#pragma once
class gpio_interface_stepper
{
private:

	int phase_A;
	int phase_B;
	int phase_C;
	int phase_D;

public:

	void set_phases(int ph_a, int ph_b, int ph_c, int ph_d);



};

