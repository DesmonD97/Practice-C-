// stiksDlg.h : header file
//

#if !defined(AFX_STIKSDLG_H__3ADB8BC7_890A_11D1_A1FB_B432DEFC8A57__INCLUDED_)
#define AFX_STIKSDLG_H__3ADB8BC7_890A_11D1_A1FB_B432DEFC8A57__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CStiksDlg dialog

class CStiksDlg : public CDialog
{
// Construction
public:
	void calc();
	

	double hod;
	double kol;
	void calculator();
	CStiksDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CStiksDlg)
	enum { IDD = IDD_STIKS_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CStiksDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CStiksDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void On1();
	afx_msg void On2();
	afx_msg void On3();
	afx_msg void OnComp();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STIKSDLG_H__3ADB8BC7_890A_11D1_A1FB_B432DEFC8A57__INCLUDED_)
