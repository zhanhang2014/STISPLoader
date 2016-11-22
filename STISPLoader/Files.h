/******************** (C) COPYRIGHT 2016 ********************
* File Name          : Files.h
* Author             : Hang
* Version            : v0.0.0
* Date               : 
* Description        : Defines the Files DLL interface
********************************************************************************
* More comments
*******************************************************************************/

#include "FilesInc.h"
#include "Image.h"
#include "Errors.h"


extern "C" DWORD EXPORT FILES_OpenExistingFile(PSTR pPathFile, PHANDLE phFile, PWORD pVid, PWORD pPid, PWORD pBcd, PBYTE pNbImages);
extern "C" DWORD EXPORT FILES_CreateNewFile(PSTR pPathFile, PHANDLE phFile, WORD Vid, WORD Pid, WORD Bcd);
extern "C" DWORD EXPORT FILES_CloseFile(HANDLE hFile);

extern "C" DWORD EXPORT FILES_AppendImageToFile(HANDLE hFile, HANDLE Image);
extern "C" DWORD EXPORT FILES_ReadImageFromFile(HANDLE hFile, int Rank, PHANDLE pImage);

extern "C" DWORD EXPORT FILES_ImageFromFile(PSTR pPathFile, PHANDLE pImage, BYTE nAlternate);
extern "C" DWORD EXPORT FILES_ImageToFile(PSTR pPathFile, HANDLE Image);

extern "C" DWORD EXPORT FILES_CreateImage(PHANDLE pHandle, BYTE nAlternate);
extern "C" DWORD EXPORT FILES_CreateImageFromMapping(PHANDLE pHandle, PMAPPING pMapping);
extern "C" DWORD EXPORT FILES_DuplicateImage(HANDLE hSource, PHANDLE pDest);

extern "C" DWORD EXPORT FILES_FilterImageForOperation(HANDLE Handle, PMAPPING pMapping, DWORD Operation, BOOL bTruncateLeadFFForUpgrade);
extern "C" DWORD EXPORT FILES_DestroyImageElement(HANDLE Handle, DWORD dwRank);
extern "C" DWORD EXPORT FILES_DestroyImage(PHANDLE pHandle);

extern "C" DWORD EXPORT FILES_GetImageAlternate(HANDLE Handle, PBYTE pAlternate);
extern "C" DWORD EXPORT FILES_GetImageNbElement(HANDLE Handle, PDWORD pNbElements);
extern "C" DWORD EXPORT FILES_GetImageName(HANDLE Handle, PSTR Name);
extern "C" DWORD EXPORT FILES_SetImageName(HANDLE Handle, PSTR Name);

extern "C" DWORD EXPORT FILES_SetImageElement(HANDLE Handle, DWORD dwRank, BOOL bInsert, IMAGEELEMENT Element);
extern "C" DWORD EXPORT FILES_GetImageElement(HANDLE Handle, DWORD dwRank, PIMAGEELEMENT pElement);
extern "C" DWORD EXPORT FILES_GetMemoryMapping(PSTR pPathFile, PWORD Size, PSTR MapName, PWORD PacketSize, PMAPPING pMapping, PBYTE PagesPerSector);



/******************* (C) COPYRIGHT 2016 *****END OF FILE******/
