/***************************************************************
 * Name:      file_managerMain.h
 * Purpose:   Defines Application Frame
 * Author:     ()
 * Created:   2019-10-05
 * Copyright:  ()
 * License:
 **************************************************************/

#ifndef FILE_MANAGERMAIN_H
#define FILE_MANAGERMAIN_H

//(*Headers(file_managerFrame)
#include <wx/frame.h>
#include <wx/menu.h>
#include <wx/statusbr.h>
//*)

class file_managerFrame: public wxFrame
{
    public:

        file_managerFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~file_managerFrame();

    private:

        //(*Handlers(file_managerFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        //*)

        //(*Identifiers(file_managerFrame)
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(file_managerFrame)
        wxStatusBar* StatusBar1;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // FILE_MANAGERMAIN_H
