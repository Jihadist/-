#pragma once
#include <string>
class Screen
{
public:
	typedef std::string::size_type pos;
	Screen() = default;//����������� �����������
	Screen(pos ht,pos wd,char c):height(ht),width(wd),contents(ht*wd,c){}//�����������, ���������� ������, ������ � ����������� ������ ��� ����������� ������
	Screen(pos ht, pos wd) :height(ht), width(wd), contents(ht*wd,' ') {}//�����������, ���������� ������, ������ � ����������� ���������� ��������������� ����������� �������� 
	
	void some_member() const;
	char get() const
	{
		return contents[cursor];
	}
	char get(pos ht, pos wd) const;
	Screen move(pos r, pos c);
	Screen set(char);
	Screen set(pos, pos, char);
	Screen display(std::ostream &os)
	{
		do_display(os);
		return *this;
	}
	const Screen display(std::ostream &os) const
	{
		do_display(os);
		return *this;
	}
private:
	mutable size_t access_ctr;
	pos cursor = 0;
	pos height = 0, width = 0;
	std::string contents;
	void do_display(std::ostream &os) const { os << contents; }
};

