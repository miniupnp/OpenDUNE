/** @file src/os/sleep.h OS-independent inclusion of the delay routine. */

#ifndef OS_SLEEP_H
#define OS_SLEEP_H

#if defined(_WIN32)
	#include <windows.h>
#else
	#if !defined(__USE_BSD)
		#define __USE_BSD
		#include <unistd.h>
		#undef __USE_BSD
	#else
		#include <unistd.h>
	#endif /* __USE_BSD */
#endif /* _WIN32 */
#include "../timer.h"

#if defined(_WIN32)
#define msleep(x) Sleep(x)
#else
#define msleep(x) usleep((x) * 1000)
#endif /* _WIN32 */

#define sleepIdle() Timer_ProcessEvents()

#endif /* OS_SLEEP_H */
