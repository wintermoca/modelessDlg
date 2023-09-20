// AddClass.cpp: 구현 파일
//

#include "pch.h"
#include "FC.h"
#include "afxdialogex.h"
#include "AddClass.h"


// AddClass 대화 상자

IMPLEMENT_DYNAMIC(AddClass, CDialogEx)

AddClass::AddClass(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_SON, pParent)
	, m_Str(_T(""))
{

}

AddClass::~AddClass()
{
}

void AddClass::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_Str);
}


BEGIN_MESSAGE_MAP(AddClass, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &AddClass::OnBnClickedButton1)
END_MESSAGE_MAP()


// AddClass 메시지 처리기

#include "FCDlg.h"//(프로젝트 이름) + Dlg.h
void AddClass::OnBnClickedButton1()
{
	CFCDlg* p = (CFCDlg*)GetParent(); //C + (프로젝트 이름) + Dlg  
	UpdateData(true);
	p->m_List.AddString(m_Str);
	//Add 버튼에 기능을 부여하는 코드
}
