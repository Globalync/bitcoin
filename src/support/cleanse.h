// Copyright (c) 2009-2010 Satoshi Nakamoto
// Copyright (c) 2009-2019 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_SUPPORT_CLEANSE_H
#define BITCOIN_SUPPORT_CLEANSE_H

#include <stdlib.h>

<<<<<<< HEAD
/** Secure overwrite a buffer (possibly containing secret data) with zero-bytes. The write
 * operation will not be optimized out by the compiler. */
=======
// Attempt to overwrite data in the specified memory span.
>>>>>>> origin/0.14
void memory_cleanse(void *ptr, size_t len);

#endif // BITCOIN_SUPPORT_CLEANSE_H
