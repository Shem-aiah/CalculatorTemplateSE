#pragma once
#include "Main.h"
#include "wx/wx.h"


class CalTemplate : public wxApp
{
public:
	CalTemplate();
	~CalTemplate();
private:
	Main* m_frame1 = nullptr;
public:
	virtual bool OnInIt();
};

