#pragma once
#include "afxdialogex.h"


// AddClass 대화 상자

class AddClass : public CDialogEx
{
	DECLARE_DYNAMIC(AddClass)

public:
	AddClass(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~AddClass();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_SON };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	CString m_Str;
};
