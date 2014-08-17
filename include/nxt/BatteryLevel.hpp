#ifndef NXT_BATTERY_LEVEL_HPP
#define NXT_BATTERY_LEVEL_HPP

namespace nxt
{
	class BatteryLevel
	{
	public:
		uint8_t status;
		uint16_t voltage;
		
		BatteryLevel() { }
		~BatteryLevel() { }
	};
}

#endif