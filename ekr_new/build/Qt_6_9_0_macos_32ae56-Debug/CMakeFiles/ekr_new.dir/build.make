# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.30

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
CMAKE_COMMAND = /Users/admin/Qt/Tools/CMake/CMake.app/Contents/bin/cmake

# The command to remove a file.
RM = /Users/admin/Qt/Tools/CMake/CMake.app/Contents/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/admin/Desktop/qt projects/ekr_new"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/admin/Desktop/qt projects/ekr_new/build/Qt_6_9_0_macos_32ae56-Debug"

# Include any dependencies generated for this target.
include CMakeFiles/ekr_new.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/ekr_new.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/ekr_new.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ekr_new.dir/flags.make

ekr_new_autogen/timestamp: /Users/admin/Qt/6.9.0/macos/libexec/moc
ekr_new_autogen/timestamp: /Users/admin/Qt/6.9.0/macos/libexec/uic
ekr_new_autogen/timestamp: CMakeFiles/ekr_new.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir="/Users/admin/Desktop/qt projects/ekr_new/build/Qt_6_9_0_macos_32ae56-Debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target ekr_new"
	/Users/admin/Qt/Tools/CMake/CMake.app/Contents/bin/cmake -E cmake_autogen "/Users/admin/Desktop/qt projects/ekr_new/build/Qt_6_9_0_macos_32ae56-Debug/CMakeFiles/ekr_new_autogen.dir/AutogenInfo.json" Debug
	/Users/admin/Qt/Tools/CMake/CMake.app/Contents/bin/cmake -E touch "/Users/admin/Desktop/qt projects/ekr_new/build/Qt_6_9_0_macos_32ae56-Debug/ekr_new_autogen/timestamp"

CMakeFiles/ekr_new.dir/ekr_new_autogen/mocs_compilation.cpp.o: CMakeFiles/ekr_new.dir/flags.make
CMakeFiles/ekr_new.dir/ekr_new_autogen/mocs_compilation.cpp.o: ekr_new_autogen/mocs_compilation.cpp
CMakeFiles/ekr_new.dir/ekr_new_autogen/mocs_compilation.cpp.o: CMakeFiles/ekr_new.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/Users/admin/Desktop/qt projects/ekr_new/build/Qt_6_9_0_macos_32ae56-Debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ekr_new.dir/ekr_new_autogen/mocs_compilation.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ekr_new.dir/ekr_new_autogen/mocs_compilation.cpp.o -MF CMakeFiles/ekr_new.dir/ekr_new_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/ekr_new.dir/ekr_new_autogen/mocs_compilation.cpp.o -c "/Users/admin/Desktop/qt projects/ekr_new/build/Qt_6_9_0_macos_32ae56-Debug/ekr_new_autogen/mocs_compilation.cpp"

CMakeFiles/ekr_new.dir/ekr_new_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/ekr_new.dir/ekr_new_autogen/mocs_compilation.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/admin/Desktop/qt projects/ekr_new/build/Qt_6_9_0_macos_32ae56-Debug/ekr_new_autogen/mocs_compilation.cpp" > CMakeFiles/ekr_new.dir/ekr_new_autogen/mocs_compilation.cpp.i

CMakeFiles/ekr_new.dir/ekr_new_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/ekr_new.dir/ekr_new_autogen/mocs_compilation.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/admin/Desktop/qt projects/ekr_new/build/Qt_6_9_0_macos_32ae56-Debug/ekr_new_autogen/mocs_compilation.cpp" -o CMakeFiles/ekr_new.dir/ekr_new_autogen/mocs_compilation.cpp.s

CMakeFiles/ekr_new.dir/main.cpp.o: CMakeFiles/ekr_new.dir/flags.make
CMakeFiles/ekr_new.dir/main.cpp.o: /Users/admin/Desktop/qt\ projects/ekr_new/main.cpp
CMakeFiles/ekr_new.dir/main.cpp.o: CMakeFiles/ekr_new.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/Users/admin/Desktop/qt projects/ekr_new/build/Qt_6_9_0_macos_32ae56-Debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/ekr_new.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ekr_new.dir/main.cpp.o -MF CMakeFiles/ekr_new.dir/main.cpp.o.d -o CMakeFiles/ekr_new.dir/main.cpp.o -c "/Users/admin/Desktop/qt projects/ekr_new/main.cpp"

CMakeFiles/ekr_new.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/ekr_new.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/admin/Desktop/qt projects/ekr_new/main.cpp" > CMakeFiles/ekr_new.dir/main.cpp.i

CMakeFiles/ekr_new.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/ekr_new.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/admin/Desktop/qt projects/ekr_new/main.cpp" -o CMakeFiles/ekr_new.dir/main.cpp.s

CMakeFiles/ekr_new.dir/mainwindow.cpp.o: CMakeFiles/ekr_new.dir/flags.make
CMakeFiles/ekr_new.dir/mainwindow.cpp.o: /Users/admin/Desktop/qt\ projects/ekr_new/mainwindow.cpp
CMakeFiles/ekr_new.dir/mainwindow.cpp.o: CMakeFiles/ekr_new.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/Users/admin/Desktop/qt projects/ekr_new/build/Qt_6_9_0_macos_32ae56-Debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/ekr_new.dir/mainwindow.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ekr_new.dir/mainwindow.cpp.o -MF CMakeFiles/ekr_new.dir/mainwindow.cpp.o.d -o CMakeFiles/ekr_new.dir/mainwindow.cpp.o -c "/Users/admin/Desktop/qt projects/ekr_new/mainwindow.cpp"

CMakeFiles/ekr_new.dir/mainwindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/ekr_new.dir/mainwindow.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/admin/Desktop/qt projects/ekr_new/mainwindow.cpp" > CMakeFiles/ekr_new.dir/mainwindow.cpp.i

CMakeFiles/ekr_new.dir/mainwindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/ekr_new.dir/mainwindow.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/admin/Desktop/qt projects/ekr_new/mainwindow.cpp" -o CMakeFiles/ekr_new.dir/mainwindow.cpp.s

# Object files for target ekr_new
ekr_new_OBJECTS = \
"CMakeFiles/ekr_new.dir/ekr_new_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/ekr_new.dir/main.cpp.o" \
"CMakeFiles/ekr_new.dir/mainwindow.cpp.o"

# External object files for target ekr_new
ekr_new_EXTERNAL_OBJECTS =

ekr_new.app/Contents/MacOS/ekr_new: CMakeFiles/ekr_new.dir/ekr_new_autogen/mocs_compilation.cpp.o
ekr_new.app/Contents/MacOS/ekr_new: CMakeFiles/ekr_new.dir/main.cpp.o
ekr_new.app/Contents/MacOS/ekr_new: CMakeFiles/ekr_new.dir/mainwindow.cpp.o
ekr_new.app/Contents/MacOS/ekr_new: CMakeFiles/ekr_new.dir/build.make
ekr_new.app/Contents/MacOS/ekr_new: /Users/admin/Qt/6.9.0/macos/lib/QtWidgets.framework/Versions/A/QtWidgets
ekr_new.app/Contents/MacOS/ekr_new: /Users/admin/Qt/6.9.0/macos/lib/QtGui.framework/Versions/A/QtGui
ekr_new.app/Contents/MacOS/ekr_new: /Users/admin/Qt/6.9.0/macos/lib/QtCore.framework/Versions/A/QtCore
ekr_new.app/Contents/MacOS/ekr_new: CMakeFiles/ekr_new.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="/Users/admin/Desktop/qt projects/ekr_new/build/Qt_6_9_0_macos_32ae56-Debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable ekr_new.app/Contents/MacOS/ekr_new"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ekr_new.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ekr_new.dir/build: ekr_new.app/Contents/MacOS/ekr_new
.PHONY : CMakeFiles/ekr_new.dir/build

CMakeFiles/ekr_new.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ekr_new.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ekr_new.dir/clean

CMakeFiles/ekr_new.dir/depend: ekr_new_autogen/timestamp
	cd "/Users/admin/Desktop/qt projects/ekr_new/build/Qt_6_9_0_macos_32ae56-Debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/admin/Desktop/qt projects/ekr_new" "/Users/admin/Desktop/qt projects/ekr_new" "/Users/admin/Desktop/qt projects/ekr_new/build/Qt_6_9_0_macos_32ae56-Debug" "/Users/admin/Desktop/qt projects/ekr_new/build/Qt_6_9_0_macos_32ae56-Debug" "/Users/admin/Desktop/qt projects/ekr_new/build/Qt_6_9_0_macos_32ae56-Debug/CMakeFiles/ekr_new.dir/DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/ekr_new.dir/depend

