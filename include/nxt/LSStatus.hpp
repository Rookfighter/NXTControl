#ifndef NXT_LS_STATUS_HPP
#define NXT_LS_STATUS_HPP

#include <cstdint>

namespace nxt
{
	class LSStatus
	{
	public:
		uint8_t status;
		uint8_t readyBytesCount;
		
		LSStatus() { }
		~LSStatus() { }
	};
}

#endif