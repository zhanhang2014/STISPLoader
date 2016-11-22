
// STISPLoaderDlg.h : 头文件
//

#pragma once
#include "afxwin.h"


// CSTISPLoaderDlg 对话框
class CSTISPLoaderDlg : public CDialogEx
{
// 构造
public:
	CSTISPLoaderDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_STISPLOADER_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnCbnSelchangeCombo1();
	CComboBox CParity;
	CComboBox CBaudRate;
	afx_msg void OnCbnSelchangeCombo2();
	afx_msg void OnCbnSelchangeCombo3();
	CComboBox CDataBits;
	CComboBox CStopBits;
	afx_msg void OnCbnSelchangeCombo4();
	afx_msg void OnBnClickedFileselect();
};
