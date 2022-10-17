#include <windows.h>
#include <stdio.h>

int main (int argc, char **argv) {
  FILETIME earliest = {0, 0x01D8E0000000};
  FILETIME latest   = {0, 0x01D8E3FFFFFF};
  SYSTEMTIME s;

  FileTimeToSystemTime(&earliest, &s);
  printf("Earlist: %04u-%02u %02u-%02u\n", s.wYear, s.wMonth, s.wDay, s.wHour, s.wMinute);
  
  FileTimeToSystemTime(&latest, &s);
  printf("Earlist: %04u-%02u %02u-%02u\n", s.wYear, s.wMonth, s.wDay, s.wHour, s.wMinute);

  return 0;
}
