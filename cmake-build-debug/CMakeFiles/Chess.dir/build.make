# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /cygdrive/c/Users/darkm/.CLion2017.2/system/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/darkm/.CLion2017.2/system/cygwin_cmake/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/cygdrive/c/Users/darkm/Documents/Summer 2018/Summer Code/Chess"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/cygdrive/c/Users/darkm/Documents/Summer 2018/Summer Code/Chess/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Chess.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Chess.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Chess.dir/flags.make

CMakeFiles/Chess.dir/main.cpp.o: CMakeFiles/Chess.dir/flags.make
CMakeFiles/Chess.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/c/Users/darkm/Documents/Summer 2018/Summer Code/Chess/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Chess.dir/main.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Chess.dir/main.cpp.o -c "/cygdrive/c/Users/darkm/Documents/Summer 2018/Summer Code/Chess/main.cpp"

CMakeFiles/Chess.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Chess.dir/main.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/c/Users/darkm/Documents/Summer 2018/Summer Code/Chess/main.cpp" > CMakeFiles/Chess.dir/main.cpp.i

CMakeFiles/Chess.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Chess.dir/main.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/c/Users/darkm/Documents/Summer 2018/Summer Code/Chess/main.cpp" -o CMakeFiles/Chess.dir/main.cpp.s

CMakeFiles/Chess.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/Chess.dir/main.cpp.o.requires

CMakeFiles/Chess.dir/main.cpp.o.provides: CMakeFiles/Chess.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/Chess.dir/build.make CMakeFiles/Chess.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/Chess.dir/main.cpp.o.provides

CMakeFiles/Chess.dir/main.cpp.o.provides.build: CMakeFiles/Chess.dir/main.cpp.o


# Object files for target Chess
Chess_OBJECTS = \
"CMakeFiles/Chess.dir/main.cpp.o"

# External object files for target Chess
Chess_EXTERNAL_OBJECTS =

Chess.exe: CMakeFiles/Chess.dir/main.cpp.o
Chess.exe: CMakeFiles/Chess.dir/build.make
Chess.exe: CMakeFiles/Chess.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/cygdrive/c/Users/darkm/Documents/Summer 2018/Summer Code/Chess/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Chess.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Chess.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Chess.dir/build: Chess.exe

.PHONY : CMakeFiles/Chess.dir/build

CMakeFiles/Chess.dir/requires: CMakeFiles/Chess.dir/main.cpp.o.requires

.PHONY : CMakeFiles/Chess.dir/requires

CMakeFiles/Chess.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Chess.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Chess.dir/clean

CMakeFiles/Chess.dir/depend:
	cd "/cygdrive/c/Users/darkm/Documents/Summer 2018/Summer Code/Chess/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/cygdrive/c/Users/darkm/Documents/Summer 2018/Summer Code/Chess" "/cygdrive/c/Users/darkm/Documents/Summer 2018/Summer Code/Chess" "/cygdrive/c/Users/darkm/Documents/Summer 2018/Summer Code/Chess/cmake-build-debug" "/cygdrive/c/Users/darkm/Documents/Summer 2018/Summer Code/Chess/cmake-build-debug" "/cygdrive/c/Users/darkm/Documents/Summer 2018/Summer Code/Chess/cmake-build-debug/CMakeFiles/Chess.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Chess.dir/depend

