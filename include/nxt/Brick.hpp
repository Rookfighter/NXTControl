#ifndef NXT_BRICK_HPP
#define NXT_BRICK_HPP

#include "nxt/USBSocket.hpp"
#include "nxt/TelegramFactory.hpp"
#include "nxt/TelegramDecoder.hpp"

namespace nxt
{
	class Brick
	{
	private:
		USBSocket socket;
		TelegramFactory telegramFactory;
		TelegramDecoder telegramDecoder;
		bool connected;
		
		void send(const Telegram &p_telegram);
		Telegram receive();
	public:
		Brick();
		~Brick();
		
		void connect(const int p_interface = 0);
		void disconnect();
		
		void startProgram(const std::string &p_fileName);
		void stopProgram();
		void playSoundFile(const uint8_t p_loop,
						   const std::string &p_fileName);
		void playTone(const uint16_t p_frequency,
					  const uint16_t p_durationMS);
		void setOutputState(const uint8_t p_port,
						    const uint8_t p_power,
						    const uint8_t p_motorMode,
						    const uint8_t p_regulationMode,
						    const uint8_t p_turnRatio,
						    const uint8_t p_runState,
						    const uint32_t p_tachoLimit);
		void setInputMode(const uint8_t p_port,
						  const uint8_t p_type,
						  const uint8_t p_mode);
		void resetInputScaledValue(const uint8_t p_port);
		void writeMessage(const uint8_t p_mailbox,
						  const std::string& p_message);
		void resetMotorPosition(const uint8_t p_port,
								const uint8_t p_relative);
		void stopSoundPlayback();
		void lsWrite(const uint8_t p_port,
					 const uint8_t p_txDataLength,
					 const uint8_t p_rxDataLength,
					 const unsigned char *p_txData);
		
		OutputState getOutputState(const uint8_t p_port);
		InputValues getInputValues(const uint8_t p_port);
		BatteryLevel getBatteryLevel();
		KeepAlive keepAlive();
		LSStatus lsGetStatus(const uint8_t p_port);
		LSRead lsRead(const uint8_t p_port);
		ProgramName getCurrentProgramName();
		MailboxMessage readMessage(const uint8_t p_remoteMailbox,
								   const uint8_t p_localMailbox,
								   const uint8_t p_removeMessage);

	};
}

#endif
