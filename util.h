#include <stdio.h>
#include <time.h>

#if !defined(__UTIL__)
#define __UTIL__ 1
static void print_time(char *str) {
return;
  struct timeval myTime;
  struct tm *tm;
  gettimeofday(&myTime, NULL);
  tm = localtime(&myTime.tv_sec);
  fprintf(stderr, "%s:%02d:%02d:%02d.%6d\n", str, tm->tm_hour, tm->tm_min, tm->tm_sec, myTime.tv_usec);
}
#endif /* __UTIL__ */
