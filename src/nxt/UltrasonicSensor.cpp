#include "nxt/UltrasonicSensor.hpp"

namespace nxt
{

	UltrasonicSensor::UltrasonicSensor(Brick &p_brick, const uint8_t p_port)
	:brick(p_brick), port(p_port)
	{
	}

	UltrasonicSensor::~UltrasonicSensor()
	{
	}
	
	uint16_t UltrasonicSensor::getDistance()
	{
		return brick.getInputValues(port).sensorInfo.rawValue;
	}


}

