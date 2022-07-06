#include "CalTemplate.h"

wxIMPLEMENT_APP(CalTemplate);

CalTemplate::CalTemplate() {

}


CalTemplate::~CalTemplate() {

}

bool CalTemplate::OnInIt() {
	//Opens Window
	m_frame1 = new Main();
	m_frame1->Show();

	return true;
}