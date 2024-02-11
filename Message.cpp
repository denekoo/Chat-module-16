#include "Message.h"


	Message::Message(int authorID, std::string messageAuthor, std::string message) :
		m_authorID(authorID), m_messageAuthor(messageAuthor), m_message(message)
	{
	}

	Message::Message( std::string messageAuthor, std::string message) :
		 m_messageAuthor(messageAuthor), m_message(message)
	{
	}

	Message::Message( std:: string author)
	{
		m_messageAuthor = author;
	}

	void Message::writeMessage()
	{	
		std::getline(std::cin, m_message);
	}

	void Message::writeMessage(std::string messageAuthor) // not work
	{
		m_messageAuthor = messageAuthor;
		std::cin >> m_message;

		std::getline(std::cin, m_message);
	
	}

	bool Message::showMessage()
	{
		std::cout << "\t\t\t\t"  <<"User " << m_messageAuthor << " send to chat:\n";
		std::cout << "\t\t\t\t"  << m_message << std::endl;
		std::cout << "\t\t\t\t"  << "---------" << std::endl;
		
		if (m_message == "**") // Обеспечивает условие для выхода из чата
		{
			return false;
		}
		else return true;
	}