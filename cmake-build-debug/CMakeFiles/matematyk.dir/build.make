# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.12

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2018.2.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2018.2.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\A21411\Desktop\Projekty\Matematyk

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\A21411\Desktop\Projekty\Matematyk\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Matematyk.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Matematyk.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Matematyk.dir/flags.make

CMakeFiles/Matematyk.dir/main.c.obj: CMakeFiles/Matematyk.dir/flags.make
CMakeFiles/Matematyk.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\A21411\Desktop\Projekty\Matematyk\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Matematyk.dir/main.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Matematyk.dir\main.c.obj   -c C:\Users\A21411\Desktop\Projekty\Matematyk\main.c

CMakeFiles/Matematyk.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Matematyk.dir/main.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\A21411\Desktop\Projekty\Matematyk\main.c > CMakeFiles\Matematyk.dir\main.c.i

CMakeFiles/Matematyk.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Matematyk.dir/main.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\A21411\Desktop\Projekty\Matematyk\main.c -o CMakeFiles\Matematyk.dir\main.c.s

# Object files for target Matematyk
Matematyk_OBJECTS = \
"CMakeFiles/Matematyk.dir/main.c.obj"

# External object files for target Matematyk
Matematyk_EXTERNAL_OBJECTS =

Matematyk.exe: CMakeFiles/Matematyk.dir/main.c.obj
Matematyk.exe: CMakeFiles/Matematyk.dir/build.make
Matematyk.exe: CMakeFiles/Matematyk.dir/linklibs.rsp
Matematyk.exe: CMakeFiles/Matematyk.dir/objects1.rsp
Matematyk.exe: CMakeFiles/Matematyk.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\A21411\Desktop\Projekty\Matematyk\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Matematyk.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Matematyk.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Matematyk.dir/build: Matematyk.exe

.PHONY : CMakeFiles/Matematyk.dir/build

CMakeFiles/Matematyk.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Matematyk.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Matematyk.dir/clean

CMakeFiles/Matematyk.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\A21411\Desktop\Projekty\Matematyk C:\Users\A21411\Desktop\Projekty\Matematyk C:\Users\A21411\Desktop\Projekty\Matematyk\cmake-build-debug C:\Users\A21411\Desktop\Projekty\Matematyk\cmake-build-debug C:\Users\A21411\Desktop\Projekty\Matematyk\cmake-build-debug\CMakeFiles\Matematyk.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Matematyk.dir/depend

