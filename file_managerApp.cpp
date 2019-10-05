/***************************************************************
 * Name:      file_managerApp.cpp
 * Purpose:   Code for Application Class
 * Author:     ()
 * Created:   2019-10-05
 * Copyright:  ()
 * License:
 **************************************************************/

#include "file_managerApp.h"

//(*AppHeaders
#include "file_managerMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(file_managerApp);

bool file_managerApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    file_managerFrame* Frame = new file_managerFrame(0);
    Frame->Show();
    SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
