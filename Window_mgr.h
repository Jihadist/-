#pragma once
#include <vector>
#include "Screen.h"
class Window_mgr
{
public:
	Window_mgr();
	~Window_mgr();
private:
	std::vector<Screen> screens{ Screen(20,80,' ') };
};

