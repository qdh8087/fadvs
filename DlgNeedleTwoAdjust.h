#include "resource.h"
#include "imgmarkgeoset.h"
#include "JogButton.h"
#pragma once


// CDlgNeedleTwoAdjust dialog

class CDlgNeedleTwoAdjust : public CDialog
{
	DECLARE_DYNAMIC(CDlgNeedleTwoAdjust)

public:
	CDlgNeedleTwoAdjust(CWnd* pParent = NULL);   // standard constructor
	virtual ~CDlgNeedleTwoAdjust();

// Dialog Data
	enum { IDD = IDD_DLG_NEEDLETWO_ADJUST };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	CJogButton m_adjustButton[12];
	CImgMarkGeoSet m_picture;
	virtual BOOL OnInitDialog();
	CRect m_rectModelWin;
	CRect m_rectROI;
	int m_nImageWidth;
	int m_nImageHeight;
	int nCount;
	double dCenterX,dCenterY;
	bool FindModelCenter();
	void AutoNeedleAdjust();
	bool bAdjust;
	bool bOver;
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnNMCustomdrawSliderNeedleSpeed(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnBnClickedBtnTest();
	void EnableButton(bool bEn);
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
};
