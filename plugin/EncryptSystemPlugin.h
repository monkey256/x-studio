//*******************************************************************************
// COPYRIGHT NOTES
// ---------------
// Copyright (C) 2014-2020 Simdsoft Limited.
// All rights reserved.
//
// This source code can be used, distributed or modified
// only under terms and conditions
// of the accompanying license agreement.
//*******************************************************************************
//
/*
The x-sutdio Pro EncryptSystemPlugin interface
The plugin should export API: "XSPESSIoControl"
*/
#pragma once

enum {
    ESSCC_PREENCRYPT = 1,
    ESSCC_COMPUTE_FILE_CONTENT_HASH,
    ESSCC_COMPUTE_FILE_NAME_HASH,
};

typedef int (*PFNXSPESSIOCONTROL)(int controlCode, const void* lpInBuffer, int nInBufferSize, void* lpOutBuffer, int nOutBufferSize);
