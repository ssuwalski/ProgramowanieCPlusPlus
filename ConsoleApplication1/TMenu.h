#pragma once
class TMenu
{
private:
	vector<string> vOpcje;
public:
	TMenu();
	~TMenu(); // destraktor 
	void add(string txt0); //musi mieæ podpiêt¹ obs³ugê stringów 
	unsigned int wybierz();
};

