#pragma once
class CUnit
{
public:
	CUnit(int x=0,int y=0 ,char pic='*');
	virtual ~CUnit();
	void show();
	void erase();
public:
	int m_ix;
	int m_iy;
	char m_pic;
};

