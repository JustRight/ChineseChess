// ChineseChessDoc.cpp : CChineseChessDoc ���ʵ��
//

#include "stdafx.h"
#include "ChineseChess.h"

#include "ChineseChessDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CChineseChessDoc

IMPLEMENT_DYNCREATE(CChineseChessDoc, CDocument)

BEGIN_MESSAGE_MAP(CChineseChessDoc, CDocument)
END_MESSAGE_MAP()


// CChineseChessDoc ����/����

CChineseChessDoc::CChineseChessDoc()
{
	// TODO: �ڴ����һ���Թ������

}

CChineseChessDoc::~CChineseChessDoc()
{
}

BOOL CChineseChessDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: �ڴ�������³�ʼ������
	// (SDI �ĵ������ø��ĵ�)

	return TRUE;
}




// CChineseChessDoc ���л�

void CChineseChessDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: �ڴ���Ӵ洢����
	}
	else
	{
		// TODO: �ڴ���Ӽ��ش���
	}
}


// CChineseChessDoc ���

#ifdef _DEBUG
void CChineseChessDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CChineseChessDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CChineseChessDoc ����
