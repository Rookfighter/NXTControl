#ifndef NXT_EXCEPTIONS_HPP
#define NXT_EXCEPTIONS_HPP

#include <stdexcept>

namespace nxt
{	
	class NXTException: public std::logic_error
	{
	public:
		NXTException(const std::string& p_what) throw();
		NXTException(const char* p_what) throw();
	};
	
	class USBException: public NXTException
	{
	public:
		USBException(const std::string& p_what) throw();
		USBException(const char* p_what) throw();
	};
	
	class TimeoutException: public NXTException
	{
	public:
		TimeoutException(const std::string& p_what) throw();
		TimeoutException(const char* p_what) throw();
	};
}

#endif