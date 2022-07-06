#pragma once

#include "wx/wx.h"


class CalTemplate : public wxApp
{

public:
	CalTemplate();
	~CalTemplate();
public:
	wxButton** calButton;
	virtual bool OnInIt();
};

