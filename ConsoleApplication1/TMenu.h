#pragma once
class TMenu
{
private:
	vector<string> vOpcje;
public:
	TMenu();
	~TMenu(); // destraktor 
	void add(string txt0); //musi mie� podpi�t� obs�ug� string�w 
	unsigned int wybierz();
};

