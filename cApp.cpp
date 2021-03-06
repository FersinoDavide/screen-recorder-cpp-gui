#include "headers/cApp.h"

wxIMPLEMENT_APP(cApp);

bool cApp::OnInit()
{
    if (!wxApp::OnInit())
        return false;

    wxInitAllImageHandlers();
    main_frame = new cMain(nullptr, APP_NAME);
    main_frame->Show();

    return true;
}