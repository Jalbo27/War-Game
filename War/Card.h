#pragma once
class Card
{
public:
	char val = ' ';
	char seme = '♥';

	Card() {}

	void SetCard(unsigned short val, char seme)	
	{
		this->val = (char) val; 
		this->seme = (char)seme;
	}
};

