# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.27

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ohomechamadodedos/UdC/CS-PRO1-PRACTICES

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ohomechamadodedos/UdC/CS-PRO1-PRACTICES/build

# Include any dependencies generated for this target.
include CMakeFiles/pro1.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/pro1.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/pro1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/pro1.dir/flags.make

CMakeFiles/pro1.dir/main.c.o: CMakeFiles/pro1.dir/flags.make
CMakeFiles/pro1.dir/main.c.o: /home/ohomechamadodedos/UdC/CS-PRO1-PRACTICES/main.c
CMakeFiles/pro1.dir/main.c.o: CMakeFiles/pro1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/ohomechamadodedos/UdC/CS-PRO1-PRACTICES/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/pro1.dir/main.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/pro1.dir/main.c.o -MF CMakeFiles/pro1.dir/main.c.o.d -o CMakeFiles/pro1.dir/main.c.o -c /home/ohomechamadodedos/UdC/CS-PRO1-PRACTICES/main.c

CMakeFiles/pro1.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/pro1.dir/main.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ohomechamadodedos/UdC/CS-PRO1-PRACTICES/main.c > CMakeFiles/pro1.dir/main.c.i

CMakeFiles/pro1.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/pro1.dir/main.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ohomechamadodedos/UdC/CS-PRO1-PRACTICES/main.c -o CMakeFiles/pro1.dir/main.c.s

# Object files for target pro1
pro1_OBJECTS = \
"CMakeFiles/pro1.dir/main.c.o"

# External object files for target pro1
pro1_EXTERNAL_OBJECTS =

pro1: CMakeFiles/pro1.dir/main.c.o
pro1: CMakeFiles/pro1.dir/build.make
pro1: CMakeFiles/pro1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/ohomechamadodedos/UdC/CS-PRO1-PRACTICES/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable pro1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/pro1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/pro1.dir/build: pro1
.PHONY : CMakeFiles/pro1.dir/build

CMakeFiles/pro1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/pro1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/pro1.dir/clean

CMakeFiles/pro1.dir/depend:
	cd /home/ohomechamadodedos/UdC/CS-PRO1-PRACTICES/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ohomechamadodedos/UdC/CS-PRO1-PRACTICES /home/ohomechamadodedos/UdC/CS-PRO1-PRACTICES /home/ohomechamadodedos/UdC/CS-PRO1-PRACTICES/build /home/ohomechamadodedos/UdC/CS-PRO1-PRACTICES/build /home/ohomechamadodedos/UdC/CS-PRO1-PRACTICES/build/CMakeFiles/pro1.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/pro1.dir/depend

