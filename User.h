#pragma once
#include<string>
#include <iostream>
#include <vector>
class User
{
private:

	std::string m_userName;
	int m_password = 0000;
	bool m_isAuthorized = false;
	bool m_activeUser = false;

public:

	User();
	User(std::string userName, int password);

	

	void setName(std::string name);
	void setPassword(int password);
	void setAuthStatus(bool auth);
	void setActiveUser(bool active);
	
	bool		 getActiveUser();
	std::string  getUser();
	bool		 getAuthorized();
	int			 getPassword();

	void showUser();
	void defaultUser(std::string, int password);
};