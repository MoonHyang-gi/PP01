#pragma once
#include "MCommand.hpp"

class JumpCommand : public Musoeun::MCommand
{
public:
	void Execute()
	{
		std::cout << "¾Ñ½Î Á¡ÇÁ!!";
	}
};

class RunCommand : public Musoeun::MCommand
{
public:
	void Execute()
	{
		std::cout << "¾Ñ½Î ´Þ¸®±â!!";
	}
};

class LeftCommand : public Musoeun::MCommand
{
public:
	void Execute()
	{
		std::cout << "¾Ñ½Î ¿ÞÂÊ!!";
	}
};

class RightCommand : public Musoeun::MCommand
{
public:
	void Execute()
	{
		std::cout << "¸¾¸¶¹Ì¾Æ Á¡ÇÁ!!";
	}
};

class DownCommand : public Musoeun::MCommand
{
public:
	void Execute()
	{
		std::cout << "¾Ñ½Î µû¿î!!";
	}
};
