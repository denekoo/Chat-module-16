#pragma once

#include <iostream>
#include <vector>
#include <ios> //used to get stream size
#include <limits> //used to get numeric limits
#include "User.h"
#include "Message.h"

class Chat
{
private:
	std::vector <User> m_users;
	short m_usersCount = 0;
	std::vector <Message> m_messages;
	int m_messagesCount = 0;

public:
	Chat();
	~Chat();

	int numInput();									// Функция проверки ввода, с защитой от некорректного ввода
	int getUserCounter();							// Возвращает количетво зарегистрированных пользователей
	void addUser();									// Добавляет экземпляр класса User в массив, увеличивает счетчик пользователей
	void registrator();								// Регисратор, выполняет все функции по регистрации и входу пользователей
	bool checkUser(std::string userName);			// Функция проверки имени пользователя из массива пользователей, возвращает false, если имя совпало
	bool checkPassword(User user, int password);	// Функция проверки пароля, возвращает true если пароль верный
	bool userRegister();							// Выполняет действия регистрации нового пользователя, при этом выполняя проверку имени
	bool userLogin();								// Функция входа зарегистрированного пользователя, с проверкой имения и пароля на совпадение  
	void showUserList();							// Вывод списка всех пользователей с указанием статуса авторизации и активности пользователей
	User selectUser();								// Функция выбора активного пользователя для написания сообщения
	bool chatMessage(User user);					// Функция отправки сообщения от выбранного пользователя
	void privateChat();								// Приватный чат для двух пользователей
	void chat();									// Общий чат для общения всех зарегистрированных пользователей
};











