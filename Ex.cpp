#include <afxwin.h>
#include "resource.h"

class CEx : public CWinApp {
public:
	BOOL InitInstance();
};
class CExDlg : public CDialog {
public:
	enum { IDD = IDD_DIALOG1 };
	CExDlg() : CDialog(CExDlg::IDD) {};
	~CExDlg() {};
	DECLARE_MESSAGE_MAP()
	afx_msg void OnBnClickedButton1();
};
BOOL CEx::InitInstance() {
	CExDlg myDlg;
	m_pMainWnd = &myDlg;
	myDlg.DoModal();
	return TRUE;
}
CEx MyApp; BEGIN_MESSAGE_MAP(CExDlg, CDialog)
ON_BN_CLICKED(IDC_BUTTON1, &CExDlg::OnBnClickedButton1)
END_MESSAGE_MAP()


void CExDlg::OnBnClickedButton1()
{
	MessageBox(L"I love ANU");
}
