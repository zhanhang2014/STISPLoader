/******************** (C) COPYRIGHT 2016 ********************
* File Name          : FilesInc.h
* Author             : Hang
* Version            : v0.0.0
* Date               : 
* Description        : Defines the struct types used by Files DLL
********************************************************************************
* More comment
*******************************************************************************/

#ifndef FILES_INC_H
#define FILES_INC_H

#define OPERATION_DETACH	0
#define OPERATION_RETURN	1
#define OPERATION_UPLOAD	2
#define OPERATION_ERASE		3
#define	OPERATION_DNLOAD	4


#ifndef TYPE_STATUS
typedef struct
{
	UCHAR bStatus;
	UCHAR bwPollTimeout[3];
	UCHAR bState;
	UCHAR iString;
}	STATUS, *PSTATUS;
#endif

#define BIT_READABLE	1
#define BIT_ERASABLE	2
#define BIT_WRITEABLE	4

typedef struct {
	char*       Name;
	DWORD		dwStartAddress;
	DWORD		dwAliasedAddress;
	DWORD		dwSectorIndex;
	DWORD		dwSectorSize;
	BYTE		bSectorType;
	BOOL		UseForOperation;
	BOOL        UseForErase;
	BOOL        UseForUpload;
	BOOL        UseForWriteProtect;
} MAPPINGSECTOR, *PMAPPINGSECTOR;

typedef struct {
	BYTE			nAlternate;
	char			Name[MAX_PATH];
	DWORD			NbSectors;
	PMAPPINGSECTOR	pSectors;
} MAPPING, *PMAPPING;

typedef struct {
	DWORD		dwAddress;
	DWORD		dwDataLength;
	PBYTE		Data;
} IMAGEELEMENT, *PIMAGEELEMENT;


#endif

/******************* (C) COPYRIGHT 2016 *****END OF FILE******/
