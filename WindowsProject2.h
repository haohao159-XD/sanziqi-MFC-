// example_1.h : 定义应用程序的入口点类。
//
#pragma once

#include <afxwin.h>
#include "resource.h"
#include "gameIO.h"
extern char arr[ROW][COL];
extern bool PLAYERNOW;

class CMyApp :public CWinApp
{
public:
    BOOL InitInstance();
};

class CMainDialog :public CDialog
{
public:
    CMainDialog(CWnd* pParentWnd = NULL);
    ~CMainDialog();
    // 对话框数据
    enum {
        IDD = IDD_MAIN,
    };
protected:	// 消息响应 自定义
    afx_msg void OnOK();
    afx_msg void OnNOK();
protected:	// 消息响应 继承
    virtual BOOL OnInitDialog();
    virtual void OnCancel();
    virtual void PostNcDestroy();
    DECLARE_MESSAGE_MAP()
public:

    afx_msg void OnBnClickedButtonSanziqi1();
    afx_msg void OnBnClickedButtonSanziqi2();
    afx_msg void OnBnClickedButtonSanziqi3();
    afx_msg void OnBnClickedButtonSanziqi4();
    afx_msg void OnBnClickedButtonSanziqi5();
    afx_msg void OnBnClickedButtonSanziqi6();
    afx_msg void OnBnClickedButtonSanziqi7();
    afx_msg void OnBnClickedButtonSanziqi8();
    afx_msg void OnBnClickedButtonSanziqi9();
    afx_msg void OnBnClickedinitializegame();
    afx_msg void showPLAYERNOW(bool playernow);

};