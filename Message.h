#pragma once
#include <string>
#include<iostream>

class Message
{
private:
	// реквизиты отправаителя:
	int m_authorID=0;
	std::string m_messageAuthor;

	//тело сообщения:
	std::string m_message;


public:
	Message(int authorID, std::string messageAuthor, std::string message);
	Message(std::string messageAuthor, std::string message);
	Message(std::string author);
	
	void writeMessage();
	void writeMessage(std::string messageAuthor);
	bool showMessage();
};
