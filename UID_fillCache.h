/**
 *  @file   UID_fillCache.h
 *
 *
 *  @date   05/jan/2017
 *  @author M. Palumbi
 */



#ifndef __UID_FILLCACHE_H
#define __UID_FILLCACHE_H

#include <curl/curl.h>
#include "UID_bchainBTC.h"


int UID_fillCache(CURL *curl, cache_buffer *secondb);

#endif // __UID_FILLCACHE_H