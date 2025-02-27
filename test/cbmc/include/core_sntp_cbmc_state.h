/*
 * coreSNTP v1.2.0
 * Copyright (C) 2021 Amazon.com, Inc. or its affiliates.  All Rights Reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of
 * this software and associated documentation files (the "Software"), to deal in
 * the Software without restriction, including without limitation the rights to
 * use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
 * the Software, and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

/**
 * @file core_sntp_cbmc_state.h
 * @brief Allocation and assumption utilities for the SNTP library CBMC proofs.
 */
#ifndef CORE_SNTP_CBMC_STATE_H_
#define CORE_SNTP_CBMC_STATE_H_

#include "core_sntp_client.h"

/* Application defined Network context. */
struct NetworkContext
{
    void * networkContext;
};

/* Application defined authentication context. */
struct SntpAuthContext
{
    void * authContext;
};

/**
 * @brief Allocate a #SntpContext_t object.
 *
 * @return NULL or allocated #SntpContext_t memory.
 */
SntpContext_t * unconstrainedCoreSntpContext();

#endif /* ifndef CORE_SNTP_CBMC_STATE_H_ */
