
// PC Clearing Tool.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CPCClearingToolApp: 
// �йش����ʵ�֣������ PC Clearing Tool.cpp
//

class CPCClearingToolApp : public CWinApp
{
public:
	CPCClearingToolApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CPCClearingToolApp theApp;