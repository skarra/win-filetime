/* Reference: https://twitter.com/taviso/status/1581682151531028480 */

#include <windows.h>
#include <stdio.h>

int main (int argc, char **argv) {
  FILETIME earliest, latest;
  SYSTEMTIME s;

  earliest = {0, 0x01D8E0000000};
  FileTimeToSystemTime(&earliest, &s);
  printf("Earliest 1: %04u-%02u-%02u %02u:%02u\n", s.wYear, s.wMonth, s.wDay, s.wHour, s.wMinute);
  
  earliest = {0xFFFFFFFF, 0x01D8E0000000};
  FileTimeToSystemTime(&earliest, &s);
  printf("Earliest 2: %04u-%02u-%02u %02u:%02u\n", s.wYear, s.wMonth, s.wDay, s.wHour, s.wMinute);

  latest = {0, 0x01D8E3FFFFFF};
  FileTimeToSystemTime(&latest, &s);
  printf("  Latest 1: %04u-%02u-%02u %02u:%02u\n", s.wYear, s.wMonth, s.wDay, s.wHour, s.wMinute);

  latest = {0xFFFFFFFF, 0x01D8E3FFFFFF};
  FileTimeToSystemTime(&latest, &s);
  printf("  Latest 2: %04u-%02u-%02u %02u:%02u\n", s.wYear, s.wMonth, s.wDay, s.wHour, s.wMinute);

  return 0;
}
