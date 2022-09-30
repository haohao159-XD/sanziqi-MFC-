// example_1.cpp : 定义应用程序的入口点。
//
#include "gameIO.h"
#include "framework.h"
#include "WindowsProject2.h"
#include <iostream>
#include <string>
char arr[ROW][COL];
// PLAYERNOW;
bool PLAYERNOW = false;
// 全局应用程序实例
std::string strr0= "当前轮到:";
std::string player1 = "一号玩家";
std::string player2 = "二号玩家";

CMyApp theApp;
std::string strr = "恭喜你赢了";
BOOL CMyApp::InitInstance()
{
	// 弹出主窗口对话框
	CMainDialog dlg;
	m_pMainWnd = &dlg;
	dlg.DoModal();
	return FALSE;
}

CMainDialog::CMainDialog(CWnd* pParentWnd) :CDialog(CMainDialog::IDD, pParentWnd)
{
}
CMainDialog::~CMainDialog(void)
{
}

BEGIN_MESSAGE_MAP(CMainDialog, CDialog)
	ON_BN_CLICKED(IDB_OK, OnOK)		// 用户单击"确定"按钮
	ON_BN_CLICKED(IDB_CANCEL, OnNOK)		// 用户单击"取消"按钮
	ON_BN_CLICKED(IDC_BUTTON_SANZIQI1, &CMainDialog::OnBnClickedButtonSanziqi1)
	ON_BN_CLICKED(IDC_BUTTON_SANZIQI2, &CMainDialog::OnBnClickedButtonSanziqi2)
	ON_BN_CLICKED(IDC_BUTTON_SANZIQI3, &CMainDialog::OnBnClickedButtonSanziqi3)
	ON_BN_CLICKED(IDC_BUTTON_SANZIQI4, &CMainDialog::OnBnClickedButtonSanziqi4)
	ON_BN_CLICKED(IDC_BUTTON_SANZIQI5, &CMainDialog::OnBnClickedButtonSanziqi5)
	ON_BN_CLICKED(IDC_BUTTON_SANZIQI6, &CMainDialog::OnBnClickedButtonSanziqi6)
	ON_BN_CLICKED(IDC_BUTTON_SANZIQI7, &CMainDialog::OnBnClickedButtonSanziqi7)
	ON_BN_CLICKED(IDC_BUTTON_SANZIQI8, &CMainDialog::OnBnClickedButtonSanziqi8)
	ON_BN_CLICKED(IDC_BUTTON_SANZIQI9, &CMainDialog::OnBnClickedButtonSanziqi9)
	ON_BN_CLICKED(IDB_initializeGAME, &CMainDialog::OnBnClickedinitializegame)
END_MESSAGE_MAP()

// 消息处理程序
BOOL CMainDialog::OnInitDialog()		// 初始化对话框
{
	CDialog::OnInitDialog();
	return TRUE;
}

void CMainDialog::OnOK()	// 用户点击“确定”按钮
{
	for (int i1 = 0; i1 < ROW; i1++)
	{
		for (int i2 = 0; i2 < COL; i2++)
		{
			arr[i1][i2] = 0;
		}
	}
	int temp1[] = { IDC_BUTTON_SANZIQI1,IDC_BUTTON_SANZIQI2,IDC_BUTTON_SANZIQI3,IDC_BUTTON_SANZIQI4,IDC_BUTTON_SANZIQI5,IDC_BUTTON_SANZIQI6,IDC_BUTTON_SANZIQI7,IDC_BUTTON_SANZIQI8,IDC_BUTTON_SANZIQI9 };

	PLAYERNOW = false;
	for (int i3 = 0; i3 < 9; i3++)
	{
		GetDlgItem(temp1[i3])->SetWindowText(TEXT(""));

	}
	showPLAYERNOW(PLAYERNOW);
}

void CMainDialog::OnNOK()	// 用户点击“取消”按钮
{
	//MessageBox("Bye World！", "Bye", MB_OKCANCEL);
	//InitializeGame(&PLAYERNOW);
	exit(0);//
}

void CMainDialog::OnCancel()
{
	CDialog::OnCancel();
}
void CMainDialog::PostNcDestroy()
{
	CDialog::PostNcDestroy();
}



void CMainDialog::OnBnClickedButtonSanziqi1()
{
	//::MessageBox(NULL, "Hello World！", "提示", MB_OK);
//	printf("%d", !PLAYERNOW);

	if(PLAYERIO(!PLAYERNOW,arr, 0, 0))
	{
		GetDlgItem(IDC_BUTTON_SANZIQI1)->SetWindowText(TEXT("X"));//
	}
	else 
	{
		GetDlgItem(IDC_BUTTON_SANZIQI1)->SetWindowText(TEXT("O"));

	}
	
	int iswin=isWIN(PLAYERNOW, arr);
	showPLAYERNOW(!PLAYERNOW);

	if (iswin == 1)
	{
		std::string str1;
		if (PLAYERNOW == false)
			str1 = "player1";
		else str1 = "player2";
		str1 = str1 + strr;
		MessageBox(str1.c_str());
	}
	if (iswin == 2)
	{
		MessageBox("平局");
	}
	PLAYERNOW = !PLAYERNOW;


	// TODO: 在此添加控件通知处理程序代码
}


void CMainDialog::OnBnClickedButtonSanziqi2()
{
	if (PLAYERIO(!PLAYERNOW, arr, 0, 1))
	{
		GetDlgItem(IDC_BUTTON_SANZIQI2)->SetWindowText(TEXT("X"));

	}
	else
	{
		GetDlgItem(IDC_BUTTON_SANZIQI2)->SetWindowText(TEXT("O"));

	}
	int iswin = isWIN(PLAYERNOW, arr);
	showPLAYERNOW(!PLAYERNOW);

	if (iswin == 1)
	{
		std::string str1;
		if (PLAYERNOW == false)
			str1 = "player1";
		else str1 = "player2";
		str1 = str1 + strr;
		MessageBox(str1.c_str());
	}
	if (iswin == 2)
	{
		MessageBox("平局");
	}
	PLAYERNOW = !PLAYERNOW;


	// TODO: 在此添加控件通知处理程序代码
}


void CMainDialog::OnBnClickedButtonSanziqi3()
{
	if (PLAYERIO(!PLAYERNOW, arr,  0, 2))
	{
		GetDlgItem(IDC_BUTTON_SANZIQI3)->SetWindowText(TEXT("X"));

	}
	else
	{
	GetDlgItem(IDC_BUTTON_SANZIQI3)->SetWindowText(TEXT("O"));

	}
	int iswin = isWIN(PLAYERNOW, arr);
	showPLAYERNOW(!PLAYERNOW);

	if (iswin == 1)
	{
		std::string str1;
		if (PLAYERNOW == false)
			str1 = "player1";
		else str1 = "player2";
		str1 = str1 + strr;
		MessageBox(str1.c_str());
	}
	if (iswin == 2)
	{
		MessageBox("平局");
	}
	PLAYERNOW = !PLAYERNOW;

	// TODO: 在此添加控件通知处理程序代码
}


void CMainDialog::OnBnClickedButtonSanziqi4()
{
	if (PLAYERIO(!PLAYERNOW, arr,  1, 0))
	{
		GetDlgItem(IDC_BUTTON_SANZIQI4)->SetWindowText(TEXT("X"));

	}
	else
	{
	GetDlgItem(IDC_BUTTON_SANZIQI4)->SetWindowText(TEXT("O"));

	}
	int iswin = isWIN(PLAYERNOW, arr);
	showPLAYERNOW(!PLAYERNOW);

	if (iswin == 1)
	{
		std::string str1;
		if (PLAYERNOW == false)
			str1 = "player1";
		else str1 = "player2";
		str1 = str1 + strr;
		MessageBox(str1.c_str());
	}
	if (iswin == 2)
	{
		MessageBox("平局");
	}
	PLAYERNOW = !PLAYERNOW;

	// TODO: 在此添加控件通知处理程序代码
}


void CMainDialog::OnBnClickedButtonSanziqi5()
{
	if (PLAYERIO(!PLAYERNOW, arr, 1, 1))
	{
		GetDlgItem(IDC_BUTTON_SANZIQI5)->SetWindowText(TEXT("X"));

	}
	else
	{
	GetDlgItem(IDC_BUTTON_SANZIQI5)->SetWindowText(TEXT("O"));

	}
	int iswin = isWIN(PLAYERNOW, arr);
	showPLAYERNOW(!PLAYERNOW);

	if (iswin == 1)
	{
		std::string str1;
		if (PLAYERNOW == false)
			str1 = "player1";
		else str1 = "player2";
		str1 = str1 + strr;
		MessageBox(str1.c_str());
	}
	if (iswin == 2)
	{
		MessageBox("平局");
	}
	PLAYERNOW = !PLAYERNOW;

	// TODO: 在此添加控件通知处理程序代码
}


void CMainDialog::OnBnClickedButtonSanziqi6()
{
	if (PLAYERIO(!PLAYERNOW, arr,  1, 2))
	{
		GetDlgItem(IDC_BUTTON_SANZIQI6)->SetWindowText(TEXT("X"));

	}
	else
	{
	GetDlgItem(IDC_BUTTON_SANZIQI6)->SetWindowText(TEXT("O"));

	}
	int iswin = isWIN(PLAYERNOW, arr);
	showPLAYERNOW(!PLAYERNOW);

	if (iswin == 1)
	{
		std::string str1;
		if (PLAYERNOW == false)
			str1 = "player1";
		else str1 = "player2";
		str1 = str1 + strr;
		MessageBox(str1.c_str());
	}
	if (iswin == 2)
	{
		MessageBox("平局");
	}
	PLAYERNOW = !PLAYERNOW;

	// TODO: 在此添加控件通知处理程序代码
}


void CMainDialog::OnBnClickedButtonSanziqi7()
{
	if (PLAYERIO(!PLAYERNOW, arr, 2, 0))
	{
		GetDlgItem(IDC_BUTTON_SANZIQI7)->SetWindowText(TEXT("X"));

	}
	else
	{
	GetDlgItem(IDC_BUTTON_SANZIQI7)->SetWindowText(TEXT("O"));

	}
	int iswin = isWIN(PLAYERNOW, arr);
	showPLAYERNOW(!PLAYERNOW);

	if (iswin == 1)
	{
		std::string str1;
		if (PLAYERNOW == false)
			str1 = "player1";
		else str1 = "player2";
		str1 = str1 + strr;
		MessageBox(str1.c_str());
	}
	if (iswin == 2)
	{
		MessageBox("平局");
	}
	PLAYERNOW = !PLAYERNOW;

	// TODO: 在此添加控件通知处理程序代码
}


void CMainDialog::OnBnClickedButtonSanziqi8()
{
	if (PLAYERIO(!PLAYERNOW, arr, 2, 1))
	{
		GetDlgItem(IDC_BUTTON_SANZIQI8)->SetWindowText(TEXT("X"));

	}
	else
	{
	GetDlgItem(IDC_BUTTON_SANZIQI8)->SetWindowText(TEXT("O"));

	}
	int iswin = isWIN(PLAYERNOW, arr);
	showPLAYERNOW(!PLAYERNOW);

	if (iswin == 1)
	{
		std::string str1;
		if (PLAYERNOW == false)
			str1 = "player1";
		else str1 = "player2";
		str1 = str1 + strr;
		MessageBox(str1.c_str());
	}
	if (iswin == 2)
	{
		MessageBox("平局");
	}
	PLAYERNOW = !PLAYERNOW;

	// TODO: 在此添加控件通知处理程序代码
}


void CMainDialog::OnBnClickedButtonSanziqi9()
{
	if (PLAYERIO(!PLAYERNOW, arr, 2, 2))
	{
		GetDlgItem(IDC_BUTTON_SANZIQI9)->SetWindowText(TEXT("X"));

	}
	else
	{
	GetDlgItem(IDC_BUTTON_SANZIQI9)->SetWindowText(TEXT("O"));

	}
	int iswin = isWIN(PLAYERNOW, arr);
	showPLAYERNOW(!PLAYERNOW);

	if (iswin == 1)
	{
		std::string str1;
		if (PLAYERNOW == false)
			str1 = "player1";
		else str1 = "player2";
		str1 = str1 + strr;
		MessageBox(str1.c_str());
	}
	if (iswin == 2)
	{
		MessageBox("平局");
	}
	PLAYERNOW = !PLAYERNOW;

	// TODO: 在此添加控件通知处理程序代码
}




void CMainDialog::OnBnClickedinitializegame()
{
	// TODO: 在此添加控件通知处理程序代码
	for (int i1 = 0; i1 < ROW; i1++)
	{
		for (int i2 = 0; i2 < COL; i2++)
		{
			arr[i1][i2] =0;
		}
	}
	int temp1[] = {IDC_BUTTON_SANZIQI1,IDC_BUTTON_SANZIQI2,IDC_BUTTON_SANZIQI3,IDC_BUTTON_SANZIQI4,IDC_BUTTON_SANZIQI5,IDC_BUTTON_SANZIQI6,IDC_BUTTON_SANZIQI7,IDC_BUTTON_SANZIQI8,IDC_BUTTON_SANZIQI9};
	
	PLAYERNOW = false;
	for (int i3 = 0; i3 < 9; i3++)
	{
		GetDlgItem(temp1[i3])->SetWindowText(TEXT(""));

	}
	showPLAYERNOW(PLAYERNOW);

}

void CMainDialog::showPLAYERNOW(bool playernow)

{ 
	std::string str0_;
	if (playernow == false)
	{
		str0_ = strr0 + player1;
	}
	else if (playernow == true)
	{
		str0_ = strr0 + player2;

	}
	GetDlgItem(IDC_STATIC_PLAYERNOWBOOL)->SetWindowText(str0_.c_str());//qwq

}

