#include "User.h"


User::User()		
	{}

User::User(std::string userName, int password): m_userName(userName), m_password(password)
	{}
	

	
	void User::setName(std::string name)	{ m_userName = name; }
	void User::setPassword(int password)	{ m_password = password;}
	void User::setAuthStatus(bool auth)		{ m_isAuthorized = auth;}
	void User::setActiveUser(bool active)	{ m_activeUser = active;}

	std::string User::getUser()		 { return m_userName;}
	bool User:: getActiveUser()		 { return m_activeUser;}
	bool User:: getAuthorized()		 { return m_isAuthorized;}
	int  User:: getPassword()		 { return m_password;}
	
	void User:: showUser()
	{
		std::cout << "User " << m_userName << " joined to chat." << std::endl;
	}
	void User:: defaultUser(std::string, int password)
	{
		m_userName = "default"; //
		m_password = 0000;
		m_isAuthorized = true;
	}
