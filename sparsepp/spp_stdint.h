#if !defined(spp_stdint_h_guard)
#define spp_stdint_h_guard

#include "spp_config.h"

#if defined(SPP_HAS_CSTDINT) && (__cplusplus >= 201103)
    #include <cstdint>
#else
    #if defined(__FreeBSD__) || defined(__IBMCPP__) || defined(_AIX)
        #include <inttypes.h>
    // LEICA: stdint.h is not provided in older versions of VS
    #elif _MSC_VER >= 1600
        #include <stdint.h>
    #endif
#endif

#endif // spp_stdint_h_guard
