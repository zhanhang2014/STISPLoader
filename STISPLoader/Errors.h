/******************** (C) COPYRIGHT 2016 ********************
* File Name          : Errors.h
* Author             : Hang
* Version            : v0.0.0
* Date               : 
* Description        : Defines the files Input/Output error codes
********************************************************************************
* More comments
*******************************************************************************/

#ifndef ERRORS_H
#define ERRORS_H

#define FILES_ERROR_OFFSET				(0x12340000+0x6000)

#define FILES_NOERROR					(0x12340000+0x0000)
#define FILES_BADSUFFIX				    (FILES_ERROR_OFFSET+0x0002)
#define FILES_UNABLETOOPENFILE			(FILES_ERROR_OFFSET+0x0003)
#define FILES_UNABLETOOPENTEMPFILE		(FILES_ERROR_OFFSET+0x0004)
#define FILES_BADFORMAT				    (FILES_ERROR_OFFSET+0x0005)
#define FILES_BADADDRESSRANGE			(FILES_ERROR_OFFSET+0x0006)
#define FILES_BADPARAMETER				(FILES_ERROR_OFFSET+0x0008)
#define FILES_UNEXPECTEDERROR			(FILES_ERROR_OFFSET+0x000A)	
#define FILES_FILEGENERALERROR			(FILES_ERROR_OFFSET+0x000D)

#define STPRT_ERROR_OFFSET				(0x12340000+0x5000)

#define STPRT_NOERROR					(0x12340000)
#define STPRT_UNABLETOLAUNCHTHREAD	(STPRT_ERROR_OFFSET+0x0001)
#define STPRT_ALREADYRUNNING			(STPRT_ERROR_OFFSET+0x0007)
#define STPRT_BADPARAMETER				(STPRT_ERROR_OFFSET+0x0008)
#define STPRT_BADFIRMWARESTATEMACHINE	(STPRT_ERROR_OFFSET+0x0009)	
#define STPRT_UNEXPECTEDERROR			(STPRT_ERROR_OFFSET+0x000A)	
#define STPRT_ERROR					(STPRT_ERROR_OFFSET+0x000B)	
#define STPRT_RETRYERROR					(STPRT_ERROR_OFFSET+0x000C)	
#define STPRT_UNSUPPORTEDFEATURE		    (STPRT_ERROR_OFFSET+0x000D)	

#endif

/******************* (C) COPYRIGHT 2016 *****END OF FILE******/
