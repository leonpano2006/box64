#if !(defined(GO) && defined(GOM) && defined(GO2) && defined(DATA))
#error meh!
#endif

//GO(cupsAddDest, 
//GO(cupsAddIntegerOption, 
GO(cupsAddOption, iFppip)
//GO(cupsAdminCreateWindowsPPD, 
//GO(cupsAdminExportSamba, 
//GO(cupsAdminGetServerSettings, 
//GO(cupsAdminSetServerSettings, 
//GO(cupsArrayAdd, 
//GO(_cupsArrayAddStrings, 
//GO(cupsArrayClear, 
//GO(cupsArrayCount, 
//GO(cupsArrayCurrent, 
//GO(cupsArrayDelete, 
//GO(cupsArrayDup, 
//GO(cupsArrayFind, 
//GO(cupsArrayFirst, 
//GO(cupsArrayGetIndex, 
//GO(cupsArrayGetInsert, 
//GO(cupsArrayIndex, 
//GO(cupsArrayInsert, 
//GO(cupsArrayLast, 
//GO(cupsArrayNew, 
//GO(cupsArrayNew2, 
//GO(cupsArrayNew3, 
//GO(_cupsArrayNewStrings, 
//GO(cupsArrayNext, 
//GO(cupsArrayPrev, 
//GO(cupsArrayRemove, 
//GO(cupsArrayRestore, 
//GO(cupsArraySave, 
//GO(cupsArrayUserData, 
//GO(cupsBackChannelRead, 
//GO(cupsBackChannelWrite, 
//GO(cupsBackendDeviceURI, 
//GO(cupsBackendReport, 
//GO(_cupsBufferGet, 
//GO(_cupsBufferRelease, 
//GO(cupsCancelDestJob, 
//GO(cupsCancelJob, 
//GO(cupsCancelJob2, 
//GO(_cupsCharmapFlush, 
//GO(cupsCharsetToUTF8, 
//GO(cupsCheckDestSupported, 
//GO(cupsCloseDestJob, 
//GO(_cupsCondBroadcast, 
//GO(_cupsCondInit, 
//GO(_cupsCondWait, 
//GO(_cupsConnect, 
//GO(cupsConnectDest, 
//GO(_cupsConvertOptions, 
GO(cupsCopyDest, iFpip)
//GO(cupsCopyDestConflicts, 
//GO(cupsCopyDestInfo, 
//GO(_cupsCreateDest, 
//GO(cupsCreateDestJob, 
GO(cupsCreateJob, iFpppip)
//DATA(_cups_debug_fd, 
//DATA(_cups_debug_level, 
//GO(cupsDirClose, 
//GO(cupsDirOpen, 
//GO(cupsDirRead, 
//GO(cupsDirRewind, 
//GO(cupsDoAuthentication, 
//GO(cupsDoFileRequest, 
//GO(cupsDoIORequest, 
//GO(cupsDoRequest, 
//GO(cupsEncodeOptions, 
//GO(cupsEncodeOptions2, 
//GO(_cupsEncodingName, 
//GO(cupsEncryption, 
GOM(cupsEnumDests, iFEuipuupp)
//GO(_cupsFileCheck, 
//GO(_cupsFileCheckFilter, 
//GO(cupsFileClose, 
//GO(cupsFileCompression, 
//GO(cupsFileEOF, 
//GO(cupsFileFind, 
//GO(cupsFileFlush, 
//GO(cupsFileGetChar, 
//GO(cupsFileGetConf, 
//GO(cupsFileGetLine, 
//GO(cupsFileGets, 
//GO(cupsFileLock, 
//GO(cupsFileNumber, 
//GO(cupsFileOpen, 
//GO(cupsFileOpenFd, 
//GO(_cupsFilePeekAhead, 
//GO(cupsFilePeekChar, 
//GO(cupsFilePrintf, 
//GO(cupsFilePutChar, 
//GO(cupsFilePutConf, 
//GO(cupsFilePuts, 
//GO(cupsFileRead, 
//GO(cupsFileRewind, 
//GO(cupsFileSeek, 
//GO(cupsFileStderr, 
//GO(cupsFileStdin, 
//GO(cupsFileStdout, 
//GO(cupsFileTell, 
//GO(cupsFileUnlock, 
//GO(cupsFileWrite, 
//GO(cupsFindDestDefault, 
//GO(cupsFindDestReady, 
//GO(cupsFindDestSupported, 
//GO(cupsFinishDestDocument, 
GO(cupsFinishDocument, iFpp)
GO(cupsFreeDestInfo, vFp)
GO(cupsFreeDests, vFip)
GO(cupsFreeJobs, vFip)
GO(cupsFreeOptions, vFip)
//GO(_cupsGet1284Values, 
GO(cupsGetClasses, iFp)
//GO(cupsGetConflicts, 
GO(cupsGetDefault, pFv)
GO(cupsGetDefault2, pFp)
GO(cupsGetDest, pFppip)
//GO(cupsGetDestMediaByIndex, 
GO(cupsGetDestMediaByName, iFppppup)
GO(cupsGetDestMediaBySize, iFpppiiup)
//GO(cupsGetDestMediaCount, 
//GO(cupsGetDestMediaDefault, 
//GO(_cupsGetDestResource, 
//GO(_cupsGetDests, 
GO(cupsGetDests, iFp)
GO(cupsGetDests2, iFpp)
//GO(cupsGetDestWithURI, 
//GO(cupsGetDevices, 
//GO(cupsGetFd, 
//GO(cupsGetFile, 
//GO(cupsGetIntegerOption, 
GO(cupsGetJobs, iFppii)
GO(cupsGetJobs2, iFpppii)
GO(cupsGetNamedDest, pFppp)
GO(cupsGetOption, pFpip)
//GO(_cupsGetPassword, 
GO(cupsGetPassword, pFp)
GO(cupsGetPassword2, pFpppp)
GO(cupsGetPPD, pFp)
GO(cupsGetPPD2, pFpp)
GO(cupsGetPPD3, iFppppL)
GO(cupsGetPrinters, iFp)
//GO(cupsGetResponse, 
GO(cupsGetServerPPD, pFpp)
//GO(_cupsGlobalLock, 
//GO(_cupsGlobals, 
//GO(_cupsGlobalUnlock, 
//GO(_cupsGSSServiceName, 
//GO(cupsHashData, 
//GO(cupsHashString, 
GO(cupsLangDefault, pFv)
GO(cupsLangEncoding, pFp)
GO(cupsLangFlush, vFv)
GO(cupsLangFree, vFp)
GO(cupsLangGet, pFp)
//GO(_cupsLangPrintError, 
//GO(_cupsLangPrintf, 
//GO(_cupsLangPrintFilter, 
//GO(_cupsLangPuts, 
//GO(_cupsLangString, 
GO(cupsLastError, iFv)
GO(cupsLastErrorString, pFv)
//GO(cupsLocalizeDestMedia, 
GO(cupsLocalizeDestOption, pFpppp)
GO(cupsLocalizeDestValue, pFppppp)
//GO(cupsMakeServerCredentials, 
GO(cupsMarkOptions, iFpip)
//GO(_cupsMessageFree, 
//GO(_cupsMessageLoad, 
//GO(_cupsMessageLookup, 
//GO(_cupsMessageNew, 
//GO(_cupsMutexInit, 
//GO(_cupsMutexLock, 
//GO(_cupsMutexUnlock, 
//GO(_cupsNextDelay, 
//GO(cupsNotifySubject, 
GO(cupsNotifyText, pFpp)
GO(cupsParseOptions, iFpip)
GO(cupsPrintFile, iFpppip)
GO(cupsPrintFile2, iFppppip)
GO(cupsPrintFiles, iFpippip)
GO(cupsPrintFiles2, iFppippip)
//GO(cupsPutFd, 
//GO(cupsPutFile, 
//GO(cupsReadResponseData, 
GO(cupsRemoveDest, iFppip)
GO(cupsRemoveOption, iFpip)
//GO(cupsResolveConflicts, 
//GO(_cupsRWInit, 
//GO(_cupsRWLockRead, 
//GO(_cupsRWLockWrite, 
//GO(_cupsRWUnlock, 
//GO(_cups_safe_vsnprintf, 
//GO(cupsSendRequest, 
GO(cupsServer, pFv)
//GO(cupsSetClientCertCB, 
//GO(cupsSetCredentials, 
GO(cupsSetDefaultDest, vFppip)
//GO(_cupsSetDefaults, 
//GO(cupsSetDests, 
//GO(cupsSetDests2, 
//GO(cupsSetEncryption, 
//GO(_cupsSetError, 
//GO(_cupsSetHTTPError, 
//GO(_cupsSetLocale, 
//GO(_cupsSetNegotiateAuthString, 
//GO(cupsSetPasswordCB, 
//GO(cupsSetPasswordCB2, 
//GO(cupsSetServer, 
//GO(cupsSetServerCertCB, 
//GO(cupsSetServerCredentials, 
//GO(cupsSetUser, 
//GO(cupsSetUserAgent, 
//GO(cupsSideChannelDoRequest, 
//GO(cupsSideChannelRead, 
//GO(cupsSideChannelSNMPGet, 
//GO(cupsSideChannelSNMPWalk, 
//GO(cupsSideChannelWrite, 
//GO(_cupsSNMPClose, 
//GO(_cupsSNMPCopyOID, 
//GO(_cupsSNMPDefaultCommunity, 
//GO(_cupsSNMPIsOID, 
//GO(_cupsSNMPIsOIDPrefixed, 
//GO(_cupsSNMPOIDToString, 
//GO(_cupsSNMPOpen, 
//GO(_cupsSNMPRead, 
//GO(_cupsSNMPSetDebug, 
//GO(_cupsSNMPStringToOID, 
//GO(_cupsSNMPWalk, 
//GO(_cupsSNMPWrite, 
//GO(cupsStartDestDocument, 
GO(cupsStartDocument, iFppippi)
//GO(_cupsStrAlloc, 
//GO(_cups_strcasecmp, 
//GO(_cups_strcpy, 
//GO(_cupsStrDate, 
//GO(_cupsStrFlush, 
//GO(_cupsStrFormatd, 
//GO(_cupsStrFree, 
//GO(_cups_strlcat, 
//GO(_cups_strlcpy, 
//GO(_cups_strncasecmp, 
//GO(_cupsStrRetain, 
//GO(_cupsStrScand, 
//GO(_cupsStrStatistics, 
//GO(cupsTempFd, 
//GO(cupsTempFile, 
//GO(cupsTempFile2, 
//GO(_cupsThreadCancel, 
//GO(_cupsThreadCreate, 
//GO(_cupsThreadDetach, 
//GO(_cupsThreadWait, 
//GO(cupsUser, 
//GO(cupsUserAgent, 
//GO(_cupsUserDefault, 
//GO(cupsUTF32ToUTF8, 
//GO(cupsUTF8ToCharset, 
//GO(cupsUTF8ToUTF32, 
//GO(cupsWriteRequestData, 

//GO(httpAcceptConnection, 
//GO(httpAddCredential, 
//GO(httpAddrAny, 
//GO(httpAddrClose, 
//GO(httpAddrConnect, 
//GO(httpAddrConnect2, 
//GO(httpAddrCopyList, 
//GO(httpAddrEqual, 
//GO(httpAddrFamily, 
//GO(httpAddrFreeList, 
//GO(httpAddrGetList, 
//GO(httpAddrLength, 
//GO(httpAddrListen, 
//GO(httpAddrLocalhost, 
//GO(httpAddrLookup, 
//GO(httpAddrPort, 
//GO(_httpAddrSetPort, 
//GO(httpAddrString, 
//GO(httpAssembleURI, 
//GO(httpAssembleURIf, 
//GO(httpAssembleUUID, 
GO(httpBlocking, vFpi)
//GO(httpCheck, 
//GO(httpClearCookie, 
//GO(httpClearFields, 
GO(httpClose, vFp)
//GO(httpCompareCredentials, 
//GO(httpConnect, 
GO(httpConnect2, pFpipiiiip)
GO(httpConnectEncrypt, pFpii)
//GO(httpCopyCredentials, 
//GO(_httpCreateCredentials, 
//GO(httpCredentialsAreValidForName, 
//GO(httpCredentialsGetExpiration, 
//GO(httpCredentialsGetTrust, 
//GO(httpCredentialsString, 
//GO(httpDecode64, 
//GO(httpDecode64_2, 
//GO(_httpDecodeURI, 
//GO(httpDelete, 
//GO(_httpDisconnect, 
//GO(httpEncode64, 
//GO(httpEncode64_2, 
//GO(_httpEncodeURI, 
//GO(httpEncryption, 
GO(httpError, iFp)
//GO(httpFieldValue, 
//GO(httpFlush, 
//GO(httpFlushWrite, 
//GO(_httpFreeCredentials, 
//GO(httpFreeCredentials, 
//GO(httpGet, 
//GO(httpGetActivity, 
//GO(httpGetAddress, 
//GO(httpGetAuthString, 
//GO(httpGetBlocking, 
//GO(httpGetContentEncoding, 
//GO(httpGetCookie, 
//GO(httpGetDateString, 
//GO(httpGetDateString2, 
//GO(httpGetDateTime, 
//GO(httpGetEncryption, 
//GO(httpGetExpect, 
//GO(httpGetFd, 
//GO(httpGetField, 
//GO(httpGetHostByName, 
//GO(httpGetHostname, 
//GO(httpGetKeepAlive, 
//GO(httpGetLength, 
//GO(httpGetLength2, 
//GO(httpGetPending, 
//GO(httpGetReady, 
//GO(httpGetRemaining, 
//GO(httpGets, 
//GO(httpGetState, 
//GO(httpGetStatus, 
//GO(httpGetSubField, 
//GO(httpGetSubField2, 
//GO(httpGetVersion, 
//GO(httpHead, 
//GO(httpInitialize, 
//GO(httpIsChunked, 
//GO(httpIsEncrypted, 
//GO(httpLoadCredentials, 
//GO(httpMD5, 
//GO(httpMD5Final, 
//GO(httpMD5String, 
//GO(httpOptions, 
//GO(httpPeek, 
//GO(httpPost, 
//GO(httpPrintf, 
//GO(httpPut, 
//GO(httpRead, 
//GO(httpRead2, 
//GO(httpReadRequest, 
//GO(httpReconnect, 
//GO(httpReconnect2, 
//GO(httpResolveHostname, 
//GO(_httpResolveURI, 
//GO(httpSaveCredentials, 
//GO(httpSeparate, 
//GO(httpSeparate2, 
//GO(httpSeparateURI, 
//GO(httpSetAuthString, 
//GO(httpSetCookie, 
//GO(httpSetCredentials, 
//GO(httpSetDefaultField, 
//GO(_httpSetDigestAuthString, 
//GO(httpSetExpect, 
//GO(httpSetField, 
//GO(httpSetKeepAlive, 
//GO(httpSetLength, 
//GO(httpSetTimeout, 
//GO(httpShutdown, 
//GO(httpStateString, 
//GO(_httpStatus, 
//GO(httpStatus, 
//GO(_httpTLSInitialize, 
//GO(_httpTLSPending, 
//GO(_httpTLSRead, 
//GO(_httpTLSSetCredentials, 
//GO(_httpTLSSetOptions, 
//GO(_httpTLSStart, 
//GO(_httpTLSStop, 
//GO(_httpTLSWrite, 
//GO(httpTrace, 
//GO(_httpUpdate, 
//GO(httpUpdate, 
//GO(httpURIStatusString, 
//GO(_httpWait, 
//GO(httpWait, 
//GO(httpWrite, 
//GO(httpWrite2, 
//GO(httpWriteResponse, 

//GO(ippAddBoolean, 
//GO(ippAddBooleans, 
//GO(ippAddCollection, 
//GO(ippAddCollections, 
//GO(ippAddDate, 
//GO(ippAddInteger, 
//GO(ippAddIntegers, 
//GO(ippAddOctetString, 
//GO(ippAddOutOfBand, 
//GO(ippAddRange, 
//GO(ippAddRanges, 
//GO(ippAddResolution, 
//GO(ippAddResolutions, 
//GO(ippAddSeparator, 
//GO(ippAddString, 
//GO(ippAddStringf, 
//GO(ippAddStringfv, 
//GO(ippAddStrings, 
//GO(ippAttributeString, 
//GO(ippContainsInteger, 
//GO(ippContainsString, 
//GO(ippCopyAttribute, 
//GO(ippCopyAttributes, 
//GO(ippCreateRequestedArray, 
//GO(ippDateToTime, 
//GO(ippDelete, 
//GO(ippDeleteAttribute, 
//GO(ippDeleteValues, 
//GO(ippEnumString, 
//GO(ippEnumValue, 
//GO(ippErrorString, 
//GO(ippErrorValue, 
//GO(ippFindAttribute, 
//GO(ippFindNextAttribute, 
//GO(_ippFindOption, 
//GO(ippFirstAttribute, 
//GO(ippGetBoolean, 
//GO(ippGetCollection, 
//GO(ippGetCount, 
//GO(ippGetDate, 
//GO(ippGetGroupTag, 
//GO(ippGetInteger, 
//GO(ippGetName, 
//GO(ippGetOctetString, 
//GO(ippGetOperation, 
//GO(ippGetRange, 
//GO(ippGetRequestId, 
//GO(ippGetResolution, 
//GO(ippGetState, 
//GO(ippGetStatusCode, 
//GO(ippGetString, 
//GO(ippGetValueTag, 
//GO(ippGetVersion, 
//GO(ippLength, 
//GO(ippNew, 
//GO(ippNewRequest, 
//GO(ippNewResponse, 
//GO(ippNextAttribute, 
//GO(ippOpString, 
//GO(ippOpValue, 
//GO(ippPort, 
//GO(ippRead, 
//GO(ippReadFile, 
//GO(ippReadIO, 
//GO(ippSetBoolean, 
//GO(ippSetCollection, 
//GO(ippSetDate, 
//GO(ippSetGroupTag, 
//GO(ippSetInteger, 
//GO(ippSetName, 
//GO(ippSetOctetString, 
//GO(ippSetOperation, 
//GO(ippSetPort, 
//GO(ippSetRange, 
//GO(ippSetRequestId, 
//GO(ippSetResolution, 
//GO(ippSetState, 
//GO(ippSetStatusCode, 
//GO(ippSetString, 
//GO(ippSetStringf, 
//GO(ippSetStringfv, 
//GO(ippSetValueTag, 
//GO(ippSetVersion, 
//GO(ippStateString, 
//GO(ippTagString, 
//GO(ippTagValue, 
//GO(ippTimeToDate, 
//GO(ippValidateAttribute, 
//GO(ippValidateAttributes, 
//GO(ippWrite, 
//GO(ippWriteFile, 
//GO(ippWriteIO, 

//GO(_ppdCacheCreateWithFile, 
//GO(_ppdCacheCreateWithPPD, 
//GO(_ppdCacheDestroy, 
//GO(_ppdCacheGetBin, 
//GO(_ppdCacheGetFinishingOptions, 
//GO(_ppdCacheGetFinishingValues, 
//GO(_ppdCacheGetInputSlot, 
//GO(_ppdCacheGetMediaType, 
//GO(_ppdCacheGetOutputBin, 
//GO(_ppdCacheGetPageSize, 
//GO(_ppdCacheGetSize, 
//GO(_ppdCacheGetSource, 
//GO(_ppdCacheGetType, 
//GO(_ppdCacheWriteFile, 
GO(ppdClose, vFp)
//GO(ppdCollect, 
//GO(ppdCollect2, 
//GO(ppdConflicts, 
//GO(_ppdCreateFromIPP, 
//GO(ppdEmit, 
//GO(ppdEmitAfterOrder, 
//GO(ppdEmitFd, 
//GO(ppdEmitJCL, 
//GO(ppdEmitJCLEnd, 
//GO(ppdEmitString, 
GO(ppdErrorString, pFi)
GO(ppdFindAttr, pFppp)
GO(ppdFindChoice, pFpp)
//GO(ppdFindCustomOption, 
//GO(ppdFindCustomParam, 
GO(ppdFindMarkedChoice, pFpp)
//GO(ppdFindNextAttr, 
GO(ppdFindOption, pFpp)
//GO(ppdFirstCustomParam, 
//GO(ppdFirstOption, 
//GO(_ppdFreeLanguages, 
//GO(_ppdGetEncoding, 
//GO(_ppdGetLanguages, 
//GO(_ppdGlobals, 
//GO(_ppdHashName, 
//GO(ppdInstallableConflict, 
//GO(ppdIsMarked, 
GO(ppdLastError, iFp)
//GO(ppdLocalize, 
//GO(ppdLocalizeAttr, 
//GO(_ppdLocalizedAttr, 
//GO(ppdLocalizeIPPReason, 
//GO(ppdLocalizeMarkerName, 
GO(ppdMarkDefaults, vFp)
//GO(ppdMarkOption, 
//GO(ppdNextCustomParam, 
//GO(ppdNextOption, 
//GO(_ppdNormalizeMakeAndModel, 
//GO(_ppdOpen, 
//GO(ppdOpen, 
//GO(ppdOpen2, 
GO(ppdOpenFd, pFi)
//GO(_ppdOpenFile, 
GO(ppdOpenFile, pFp)
//GO(ppdPageLength, 
//GO(ppdPageSize, 
//GO(ppdPageSizeLimits, 
//GO(ppdPageWidth, 
//GO(_ppdParseOptions, 
//GO(ppdSetConformance, 

//GO(pwgFormatSizeName, 
//GO(pwgInitSize, 
//GO(_pwgInputSlotForSource, 
//GO(pwgMediaForLegacy, 
//GO(pwgMediaForPPD, 
//GO(pwgMediaForPWG, 
//GO(pwgMediaForSize, 
//GO(_pwgMediaNearSize, 
//GO(_pwgMediaTable, 
//GO(_pwgMediaTypeForType, 
//GO(_pwgPageSizeForMedia, 
