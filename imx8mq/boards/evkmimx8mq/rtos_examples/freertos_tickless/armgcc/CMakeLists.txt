INCLUDE(CMakeForceCompiler)

# CROSS COMPILER SETTING
SET(CMAKE_SYSTEM_NAME Generic)
CMAKE_MINIMUM_REQUIRED (VERSION 2.6)

# THE VERSION NUMBER
SET (Tutorial_VERSION_MAJOR 1)
SET (Tutorial_VERSION_MINOR 0)

# ENABLE ASM
ENABLE_LANGUAGE(ASM)

SET(CMAKE_STATIC_LIBRARY_PREFIX)
SET(CMAKE_STATIC_LIBRARY_SUFFIX)

SET(CMAKE_EXECUTABLE_LIBRARY_PREFIX)
SET(CMAKE_EXECUTABLE_LIBRARY_SUFFIX)

 
# CURRENT DIRECTORY
SET(ProjDirPath ${CMAKE_CURRENT_SOURCE_DIR})


SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -DDEBUG")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -D__STARTUP_CLEAR_BSS")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -D__STARTUP_INITIALIZE_NONCACHEDATA")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -g")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -Wall")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -fno-common")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -ffunction-sections")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -fdata-sections")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -ffreestanding")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -fno-builtin")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -mthumb")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -mapcs")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -std=gnu99")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -mcpu=cortex-m4")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -mfloat-abi=hard")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -mfpu=fpv4-sp-d16")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -DNDEBUG")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -D__STARTUP_CLEAR_BSS")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -D__STARTUP_INITIALIZE_NONCACHEDATA")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -Wall")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -fno-common")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -ffunction-sections")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -fdata-sections")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -ffreestanding")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -fno-builtin")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -mthumb")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -mapcs")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -std=gnu99")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -mcpu=cortex-m4")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -mfloat-abi=hard")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -mfpu=fpv4-sp-d16")

SET(CMAKE_ASM_FLAGS_DDR_DEBUG "${CMAKE_ASM_FLAGS_DDR_DEBUG} -D__STARTUP_CLEAR_BSS")

SET(CMAKE_ASM_FLAGS_DDR_DEBUG "${CMAKE_ASM_FLAGS_DDR_DEBUG} -D__STARTUP_INITIALIZE_NONCACHEDATA")

SET(CMAKE_ASM_FLAGS_DDR_DEBUG "${CMAKE_ASM_FLAGS_DDR_DEBUG} -g")

SET(CMAKE_ASM_FLAGS_DDR_DEBUG "${CMAKE_ASM_FLAGS_DDR_DEBUG} -Wall")

SET(CMAKE_ASM_FLAGS_DDR_DEBUG "${CMAKE_ASM_FLAGS_DDR_DEBUG} -fno-common")

SET(CMAKE_ASM_FLAGS_DDR_DEBUG "${CMAKE_ASM_FLAGS_DDR_DEBUG} -ffunction-sections")

SET(CMAKE_ASM_FLAGS_DDR_DEBUG "${CMAKE_ASM_FLAGS_DDR_DEBUG} -fdata-sections")

SET(CMAKE_ASM_FLAGS_DDR_DEBUG "${CMAKE_ASM_FLAGS_DDR_DEBUG} -ffreestanding")

SET(CMAKE_ASM_FLAGS_DDR_DEBUG "${CMAKE_ASM_FLAGS_DDR_DEBUG} -fno-builtin")

SET(CMAKE_ASM_FLAGS_DDR_DEBUG "${CMAKE_ASM_FLAGS_DDR_DEBUG} -mthumb")

SET(CMAKE_ASM_FLAGS_DDR_DEBUG "${CMAKE_ASM_FLAGS_DDR_DEBUG} -mapcs")

SET(CMAKE_ASM_FLAGS_DDR_DEBUG "${CMAKE_ASM_FLAGS_DDR_DEBUG} -std=gnu99")

SET(CMAKE_ASM_FLAGS_DDR_DEBUG "${CMAKE_ASM_FLAGS_DDR_DEBUG} -mcpu=cortex-m4")

SET(CMAKE_ASM_FLAGS_DDR_DEBUG "${CMAKE_ASM_FLAGS_DDR_DEBUG} -mfloat-abi=hard")

SET(CMAKE_ASM_FLAGS_DDR_DEBUG "${CMAKE_ASM_FLAGS_DDR_DEBUG} -mfpu=fpv4-sp-d16")

SET(CMAKE_ASM_FLAGS_DDR_RELEASE "${CMAKE_ASM_FLAGS_DDR_RELEASE} -D__STARTUP_CLEAR_BSS")

SET(CMAKE_ASM_FLAGS_DDR_RELEASE "${CMAKE_ASM_FLAGS_DDR_RELEASE} -D__STARTUP_INITIALIZE_NONCACHEDATA")

SET(CMAKE_ASM_FLAGS_DDR_RELEASE "${CMAKE_ASM_FLAGS_DDR_RELEASE} -Wall")

SET(CMAKE_ASM_FLAGS_DDR_RELEASE "${CMAKE_ASM_FLAGS_DDR_RELEASE} -fno-common")

SET(CMAKE_ASM_FLAGS_DDR_RELEASE "${CMAKE_ASM_FLAGS_DDR_RELEASE} -ffunction-sections")

SET(CMAKE_ASM_FLAGS_DDR_RELEASE "${CMAKE_ASM_FLAGS_DDR_RELEASE} -fdata-sections")

SET(CMAKE_ASM_FLAGS_DDR_RELEASE "${CMAKE_ASM_FLAGS_DDR_RELEASE} -ffreestanding")

SET(CMAKE_ASM_FLAGS_DDR_RELEASE "${CMAKE_ASM_FLAGS_DDR_RELEASE} -fno-builtin")

SET(CMAKE_ASM_FLAGS_DDR_RELEASE "${CMAKE_ASM_FLAGS_DDR_RELEASE} -mthumb")

SET(CMAKE_ASM_FLAGS_DDR_RELEASE "${CMAKE_ASM_FLAGS_DDR_RELEASE} -mapcs")

SET(CMAKE_ASM_FLAGS_DDR_RELEASE "${CMAKE_ASM_FLAGS_DDR_RELEASE} -std=gnu99")

SET(CMAKE_ASM_FLAGS_DDR_RELEASE "${CMAKE_ASM_FLAGS_DDR_RELEASE} -mcpu=cortex-m4")

SET(CMAKE_ASM_FLAGS_DDR_RELEASE "${CMAKE_ASM_FLAGS_DDR_RELEASE} -mfloat-abi=hard")

SET(CMAKE_ASM_FLAGS_DDR_RELEASE "${CMAKE_ASM_FLAGS_DDR_RELEASE} -mfpu=fpv4-sp-d16")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DDEBUG")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DCPU_MIMX8MQ6DVAJZ")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DFSL_RTOS_FREE_RTOS")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -g")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -O0")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -Wall")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -fno-common")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -ffunction-sections")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -fdata-sections")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -ffreestanding")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -fno-builtin")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -mthumb")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -mapcs")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -std=gnu99")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -mcpu=cortex-m4")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -mfloat-abi=hard")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -mfpu=fpv4-sp-d16")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -MMD")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -MP")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DNDEBUG")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DCPU_MIMX8MQ6DVAJZ")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DFSL_RTOS_FREE_RTOS")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -Os")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -Wall")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -fno-common")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -ffunction-sections")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -fdata-sections")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -ffreestanding")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -fno-builtin")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -mthumb")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -mapcs")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -std=gnu99")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -mcpu=cortex-m4")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -mfloat-abi=hard")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -mfpu=fpv4-sp-d16")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -MMD")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -MP")

SET(CMAKE_C_FLAGS_DDR_DEBUG "${CMAKE_C_FLAGS_DDR_DEBUG} -DCPU_MIMX8MQ6DVAJZ")

SET(CMAKE_C_FLAGS_DDR_DEBUG "${CMAKE_C_FLAGS_DDR_DEBUG} -DFSL_RTOS_FREE_RTOS")

SET(CMAKE_C_FLAGS_DDR_DEBUG "${CMAKE_C_FLAGS_DDR_DEBUG} -g")

SET(CMAKE_C_FLAGS_DDR_DEBUG "${CMAKE_C_FLAGS_DDR_DEBUG} -O0")

SET(CMAKE_C_FLAGS_DDR_DEBUG "${CMAKE_C_FLAGS_DDR_DEBUG} -Wall")

SET(CMAKE_C_FLAGS_DDR_DEBUG "${CMAKE_C_FLAGS_DDR_DEBUG} -fno-common")

SET(CMAKE_C_FLAGS_DDR_DEBUG "${CMAKE_C_FLAGS_DDR_DEBUG} -ffunction-sections")

SET(CMAKE_C_FLAGS_DDR_DEBUG "${CMAKE_C_FLAGS_DDR_DEBUG} -fdata-sections")

SET(CMAKE_C_FLAGS_DDR_DEBUG "${CMAKE_C_FLAGS_DDR_DEBUG} -ffreestanding")

SET(CMAKE_C_FLAGS_DDR_DEBUG "${CMAKE_C_FLAGS_DDR_DEBUG} -fno-builtin")

SET(CMAKE_C_FLAGS_DDR_DEBUG "${CMAKE_C_FLAGS_DDR_DEBUG} -mthumb")

SET(CMAKE_C_FLAGS_DDR_DEBUG "${CMAKE_C_FLAGS_DDR_DEBUG} -mapcs")

SET(CMAKE_C_FLAGS_DDR_DEBUG "${CMAKE_C_FLAGS_DDR_DEBUG} -std=gnu99")

SET(CMAKE_C_FLAGS_DDR_DEBUG "${CMAKE_C_FLAGS_DDR_DEBUG} -mcpu=cortex-m4")

SET(CMAKE_C_FLAGS_DDR_DEBUG "${CMAKE_C_FLAGS_DDR_DEBUG} -mfloat-abi=hard")

SET(CMAKE_C_FLAGS_DDR_DEBUG "${CMAKE_C_FLAGS_DDR_DEBUG} -mfpu=fpv4-sp-d16")

SET(CMAKE_C_FLAGS_DDR_DEBUG "${CMAKE_C_FLAGS_DDR_DEBUG} -MMD")

SET(CMAKE_C_FLAGS_DDR_DEBUG "${CMAKE_C_FLAGS_DDR_DEBUG} -MP")

SET(CMAKE_C_FLAGS_DDR_RELEASE "${CMAKE_C_FLAGS_DDR_RELEASE} -DCPU_MIMX8MQ6DVAJZ")

SET(CMAKE_C_FLAGS_DDR_RELEASE "${CMAKE_C_FLAGS_DDR_RELEASE} -DFSL_RTOS_FREE_RTOS")

SET(CMAKE_C_FLAGS_DDR_RELEASE "${CMAKE_C_FLAGS_DDR_RELEASE} -Os")

SET(CMAKE_C_FLAGS_DDR_RELEASE "${CMAKE_C_FLAGS_DDR_RELEASE} -Wall")

SET(CMAKE_C_FLAGS_DDR_RELEASE "${CMAKE_C_FLAGS_DDR_RELEASE} -fno-common")

SET(CMAKE_C_FLAGS_DDR_RELEASE "${CMAKE_C_FLAGS_DDR_RELEASE} -ffunction-sections")

SET(CMAKE_C_FLAGS_DDR_RELEASE "${CMAKE_C_FLAGS_DDR_RELEASE} -fdata-sections")

SET(CMAKE_C_FLAGS_DDR_RELEASE "${CMAKE_C_FLAGS_DDR_RELEASE} -ffreestanding")

SET(CMAKE_C_FLAGS_DDR_RELEASE "${CMAKE_C_FLAGS_DDR_RELEASE} -fno-builtin")

SET(CMAKE_C_FLAGS_DDR_RELEASE "${CMAKE_C_FLAGS_DDR_RELEASE} -mthumb")

SET(CMAKE_C_FLAGS_DDR_RELEASE "${CMAKE_C_FLAGS_DDR_RELEASE} -mapcs")

SET(CMAKE_C_FLAGS_DDR_RELEASE "${CMAKE_C_FLAGS_DDR_RELEASE} -std=gnu99")

SET(CMAKE_C_FLAGS_DDR_RELEASE "${CMAKE_C_FLAGS_DDR_RELEASE} -mcpu=cortex-m4")

SET(CMAKE_C_FLAGS_DDR_RELEASE "${CMAKE_C_FLAGS_DDR_RELEASE} -mfloat-abi=hard")

SET(CMAKE_C_FLAGS_DDR_RELEASE "${CMAKE_C_FLAGS_DDR_RELEASE} -mfpu=fpv4-sp-d16")

SET(CMAKE_C_FLAGS_DDR_RELEASE "${CMAKE_C_FLAGS_DDR_RELEASE} -MMD")

SET(CMAKE_C_FLAGS_DDR_RELEASE "${CMAKE_C_FLAGS_DDR_RELEASE} -MP")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -DDEBUG")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -DCPU_MIMX8MQ6DVAJZ")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -g")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -O0")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -Wall")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -fno-common")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -ffunction-sections")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -fdata-sections")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -ffreestanding")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -fno-builtin")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -mthumb")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -mapcs")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -fno-rtti")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -fno-exceptions")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -mcpu=cortex-m4")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -mfloat-abi=hard")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -mfpu=fpv4-sp-d16")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -MMD")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -MP")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -DNDEBUG")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -DCPU_MIMX8MQ6DVAJZ")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -Os")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -Wall")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -fno-common")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -ffunction-sections")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -fdata-sections")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -ffreestanding")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -fno-builtin")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -mthumb")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -mapcs")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -fno-rtti")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -fno-exceptions")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -mcpu=cortex-m4")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -mfloat-abi=hard")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -mfpu=fpv4-sp-d16")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -MMD")

SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -MP")

SET(CMAKE_CXX_FLAGS_DDR_DEBUG "${CMAKE_CXX_FLAGS_DDR_DEBUG} -DCPU_MIMX8MQ6DVAJZ")

SET(CMAKE_CXX_FLAGS_DDR_DEBUG "${CMAKE_CXX_FLAGS_DDR_DEBUG} -g")

SET(CMAKE_CXX_FLAGS_DDR_DEBUG "${CMAKE_CXX_FLAGS_DDR_DEBUG} -O0")

SET(CMAKE_CXX_FLAGS_DDR_DEBUG "${CMAKE_CXX_FLAGS_DDR_DEBUG} -Wall")

SET(CMAKE_CXX_FLAGS_DDR_DEBUG "${CMAKE_CXX_FLAGS_DDR_DEBUG} -fno-common")

SET(CMAKE_CXX_FLAGS_DDR_DEBUG "${CMAKE_CXX_FLAGS_DDR_DEBUG} -ffunction-sections")

SET(CMAKE_CXX_FLAGS_DDR_DEBUG "${CMAKE_CXX_FLAGS_DDR_DEBUG} -fdata-sections")

SET(CMAKE_CXX_FLAGS_DDR_DEBUG "${CMAKE_CXX_FLAGS_DDR_DEBUG} -ffreestanding")

SET(CMAKE_CXX_FLAGS_DDR_DEBUG "${CMAKE_CXX_FLAGS_DDR_DEBUG} -fno-builtin")

SET(CMAKE_CXX_FLAGS_DDR_DEBUG "${CMAKE_CXX_FLAGS_DDR_DEBUG} -mthumb")

SET(CMAKE_CXX_FLAGS_DDR_DEBUG "${CMAKE_CXX_FLAGS_DDR_DEBUG} -mapcs")

SET(CMAKE_CXX_FLAGS_DDR_DEBUG "${CMAKE_CXX_FLAGS_DDR_DEBUG} -fno-rtti")

SET(CMAKE_CXX_FLAGS_DDR_DEBUG "${CMAKE_CXX_FLAGS_DDR_DEBUG} -fno-exceptions")

SET(CMAKE_CXX_FLAGS_DDR_DEBUG "${CMAKE_CXX_FLAGS_DDR_DEBUG} -mcpu=cortex-m4")

SET(CMAKE_CXX_FLAGS_DDR_DEBUG "${CMAKE_CXX_FLAGS_DDR_DEBUG} -mfloat-abi=hard")

SET(CMAKE_CXX_FLAGS_DDR_DEBUG "${CMAKE_CXX_FLAGS_DDR_DEBUG} -mfpu=fpv4-sp-d16")

SET(CMAKE_CXX_FLAGS_DDR_DEBUG "${CMAKE_CXX_FLAGS_DDR_DEBUG} -MMD")

SET(CMAKE_CXX_FLAGS_DDR_DEBUG "${CMAKE_CXX_FLAGS_DDR_DEBUG} -MP")

SET(CMAKE_CXX_FLAGS_DDR_RELEASE "${CMAKE_CXX_FLAGS_DDR_RELEASE} -DCPU_MIMX8MQ6DVAJZ")

SET(CMAKE_CXX_FLAGS_DDR_RELEASE "${CMAKE_CXX_FLAGS_DDR_RELEASE} -Os")

SET(CMAKE_CXX_FLAGS_DDR_RELEASE "${CMAKE_CXX_FLAGS_DDR_RELEASE} -Wall")

SET(CMAKE_CXX_FLAGS_DDR_RELEASE "${CMAKE_CXX_FLAGS_DDR_RELEASE} -fno-common")

SET(CMAKE_CXX_FLAGS_DDR_RELEASE "${CMAKE_CXX_FLAGS_DDR_RELEASE} -ffunction-sections")

SET(CMAKE_CXX_FLAGS_DDR_RELEASE "${CMAKE_CXX_FLAGS_DDR_RELEASE} -fdata-sections")

SET(CMAKE_CXX_FLAGS_DDR_RELEASE "${CMAKE_CXX_FLAGS_DDR_RELEASE} -ffreestanding")

SET(CMAKE_CXX_FLAGS_DDR_RELEASE "${CMAKE_CXX_FLAGS_DDR_RELEASE} -fno-builtin")

SET(CMAKE_CXX_FLAGS_DDR_RELEASE "${CMAKE_CXX_FLAGS_DDR_RELEASE} -mthumb")

SET(CMAKE_CXX_FLAGS_DDR_RELEASE "${CMAKE_CXX_FLAGS_DDR_RELEASE} -mapcs")

SET(CMAKE_CXX_FLAGS_DDR_RELEASE "${CMAKE_CXX_FLAGS_DDR_RELEASE} -fno-rtti")

SET(CMAKE_CXX_FLAGS_DDR_RELEASE "${CMAKE_CXX_FLAGS_DDR_RELEASE} -fno-exceptions")

SET(CMAKE_CXX_FLAGS_DDR_RELEASE "${CMAKE_CXX_FLAGS_DDR_RELEASE} -mcpu=cortex-m4")

SET(CMAKE_CXX_FLAGS_DDR_RELEASE "${CMAKE_CXX_FLAGS_DDR_RELEASE} -mfloat-abi=hard")

SET(CMAKE_CXX_FLAGS_DDR_RELEASE "${CMAKE_CXX_FLAGS_DDR_RELEASE} -mfpu=fpv4-sp-d16")

SET(CMAKE_CXX_FLAGS_DDR_RELEASE "${CMAKE_CXX_FLAGS_DDR_RELEASE} -MMD")

SET(CMAKE_CXX_FLAGS_DDR_RELEASE "${CMAKE_CXX_FLAGS_DDR_RELEASE} -MP")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -g")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} --specs=nano.specs")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} --specs=nosys.specs")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Wall")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -fno-common")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -ffunction-sections")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -fdata-sections")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -ffreestanding")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -fno-builtin")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -mthumb")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -mapcs")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} --gc-sections")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -static")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -z")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} muldefs")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Map=output.map")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -mcpu=cortex-m4")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -mfloat-abi=hard")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -mfpu=fpv4-sp-d16")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} --specs=nano.specs")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} --specs=nosys.specs")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Wall")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -fno-common")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -ffunction-sections")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -fdata-sections")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -ffreestanding")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -fno-builtin")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -mthumb")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -mapcs")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} --gc-sections")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -static")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -z")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} muldefs")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Map=output.map")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -mcpu=cortex-m4")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -mfloat-abi=hard")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -mfpu=fpv4-sp-d16")

SET(CMAKE_EXE_LINKER_FLAGS_DDR_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DDR_DEBUG} -g")

SET(CMAKE_EXE_LINKER_FLAGS_DDR_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DDR_DEBUG} --specs=nano.specs")

SET(CMAKE_EXE_LINKER_FLAGS_DDR_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DDR_DEBUG} --specs=nosys.specs")

SET(CMAKE_EXE_LINKER_FLAGS_DDR_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DDR_DEBUG} -Wall")

SET(CMAKE_EXE_LINKER_FLAGS_DDR_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DDR_DEBUG} -fno-common")

SET(CMAKE_EXE_LINKER_FLAGS_DDR_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DDR_DEBUG} -ffunction-sections")

SET(CMAKE_EXE_LINKER_FLAGS_DDR_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DDR_DEBUG} -fdata-sections")

SET(CMAKE_EXE_LINKER_FLAGS_DDR_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DDR_DEBUG} -ffreestanding")

SET(CMAKE_EXE_LINKER_FLAGS_DDR_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DDR_DEBUG} -fno-builtin")

SET(CMAKE_EXE_LINKER_FLAGS_DDR_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DDR_DEBUG} -mthumb")

SET(CMAKE_EXE_LINKER_FLAGS_DDR_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DDR_DEBUG} -mapcs")

SET(CMAKE_EXE_LINKER_FLAGS_DDR_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DDR_DEBUG} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_DDR_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DDR_DEBUG} --gc-sections")

SET(CMAKE_EXE_LINKER_FLAGS_DDR_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DDR_DEBUG} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_DDR_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DDR_DEBUG} -static")

SET(CMAKE_EXE_LINKER_FLAGS_DDR_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DDR_DEBUG} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_DDR_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DDR_DEBUG} -z")

SET(CMAKE_EXE_LINKER_FLAGS_DDR_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DDR_DEBUG} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_DDR_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DDR_DEBUG} muldefs")

SET(CMAKE_EXE_LINKER_FLAGS_DDR_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DDR_DEBUG} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_DDR_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DDR_DEBUG} -Map=output.map")

SET(CMAKE_EXE_LINKER_FLAGS_DDR_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DDR_DEBUG} -mcpu=cortex-m4")

SET(CMAKE_EXE_LINKER_FLAGS_DDR_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DDR_DEBUG} -mfloat-abi=hard")

SET(CMAKE_EXE_LINKER_FLAGS_DDR_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DDR_DEBUG} -mfpu=fpv4-sp-d16")

SET(CMAKE_EXE_LINKER_FLAGS_DDR_RELEASE "${CMAKE_EXE_LINKER_FLAGS_DDR_RELEASE} --specs=nano.specs")

SET(CMAKE_EXE_LINKER_FLAGS_DDR_RELEASE "${CMAKE_EXE_LINKER_FLAGS_DDR_RELEASE} --specs=nosys.specs")

SET(CMAKE_EXE_LINKER_FLAGS_DDR_RELEASE "${CMAKE_EXE_LINKER_FLAGS_DDR_RELEASE} -Wall")

SET(CMAKE_EXE_LINKER_FLAGS_DDR_RELEASE "${CMAKE_EXE_LINKER_FLAGS_DDR_RELEASE} -fno-common")

SET(CMAKE_EXE_LINKER_FLAGS_DDR_RELEASE "${CMAKE_EXE_LINKER_FLAGS_DDR_RELEASE} -ffunction-sections")

SET(CMAKE_EXE_LINKER_FLAGS_DDR_RELEASE "${CMAKE_EXE_LINKER_FLAGS_DDR_RELEASE} -fdata-sections")

SET(CMAKE_EXE_LINKER_FLAGS_DDR_RELEASE "${CMAKE_EXE_LINKER_FLAGS_DDR_RELEASE} -ffreestanding")

SET(CMAKE_EXE_LINKER_FLAGS_DDR_RELEASE "${CMAKE_EXE_LINKER_FLAGS_DDR_RELEASE} -fno-builtin")

SET(CMAKE_EXE_LINKER_FLAGS_DDR_RELEASE "${CMAKE_EXE_LINKER_FLAGS_DDR_RELEASE} -mthumb")

SET(CMAKE_EXE_LINKER_FLAGS_DDR_RELEASE "${CMAKE_EXE_LINKER_FLAGS_DDR_RELEASE} -mapcs")

SET(CMAKE_EXE_LINKER_FLAGS_DDR_RELEASE "${CMAKE_EXE_LINKER_FLAGS_DDR_RELEASE} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_DDR_RELEASE "${CMAKE_EXE_LINKER_FLAGS_DDR_RELEASE} --gc-sections")

SET(CMAKE_EXE_LINKER_FLAGS_DDR_RELEASE "${CMAKE_EXE_LINKER_FLAGS_DDR_RELEASE} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_DDR_RELEASE "${CMAKE_EXE_LINKER_FLAGS_DDR_RELEASE} -static")

SET(CMAKE_EXE_LINKER_FLAGS_DDR_RELEASE "${CMAKE_EXE_LINKER_FLAGS_DDR_RELEASE} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_DDR_RELEASE "${CMAKE_EXE_LINKER_FLAGS_DDR_RELEASE} -z")

SET(CMAKE_EXE_LINKER_FLAGS_DDR_RELEASE "${CMAKE_EXE_LINKER_FLAGS_DDR_RELEASE} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_DDR_RELEASE "${CMAKE_EXE_LINKER_FLAGS_DDR_RELEASE} muldefs")

SET(CMAKE_EXE_LINKER_FLAGS_DDR_RELEASE "${CMAKE_EXE_LINKER_FLAGS_DDR_RELEASE} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_DDR_RELEASE "${CMAKE_EXE_LINKER_FLAGS_DDR_RELEASE} -Map=output.map")

SET(CMAKE_EXE_LINKER_FLAGS_DDR_RELEASE "${CMAKE_EXE_LINKER_FLAGS_DDR_RELEASE} -mcpu=cortex-m4")

SET(CMAKE_EXE_LINKER_FLAGS_DDR_RELEASE "${CMAKE_EXE_LINKER_FLAGS_DDR_RELEASE} -mfloat-abi=hard")

SET(CMAKE_EXE_LINKER_FLAGS_DDR_RELEASE "${CMAKE_EXE_LINKER_FLAGS_DDR_RELEASE} -mfpu=fpv4-sp-d16")

include_directories(${ProjDirPath}/..)

include_directories(${ProjDirPath}/../../..)

include_directories(${ProjDirPath}/..)

include_directories(${ProjDirPath}/../../..)

include_directories(${ProjDirPath}/..)

include_directories(${ProjDirPath}/../../..)

include_directories(${ProjDirPath}/..)

include_directories(${ProjDirPath}/../../..)

include_directories(${ProjDirPath}/../../../../../rtos/amazon-freertos/lib/FreeRTOS/portable/GCC/ARM_CM4F)

include_directories(${ProjDirPath}/..)

include_directories(${ProjDirPath}/../low_power_tickless)

include_directories(${ProjDirPath}/../../..)

include_directories(${ProjDirPath}/../../../../../CMSIS/Include)

include_directories(${ProjDirPath}/../../../../../devices)

include_directories(${ProjDirPath}/../../../../../rtos/amazon-freertos/lib/include)

include_directories(${ProjDirPath}/../../../../../rtos/amazon-freertos/lib/include/private)

include_directories(${ProjDirPath}/../../../../../devices/MIMX8MQ6/drivers)

include_directories(${ProjDirPath}/../../../../../devices/MIMX8MQ6)

include_directories(${ProjDirPath}/../../../../../devices/MIMX8MQ6/utilities/str)

include_directories(${ProjDirPath}/../../../../../devices/MIMX8MQ6/utilities/debug_console)

include_directories(${ProjDirPath}/../../../../../components/uart)

include_directories(${ProjDirPath}/../../../../../components/serial_manager)

include_directories(${ProjDirPath}/../../../../../components/lists)

add_executable(freertos_tickless.elf 
"${ProjDirPath}/../low_power_tickless/fsl_tickless_gpt.c"
"${ProjDirPath}/../low_power_tickless/fsl_tickless_gpt.h"
"${ProjDirPath}/../freertos_tickless.c"
"${ProjDirPath}/../pin_mux.c"
"${ProjDirPath}/../pin_mux.h"
"${ProjDirPath}/../FreeRTOSConfig.h"
"${ProjDirPath}/../board.c"
"${ProjDirPath}/../board.h"
"${ProjDirPath}/../clock_config.c"
"${ProjDirPath}/../clock_config.h"
"${ProjDirPath}/../fsl_iomuxc.h"
"${ProjDirPath}/../../../../../devices/MIMX8MQ6/drivers/fsl_gpt.c"
"${ProjDirPath}/../../../../../devices/MIMX8MQ6/drivers/fsl_gpt.h"
"${ProjDirPath}/../../../../../devices/MIMX8MQ6/drivers/fsl_gpio.c"
"${ProjDirPath}/../../../../../devices/MIMX8MQ6/drivers/fsl_gpio.h"
"${ProjDirPath}/../../../../../devices/MIMX8MQ6/drivers/fsl_clock.c"
"${ProjDirPath}/../../../../../devices/MIMX8MQ6/drivers/fsl_clock.h"
"${ProjDirPath}/../../../../../rtos/amazon-freertos/lib/FreeRTOS/event_groups.c"
"${ProjDirPath}/../../../../../rtos/amazon-freertos/lib/FreeRTOS/list.c"
"${ProjDirPath}/../../../../../rtos/amazon-freertos/lib/FreeRTOS/portable/GCC/ARM_CM4F/port.c"
"${ProjDirPath}/../../../../../rtos/amazon-freertos/lib/FreeRTOS/portable/GCC/ARM_CM4F/portmacro.h"
"${ProjDirPath}/../../../../../rtos/amazon-freertos/lib/FreeRTOS/queue.c"
"${ProjDirPath}/../../../../../rtos/amazon-freertos/lib/FreeRTOS/stream_buffer.c"
"${ProjDirPath}/../../../../../rtos/amazon-freertos/lib/FreeRTOS/tasks.c"
"${ProjDirPath}/../../../../../rtos/amazon-freertos/lib/FreeRTOS/timers.c"
"${ProjDirPath}/../../../../../rtos/amazon-freertos/lib/include/FreeRTOS.h"
"${ProjDirPath}/../../../../../rtos/amazon-freertos/lib/include/event_groups.h"
"${ProjDirPath}/../../../../../rtos/amazon-freertos/lib/include/freertos_tasks_c_additions.h"
"${ProjDirPath}/../../../../../rtos/amazon-freertos/lib/include/message_buffer.h"
"${ProjDirPath}/../../../../../rtos/amazon-freertos/lib/include/private/deprecated_definitions.h"
"${ProjDirPath}/../../../../../rtos/amazon-freertos/lib/include/private/list.h"
"${ProjDirPath}/../../../../../rtos/amazon-freertos/lib/include/private/mpu_prototypes.h"
"${ProjDirPath}/../../../../../rtos/amazon-freertos/lib/include/private/mpu_wrappers.h"
"${ProjDirPath}/../../../../../rtos/amazon-freertos/lib/include/private/portable.h"
"${ProjDirPath}/../../../../../rtos/amazon-freertos/lib/include/private/projdefs.h"
"${ProjDirPath}/../../../../../rtos/amazon-freertos/lib/include/private/stack_macros.h"
"${ProjDirPath}/../../../../../rtos/amazon-freertos/lib/include/private/threading_alt.h"
"${ProjDirPath}/../../../../../rtos/amazon-freertos/lib/include/queue.h"
"${ProjDirPath}/../../../../../rtos/amazon-freertos/lib/include/semphr.h"
"${ProjDirPath}/../../../../../rtos/amazon-freertos/lib/include/stream_buffer.h"
"${ProjDirPath}/../../../../../rtos/amazon-freertos/lib/include/task.h"
"${ProjDirPath}/../../../../../rtos/amazon-freertos/lib/include/timers.h"
"${ProjDirPath}/../../../../../rtos/amazon-freertos/lib/FreeRTOS/portable/MemMang/heap_4.c"
"${ProjDirPath}/../../../../../devices/MIMX8MQ6/drivers/fsl_common.c"
"${ProjDirPath}/../../../../../devices/MIMX8MQ6/drivers/fsl_common.h"
"${ProjDirPath}/../../../../../devices/MIMX8MQ6/drivers/fsl_rdc.c"
"${ProjDirPath}/../../../../../devices/MIMX8MQ6/drivers/fsl_rdc.h"
"${ProjDirPath}/../../../../../devices/MIMX8MQ6/MIMX8MQ6_cm4.h"
"${ProjDirPath}/../../../../../devices/MIMX8MQ6/MIMX8MQ6_cm4_features.h"
"${ProjDirPath}/../../../../../devices/MIMX8MQ6/fsl_device_registers.h"
"${ProjDirPath}/../../../../../devices/MIMX8MQ6/system_MIMX8MQ6_cm4.c"
"${ProjDirPath}/../../../../../devices/MIMX8MQ6/system_MIMX8MQ6_cm4.h"
"${ProjDirPath}/../../../../../devices/MIMX8MQ6/utilities/debug_console/fsl_debug_console.c"
"${ProjDirPath}/../../../../../devices/MIMX8MQ6/utilities/debug_console/fsl_debug_console.h"
"${ProjDirPath}/../../../../../devices/MIMX8MQ6/utilities/debug_console/fsl_debug_console_conf.h"
"${ProjDirPath}/../../../../../devices/MIMX8MQ6/utilities/str/fsl_str.c"
"${ProjDirPath}/../../../../../devices/MIMX8MQ6/utilities/str/fsl_str.h"
"${ProjDirPath}/../../../../../components/uart/iuart_adapter.c"
"${ProjDirPath}/../../../../../components/uart/uart.h"
"${ProjDirPath}/../../../../../components/serial_manager/serial_manager.c"
"${ProjDirPath}/../../../../../components/serial_manager/serial_manager.h"
"${ProjDirPath}/../../../../../components/serial_manager/serial_port_internal.h"
"${ProjDirPath}/../../../../../components/serial_manager/serial_port_uart.c"
"${ProjDirPath}/../../../../../components/serial_manager/serial_port_uart.h"
"${ProjDirPath}/../../../../../devices/MIMX8MQ6/drivers/fsl_uart.c"
"${ProjDirPath}/../../../../../devices/MIMX8MQ6/drivers/fsl_uart.h"
"${ProjDirPath}/../../../../../components/lists/generic_list.c"
"${ProjDirPath}/../../../../../components/lists/generic_list.h"
"${ProjDirPath}/../../../../../devices/MIMX8MQ6/gcc/startup_MIMX8MQ6_cm4.S"
"${ProjDirPath}/../../../../../devices/MIMX8MQ6/utilities/fsl_assert.c"
"${ProjDirPath}/../../../../../CMSIS/Include/core_cm4.h"
"${ProjDirPath}/../../../../../CMSIS/Include/arm_common_tables.h"
"${ProjDirPath}/../../../../../CMSIS/Include/arm_const_structs.h"
"${ProjDirPath}/../../../../../CMSIS/Include/arm_math.h"
"${ProjDirPath}/../../../../../CMSIS/Include/cmsis_armcc.h"
"${ProjDirPath}/../../../../../CMSIS/Include/cmsis_armclang.h"
"${ProjDirPath}/../../../../../CMSIS/Include/cmsis_compiler.h"
"${ProjDirPath}/../../../../../CMSIS/Include/cmsis_gcc.h"
"${ProjDirPath}/../../../../../CMSIS/Include/cmsis_iccarm.h"
"${ProjDirPath}/../../../../../CMSIS/Include/cmsis_version.h"
"${ProjDirPath}/../../../../../CMSIS/Include/core_armv8mbl.h"
"${ProjDirPath}/../../../../../CMSIS/Include/core_armv8mml.h"
"${ProjDirPath}/../../../../../CMSIS/Include/mpu_armv7.h"
"${ProjDirPath}/../../../../../CMSIS/Include/mpu_armv8.h"
)


set(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -T${ProjDirPath}/MIMX8MQ6xxxJZ_cm4_ram.ld -static")

set(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -T${ProjDirPath}/MIMX8MQ6xxxJZ_cm4_ram.ld -static")

set(CMAKE_EXE_LINKER_FLAGS_DDR_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DDR_DEBUG} -T${ProjDirPath}/MIMX8MQ6xxxJZ_cm4_ddr_ram.ld -static")

set(CMAKE_EXE_LINKER_FLAGS_DDR_RELEASE "${CMAKE_EXE_LINKER_FLAGS_DDR_RELEASE} -T${ProjDirPath}/MIMX8MQ6xxxJZ_cm4_ddr_ram.ld -static")

TARGET_LINK_LIBRARIES(freertos_tickless.elf -Wl,--start-group)
target_link_libraries(freertos_tickless.elf debug m)

target_link_libraries(freertos_tickless.elf debug c)

target_link_libraries(freertos_tickless.elf debug gcc)

target_link_libraries(freertos_tickless.elf debug nosys)

target_link_libraries(freertos_tickless.elf optimized m)

target_link_libraries(freertos_tickless.elf optimized c)

target_link_libraries(freertos_tickless.elf optimized gcc)

target_link_libraries(freertos_tickless.elf optimized nosys)

target_link_libraries(freertos_tickless.elf optimized m)

target_link_libraries(freertos_tickless.elf optimized c)

target_link_libraries(freertos_tickless.elf optimized gcc)

target_link_libraries(freertos_tickless.elf optimized nosys)

target_link_libraries(freertos_tickless.elf optimized m)

target_link_libraries(freertos_tickless.elf optimized c)

target_link_libraries(freertos_tickless.elf optimized gcc)

target_link_libraries(freertos_tickless.elf optimized nosys)

TARGET_LINK_LIBRARIES(freertos_tickless.elf -Wl,--end-group)

ADD_CUSTOM_COMMAND(TARGET freertos_tickless.elf POST_BUILD COMMAND ${CMAKE_OBJCOPY}
-Obinary ${EXECUTABLE_OUTPUT_PATH}/freertos_tickless.elf ${EXECUTABLE_OUTPUT_PATH}/freertos_tickless.bin)
