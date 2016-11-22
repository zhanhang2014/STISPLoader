/******************** (C) COPYRIGHT 2016 ********************
* File Name          : Image.h
* Author             : Hang
* Version            : v0.0.0
* Date               : 
* Description        : Defines the CSTImage class interface
********************************************************************************
* More comments
*******************************************************************************/

#ifndef _IMAGE_H_
#define _IMAGE_H_

class CSTImage : public CObject
{
private:
	//UNICODE	char		m_LastError[1000];
	CString     m_LastError;
	BYTE		m_bAlternate;
	CPtrArray	*m_pElements;
	BOOL		m_ImageState;
	BOOL		m_bNamed;
	//UNICODE	char		m_Name[255];
	CString m_Name;

	BOOL		LoadS19(CString pFilePath);
	BOOL		LoadHEX(CString pFilePath);
	BOOL		LoadBIN(CString pFilePath);

	BOOL		SaveS19(CString pFilePath);
	BOOL		SaveHEX(CString pFilePath);

	void		LDisplayError(CString Str)
	{ //UNICODE lstrcpy(m_LastError, Str);
		m_LastError = Str;
	}
	BOOL        ExistsElementsAtAddress(DWORD Address);

	void		CompactElements();
public:
	CSTImage(CSTImage *pSource);
	CSTImage(BYTE bAlternate, BOOL bNamed, PSTR Name);
	CSTImage(PMAPPING pMapping, BOOL bNamed, PSTR Name);
	CSTImage(BYTE bAlternate, CString pFilePath, BOOL bNamed, PSTR Name);
	virtual ~CSTImage();

	BOOL	DumpToFile(CString pFilePath);
	BYTE	GetAlternate() { return m_bAlternate; }
	BOOL	GetImageState() { return m_ImageState; }
	BOOL	GetName(CString Name) {
		if (m_bNamed)
			//lstrcpy(Name, m_Name);
			Name = m_Name;
		return m_bNamed;
	}
	void    SetName(CString Name) { //lstrcpy(m_Name, Name);
		Name = m_Name;
		m_bNamed = TRUE;
	}
	BOOL	GetBuffer(DWORD dwAddress, DWORD dwSize, PBYTE pBuffer);

	DWORD	GetNbElements() { return m_pElements->GetSize(); }
	BOOL	SetImageElement(DWORD dwRank, BOOL bInsert, IMAGEELEMENT Element);
	BOOL	GetImageElement(DWORD dwRank, PIMAGEELEMENT pElement);
	BOOL	FilterImageForOperation(PMAPPING pMapping, DWORD Operation, BOOL bTruncateLeadFF);
	BOOL	DestroyImageElement(DWORD dwRank);
};

#endif

/******************* (C) COPYRIGHT 2016******/
