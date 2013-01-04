#define DEBUG_PRINTF_YES printf
#define DEBUG_PRINTF_NO(...)

#define DEBUG_FLUSH_YES printf("\n")
#define DEBUG_FLUSH_NO fflush(stdout)

#define DEBUG_EXIT_YES exit(-1)

#ifdef DEBUG_ROM_INFO
#define DEBUG_ROM DEBUG_PRINTF_YES
#else
#define DEBUG_ROM DEBUG_PRINTF_NO
#endif

#ifdef DEBUG_CRC_MATCHING
#define DEBUG_CRC DEBUG_PRINTF_YES
#define DEBUG_FLUSH_CRC DEBUG_FLUSH_YES
#define DEBUG_EXIT_CRC DEBUG_EXIT_YES
#else
#define DEBUG_CRC DEBUG_PRINTF_NO
#define DEBUG_FLUSH_CRC DEBUG_FLUSH_NO
#define DEBUG_EXIT_CRC
#endif

#ifdef DEBUG_MAIN_MATCHING
#define DEBUG_MAIN DEBUG_PRINTF_YES
#define DEBUG_FLUSH_MAIN DEBUG_FLUSH_YES
#define DEBUG_EXIT_MAIN DEBUG_EXIT_YES
#else
#define DEBUG_MAIN DEBUG_PRINTF_NO
#define DEBUG_FLUSH_MAIN DEBUG_FLUSH_NO
#define DEBUG_EXIT_MAIN
#endif

#ifdef DEBUG_MULTIPOINT_MATCHING
#define DEBUG_MULTIPOINT DEBUG_PRINTF_YES
#define DEBUG_FLUSH_MULTIPOINT DEBUG_FLUSH_YES
#define DEBUG_EXIT_MULTIPOINT DEBUG_EXIT_YES
#else
#define DEBUG_MULTIPOINT DEBUG_PRINTF_NO
#define DEBUG_FLUSH_MULTIPOINT DEBUG_FLUSH_NO
#define DEBUG_EXIT_MULTIPOINT
#endif
