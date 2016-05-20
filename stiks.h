// stiks.h : main header file for the STIKS application
//

#if !defined(AFX_STIKS_H__3ADB8BC5_890A_11D1_A1FB_B432DEFC8A57__INCLUDED_)
#define AFX_STIKS_H__3ADB8BC5_890A_11D1_A1FB_B432DEFC8A57__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CStiksApp:
// See stiks.cpp for the implementation of this class
//

class CStiksApp : public CWinApp
{
public:
	CStiksApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CStiksApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CStiksApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STIKS_H__3ADB8BC5_890A_11D1_A1FB_B432DEFC8A57__INCLUDED_)
