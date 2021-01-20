#pragma once
class stepper
{
private:
	int interstep_delay_ms;
	int holding_delay_ms;

public:

	void step_clockwise();
	void step_counterclockwise();
	void hold();

	void set_interstep_delay_ms(int delay);
	void set_holding_delay_ms(int delay);

};

