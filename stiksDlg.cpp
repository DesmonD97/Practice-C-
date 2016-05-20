// stiksDlg.cpp : implementation file
//

#include "stdafx.h"
#include "stiks.h"
#include "stiksDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
		// No message handlers
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CStiksDlg dialog

CStiksDlg::CStiksDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CStiksDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CStiksDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CStiksDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CStiksDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CStiksDlg, CDialog)
	//{{AFX_MSG_MAP(CStiksDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_1, On1)
	ON_BN_CLICKED(IDC_2, On2)
	ON_BN_CLICKED(IDC_3, On3)
	ON_BN_CLICKED(ID_COMP, OnComp)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CStiksDlg message handlers

BOOL CStiksDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
		kol=10;

		GetDlgItem(ID_COMP)->EnableWindow(FALSE);
	
       
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CStiksDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CStiksDlg::OnPaint() 
{	CClientDC dc(this);
	CPen pen1(PS_SOLID,10,RGB(255,0,0));
	dc.SelectObject(&pen1);

	int i;

	for(i=45;i<241;i+=20){	dc.MoveTo(i,45);
	dc.LineTo(i,65);}
    
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CStiksDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CStiksDlg::calculator()
{CClientDC dc(this);
	CPen pen1(PS_SOLID,10,RGB(255,0,0));
	dc.SelectObject(&pen1);
int i;

kol=kol-hod;
if(kol==9 )for(i=45;i<221;i+=20){	dc.MoveTo(i,45);
	dc.LineTo(i,65);}
if(kol==8)for(i=45;i<201;i+=20){	dc.MoveTo(i,45);

	dc.LineTo(i,65);}
if(kol==7)for(i=45;i<181;i+=20){	dc.MoveTo(i,45);
	dc.LineTo(i,65);}
if(kol==6)for(i=45;i<161;i+=20){	dc.MoveTo(i,45);
	dc.LineTo(i,65);}
if(kol==5)for(i=45;i<141;i+=20){	dc.MoveTo(i,45);
	dc.LineTo(i,65);}
if(kol==4)for(i=45;i<121;i+=20){	dc.MoveTo(i,45);
	dc.LineTo(i,65);}
if(kol==3)for(i=45;i<101;i+=20){	dc.MoveTo(i,45);
	dc.LineTo(i,65);}
if(kol==2)for(i=45;i<81;i+=20){	dc.MoveTo(i,45);
	dc.LineTo(i,65);}
if(kol==1)for(i=45;i<61;i+=20){	dc.MoveTo(i,45);
	dc.LineTo(i,65);
	MessageBox("вы выиграли");}



}

void CStiksDlg::On1() 
{
	// TODO: Add your control notification handler code here
	hod=1;
		CClientDC dc(this);
	CPen pen1(PS_SOLID,10,RGB(192,192,192));
	dc.SelectObject(&pen1);

	int i;

	for(i=45;i<241;i+=20){	dc.MoveTo(i,45);
	dc.LineTo(i,65);}
    
	calculator();
	GetDlgItem(IDC_1)->EnableWindow(FALSE);
		GetDlgItem(IDC_2)->EnableWindow(FALSE);
			GetDlgItem(IDC_3)->EnableWindow(FALSE);
			GetDlgItem(ID_COMP)->EnableWindow(TRUE);
}

void CStiksDlg::On2() 
{
	// TODO: Add your control notification handler code here
	hod=2;
		CClientDC dc(this);
	CPen pen1(PS_SOLID,10,RGB(192,192,192));
	dc.SelectObject(&pen1);

	int i;

	for(i=45;i<241;i+=20){	dc.MoveTo(i,45);
	dc.LineTo(i,65);}
	calculator();
		GetDlgItem(IDC_1)->EnableWindow(FALSE);
			GetDlgItem(IDC_2)->EnableWindow(FALSE);
				GetDlgItem(IDC_3)->EnableWindow(FALSE);
				GetDlgItem(ID_COMP)->EnableWindow(TRUE);
}

void CStiksDlg::On3() 
{
	// TODO: Add your control notification handler code here
hod=3;
	CClientDC dc(this);
	CPen pen1(PS_SOLID,10,RGB(192,192,192));
	dc.SelectObject(&pen1);

	int i;

	for(i=45;i<241;i+=20){	dc.MoveTo(i,45);
	dc.LineTo(i,65);}
calculator();
	GetDlgItem(IDC_1)->EnableWindow(FALSE);	
		GetDlgItem(IDC_2)->EnableWindow(FALSE);
			GetDlgItem(IDC_3)->EnableWindow(FALSE);
				GetDlgItem(ID_COMP)->EnableWindow(TRUE);
}





void CStiksDlg::OnComp() 
{
	// TODO: Add your control notification handler code here
	CClientDC dc(this);
	CPen pen1(PS_SOLID,10,RGB(192,192,192));
	dc.SelectObject(&pen1);

	int i;

	for(i=45;i<241;i+=20){	dc.MoveTo(i,45);
	dc.LineTo(i,65);}
    
	if(kol==9){hod=2;}
	if(kol==8){hod=3;}
    if(kol==7){hod=2;}
	if(kol==6){hod=1;}
    if(kol==5){hod=1;}
	if(kol==4){hod=3;}
	if(kol==3){hod=2;}
	if(kol==2){hod=1;}
	
	calc();

		GetDlgItem(ID_COMP)->EnableWindow(FALSE);
			GetDlgItem(IDC_1)->EnableWindow(TRUE);
				GetDlgItem(IDC_2)->EnableWindow(TRUE);
					GetDlgItem(IDC_3)->EnableWindow(TRUE);
}

void CStiksDlg::calc()
{CClientDC dc(this);
	CPen pen1(PS_SOLID,10,RGB(255,0,0));
	dc.SelectObject(&pen1);
int i;

kol=kol-hod;
if(kol==9 )for(i=45;i<221;i+=20){	dc.MoveTo(i,45);
	dc.LineTo(i,65);}
if(kol==8)for(i=45;i<201;i+=20){	dc.MoveTo(i,45);

	dc.LineTo(i,65);}
if(kol==7)for(i=45;i<181;i+=20){	dc.MoveTo(i,45);
	dc.LineTo(i,65);}
if(kol==6)for(i=45;i<161;i+=20){	dc.MoveTo(i,45);
	dc.LineTo(i,65);}
if(kol==5)for(i=45;i<141;i+=20){	dc.MoveTo(i,45);
	dc.LineTo(i,65);}
if(kol==4)for(i=45;i<121;i+=20){	dc.MoveTo(i,45);
	dc.LineTo(i,65);}
if(kol==3)for(i=45;i<101;i+=20){	dc.MoveTo(i,45);
	dc.LineTo(i,65);}
if(kol==2)for(i=45;i<81;i+=20){	dc.MoveTo(i,45);
	dc.LineTo(i,65);}
if(kol==1)for(i=45;i<81;i+=20){	dc.MoveTo(i,45);
	dc.LineTo(i,65);
	MessageBox("вы проиграли");}




}
