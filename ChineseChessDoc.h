// ChineseChessDoc.h : CChineseChessDoc ��Ľӿ�
//


#pragma once


class CChineseChessDoc : public CDocument
{
protected: // �������л�����
	CChineseChessDoc();
	DECLARE_DYNCREATE(CChineseChessDoc)

// ����
public:

// ����
public:

// ��д
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);

// ʵ��
public:
	virtual ~CChineseChessDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};


