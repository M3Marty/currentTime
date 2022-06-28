#include <chrono>

/* Duration TYPES:
 *	 nanoseconds
 *	 microseconds
 *	 milliseconds
 *	 seconds
 *	 minutes
 *	 hours
 */

#define currentTime(type) ((long long) std::chrono::duration_cast<std::chrono::##type>(\
std::chrono::system_clock::now().time_since_epoch()\
).count())

#define currentTimeNanoseconds currentTime(nanoseconds)
#define currentTimeMilliseconds currentTime(milliseconds)
#define currentTimeSeconds currentTime(seconds)
