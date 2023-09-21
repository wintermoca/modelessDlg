# MFC-대화상자기반 모달리스 다이얼로그   
### 개발환경 : visual studio 2022
### 주요 내용
MFC-대화상자기반 구조 
 
파일이름: FC

클래스 : CAboutDlg, CFCApp, CFCDlg, AddClass

## 주요 코드
 
modeless 버튼에 기능을 부여하는 코드입니다.

![스크린샷 2023-09-21 111354](https://github.com/wintermoca/modelessDlg/assets/102385398/c0d428d6-1eaf-4659-8f15-461bd15b6349)


AddClass* p = new AddClass();: 
AddClass 클래스의 객체 포인터 p를 동적으로 생성합니다. 이 객체는 새로운 다이얼로그를 나타내기 위해 사용됩니다.

p->Create(IDD_SON);: 
Create 함수를 호출하여 다이얼로그를 생성합니다. IDD_SON은 다이얼로그 리소스 템플릿의 식별자(또는 ID)입니다. 
이를 통해 어떤 다이얼로그 템플릿을 기반으로 다이얼로그를 만들 것인지를 지정합니다. 따라서 IDD_SON에 해당하는 다이얼로그 템플릿이 사용됩니다.

p->ShowWindow(SW_SHOW);: 
ShowWindow 함수를 호출하여 생성한 다이얼로그를 화면에 표시합니다. SW_SHOW는 다이얼로그를 보이게 하는 명령입니다.



Add 버튼에 기능을 부여하는 코드입니다.

![스크린샷 2023-09-21 111408](https://github.com/wintermoca/modelessDlg/assets/102385398/15f80510-b545-4974-ac9a-2ca0d59439d6)

CFCDlg* p = (CFCDlg*)GetParent();:
 현재 다이얼로그(Dialog) 상에서 부모 다이얼로그인 CFCDlg 클래스의 포인터인 p를 가져옵니다.

UpdateData(true);: 
다이얼로그 상에서 데이터를 컨트롤로부터 변수로 업데이트하는 역할을 합니다. true를 전달하여 컨트롤에서 변수로 데이터를 업데이트합니다.

p->m_List.AddString(m_Str);: 
부모 다이얼로그의 CFCDlg 클래스의 m_List 멤버 변수, 즉 리스트 컨트롤에 문자열을 추가합니다. m_Str은 현재 다이얼로그(Dialog)의 문자열 변수입니다. 
이 코드는 선택된 다이얼로그의 m_Str에서 문자열을 가져와 부모 다이얼로그의 리스트 컨트롤에 추가합니다.
