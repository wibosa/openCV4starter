# CMakeList.txt : CMake project for CMakeProject2, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (CMakeProject2 "CMakeProject2.cpp" "CMakeProject2.h")
set(CMAKE_TOOLCHAIN_FILE C:/vcpkg/scripts/buildsystems/vcpkg.cmake)

#set(OpenCV_DIR "${VCPKG_INSTALLED_DIR}/x64-windows/share/opencv2")

#set(OpenCV_DIR "C:/VCPKG/installed/x64-windows/share/opencv2")


#set(OpenCV_DIR "${VCPKG_INSTALLED_DIR}/x64-windows/share/opencv4")
set(OpenCV_DIR "C:/VCPKG/installed/x64-windows/share/opencv4")

find_package(OpenCV REQUIRED)
find_package(OpenCV CONFIG REQUIRED)
    # Note: 10 target(s) were omitted.
#target_link_libraries(CMakeProject2 PRIVATE opencv_ml opencv_dnn opencv_core opencv_flann)
target_link_libraries(CMakeProject2 PRIVATE opencv_core )
# include_directories(${OpenCV_INCLUDE_DIRS})

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET CMakeProject2 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed