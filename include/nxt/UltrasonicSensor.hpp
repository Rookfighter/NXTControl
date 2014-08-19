#ifndef NXT_ULTRASONIC_SENSOR_HPP
#define NXT_ULTRASONIC_SENSOR_HPP

#include <cstdint>
#include "nxt/Brick.hpp"

namespace nxt
{
	/**
	* \brief Controls a ultrasonic sensor of the brick.
	*/
	class UltrasonicSensor
	{
	private:
		Brick &brick;
		uint8_t port;
	public:
		UltrasonicSensor(Brick &p_brick, const uint8_t p_port);
		~UltrasonicSensor();
		
		uint16_t getDistance();
	};

}

#endif
