BINARYDIR := Release

#Toolchain
CC := $(TOOLCHAIN_ROOT)/bin/gcc.exe
CXX := $(TOOLCHAIN_ROOT)/bin/g++.exe
LD := $(CXX)
AR := $(TOOLCHAIN_ROOT)/bin/ar.exe
OBJCOPY := $(TOOLCHAIN_ROOT)/bin/objcopy.exe

#Additional flags
PREPROCESSOR_MACROS := NDEBUG=1 RELEASE=1
INCLUDE_DIRS := include/ntfs-3g
LIBRARY_DIRS := lib
LIBRARY_NAMES := cygwin1 cygntfs-3g-89 win_utils
ADDITIONAL_LINKER_INPUTS := 
MACOS_FRAMEWORKS := 
LINUX_PACKAGES := 

CFLAGS := -ggdb -ffunction-sections -O3
CXXFLAGS := -ggdb -ffunction-sections -O3
ASFLAGS := 
LDFLAGS := -Wl,-gc-sections
COMMONFLAGS := 
LINKER_SCRIPT := 

START_GROUP := -Wl,--start-group
END_GROUP := -Wl,--end-group

#Additional options detected from testing the toolchain
USE_DEL_TO_CLEAN := 1
CP_NOT_AVAILABLE := 1
