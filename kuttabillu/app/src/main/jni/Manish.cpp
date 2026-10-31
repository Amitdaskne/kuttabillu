//SHARED BY @Manish8x , JOIN SRC CHANNEL TG :- @JOIN_ALL_SRC
#include <jni.h>
#include <string>
#include <list>
#include <vector>
#include <string.h>
#include <pthread.h>
#include <list>
#include <vector>
#include <string.h>
#include <pthread.h>
#include <thread>
#include <cstring>
#include <jni.h>
#include <unistd.h>
#include <fstream>
#include <unistd.h>
#include <sys/mman.h>
#include <cstdlib>
#include <iostream>
#include <unordered_map>
#include <string>
#include <cstdlib>
#include <ctime>
#include <dlfcn.h>
#include "Main/Tools.h" 
#include "Main/Logger.h"
#include "Main/oxorany.h"
#include "Main/obfuscate.h"
#include "Main/Utils.h"//@Manish8x
#include "Main/KittyMemory/MemoryPatch.h"
#define targetLibName oxorany("libUE4.so")

#define targetLibName oxorany("libhdmpve.so")
#define targetLibName oxorany("libAntsVoice.so")
#define targetLibName oxorany("libanogs.so")
#include "Main/Macros.h"


#define __int8 char
#define __int16 short
#define __int32 int
#define __int64 long long

#define _BYTE  uint8_t
#define _WORD  uint16_t
#define _DWORD uint32_t
#define _QWORD uint64_t
#define _QWORD __int64
#define _DWORD long
#define atomic_load
#define _BOOL8 uint64_t
#define _strncpy_chk
#define is_mul_ok
#define HIDWORD
#define j_AnoSDKInit
#define BYTE2//@Manish8x
#define HIBYTE
#define AnoSDKGetReportData2_0
#define _DWORD uint32_t
#define _QWORD long
#define _DWORD long
#define _BYTE long
#define _WORD long
#define _OWORD long
#define LOWORD
#define LODWORD
#define _ReadStatusReg
#define off_663DA0
#define  ARM64_SYSREG
#define __strcpy_chk

DWORD libanogsBase = 0;
DWORD libUE4Base = 0;
DWORD libanogsAlloc = 0;
DWORD libUE4Alloc = 0;
DWORD NewBase = 0;
size_t libanogsSize = 0x3FD4E9;
char *Offset;

//============×========×[ADD HOOK]×============×=========////

// ADD HOOK


//============×========×[CODE START]×============×=========////


void * Manish_Singh(void *) {
    LOGI(OBFUSCATE("kutta billu cheats"));

    do {
        sleep(1);
    } while (!isLibraryLoaded(targetLibName));
    #if defined(__aarch64__)
//============×========×[ADDING BYPASS HERE]×============×=========////

//ADD YOUR BYPASS

	
    #endif
    return NULL;
}




__attribute__((constructor))
void lib_main() {
    pthread_t ptid;
    pthread_create(&ptid, NULL, Manish_Singh, NULL);
}

//SHARED BY @Manish8x , JOIN SRC CHANNEL TG :- @JOIN_ALL_SRC
