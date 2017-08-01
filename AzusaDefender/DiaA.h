#pragma once
#include "afxcmn.h"
#include "afxwin.h"
#include <vector>
using std::vector;


// CDiaA 对话框

class CDiaA : public CDialogEx
{
	DECLARE_DYNAMIC(CDiaA)

public:
	CDiaA(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CDiaA();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();
	INT GetCpuUserate();
	DWORD GetMemUserate();
	BOOL ClearUpMem();
	CProgressCtrl m_ctrlProgress;
	CStatic m_ctrlStatic;
	CProgressCtrl m_ctrlProgress2;
	CStatic m_ctrlStatic2;
	afx_msg void OnBnClickedButton1();
	void CreateMonitorThread();
	static DWORD WINAPI MonitorThread(LPVOID lpParam);
	afx_msg void OnBnClickedButton2();
	BOOL m_boolCheck;
	BOOL m_boolCheck2;
	BOOL m_boolCheck3;
	vector<CString> m_vecPath;
	vector<CString> m_vecFile;
	CListBox m_ctrlListBox;
	afx_msg void OnBnClickedButton3();
	void TraverseFile(TCHAR szPath[MAX_PATH], vector<CString> &vecPath);
	CString ByteConversionGBMBKB(__int64 KSize);
};