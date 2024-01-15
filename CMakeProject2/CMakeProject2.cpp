// CMakeProject2.cpp : Defines the entry point for the application.
//

#include "CMakeProject2.h"
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>

using namespace std;

int main()
{
	cout << "Hello openCV Build ; CMake. vcpkg 2024.0.12. OpenCV4.8.0 " << endl;

	cv::Mat frame;
	cout << "OpenCV: %s" << cv::getBuildInformation() << endl;
	return 0;
}
/* output  of v::getBuildInformation()

Hello openCV Build; CMake.vcpkg 2024.0.12.OpenCV4.8.0


OpenCV: % s
General configuration for OpenCV 4.8.0 ==================================== =
Version control : unknown

Extra modules :
Location(extra) : C : / vcpkg / buildtrees / opencv4 / src / 4.8.0 - 8d756cdf2d.clean / modules
Version control(extra) : unknown

Platform :
Timestamp:                   2024 - 01 - 15T15 : 23 : 30Z
Host : Windows 10.0.19045 AMD64
CMake : 3.27.1
CMake generator : Ninja
CMake build tool : C: / Program Files / Microsoft Visual Studio / 2022 / Community / Common7 / IDE / CommonExtensions / Microsoft / CMake / Ninja / ninja.exe
MSVC : 1938
Configuration : Release

CPU / HW features :
Baseline:                    SSE SSE2 SSE3
requested : SSE3
Dispatched code generation : SSE4_1 SSE4_2 FP16 AVX AVX2 AVX512_SKX
requested : SSE4_1 SSE4_2 AVX FP16 AVX2 AVX512_SKX
SSE4_1(14 files) : +SSSE3 SSE4_1
SSE4_2(1 files) : +SSSE3 SSE4_1 POPCNT SSE4_2
FP16(0 files) : +SSSE3 SSE4_1 POPCNT SSE4_2 FP16 AVX
AVX(7 files) : +SSSE3 SSE4_1 POPCNT SSE4_2 AVX
AVX2(33 files) : +SSSE3 SSE4_1 POPCNT SSE4_2 FP16 FMA3 AVX AVX2
AVX512_SKX(5 files) : +SSSE3 SSE4_1 POPCNT SSE4_2 FP16 FMA3 AVX AVX2 AVX_512F AVX512_COMMON AVX512_SKX

C / C++ :
    Built as dynamic libs ? : YES
    C++ standard : 11
    C++ Compiler : C : / Program Files / Microsoft Visual Studio / 2022 / Community / VC / Tools / MSVC / 14.38.33130 / bin / Hostx64 / x64 / cl.exe(ver 19.38.33133.0)
    C++ flags(Release) : / nologo / DWIN32 / D_WINDOWS / W4 / utf - 8 / GR / MP / D _CRT_SECURE_NO_DEPRECATE / D _CRT_NONSTDC_NO_DEPRECATE / D _SCL_SECURE_NO_WARNINGS / Gy / bigobj / Oi / fp : precise / FS / EHa / wd4127 / wd4251 / wd4324 / wd4275 / wd4512 / wd4589 / wd4819 / MD / O2 / Oi / Gy / DNDEBUG / Z7
    C++ flags(Debug) : / nologo / DWIN32 / D_WINDOWS / W4 / utf - 8 / GR / MP / D _CRT_SECURE_NO_DEPRECATE / D _CRT_NONSTDC_NO_DEPRECATE / D _SCL_SECURE_NO_WARNINGS / Gy / bigobj / Oi / fp : precise / FS / EHa / wd4127 / wd4251 / wd4324 / wd4275 / wd4512 / wd4589 / wd4819 / D_DEBUG / MDd / Z7 / Ob0 / Od / RTC1
    C Compiler : C: / Program Files / Microsoft Visual Studio / 2022 / Community / VC / Tools / MSVC / 14.38.33130 / bin / Hostx64 / x64 / cl.exe
    C flags(Release) : / nologo / DWIN32 / D_WINDOWS / W3 / utf - 8 / MP / D _CRT_SECURE_NO_DEPRECATE / D _CRT_NONSTDC_NO_DEPRECATE / D _SCL_SECURE_NO_WARNINGS / Gy / bigobj / Oi / fp : precise / FS / MD / O2 / Oi / Gy / DNDEBUG / Z7
    C flags(Debug) : / nologo / DWIN32 / D_WINDOWS / W3 / utf - 8 / MP / D _CRT_SECURE_NO_DEPRECATE / D _CRT_NONSTDC_NO_DEPRECATE / D _SCL_SECURE_NO_WARNINGS / Gy / bigobj / Oi / fp : precise / FS / D_DEBUG / MDd / Z7 / Ob0 / Od / RTC1
    Linker flags(Release) : / machine : x64 / nologo / DEBUG / INCREMENTAL : NO / OPT : REF / OPT : ICF / debug
    Linker flags(Debug) : / machine : x64 / nologo / debug / INCREMENTAL
    ccache : NO
    Precompiled headers : NO
    Extra dependencies :
3rdparty dependencies :

OpenCV modules :
To be built : aruco bgsegm bioinspired calib3d ccalib core datasets dnn dnn_objdetect dnn_superres dpm face features2d flann fuzzy hdf hfs highgui img_hash imgcodecs imgproc intensity_transform line_descriptor mcc ml objdetect optflow phase_unwrapping photo plot quality rapid reg saliency shape stereo stitching structured_light superres surface_matching text tracking video videoio videostab wechat_qrcode xfeatures2d ximgproc xobjdetect xphoto
Disabled : rgbd world
Disabled by dependency : -
Unavailable : alphamat cudaarithm cudabgsegm cudacodec cudafeatures2d cudafilters cudaimgproc cudalegacy cudaobjdetect cudaoptflow cudastereo cudawarping cudev cvv freetype gapi java julia matlab ovis python2 python3 sfm ts viz
Applications : -
Documentation : NO
Non - free algorithms : NO

Windows RT support : NO

GUI : WIN32UI
Win32 UI : YES

Media I / O :
    ZLib : C : / vcpkg / installed / x64 - windows / lib / zlib.lib(ver 1.3.0)
    JPEG : C : / vcpkg / installed / x64 - windows / lib / jpeg.lib(ver 62)
    WEBP : (ver 1.3.2)
    PNG : C : / vcpkg / installed / x64 - windows / lib / libpng16.lib(ver 1.6.40)
    TIFF : C : / vcpkg / installed / x64 - windows / lib / tiff.lib(ver 42 / 4.6.0)
    HDR : YES
    SUNRASTER : YES
    PXM : YES
    PFM : YES

    Video I / O :
    DirectShow : YES
    Media Foundation : YES
    DXVA : YES

    Parallel framework : Concurrency

    Trace : YES(built - in)

    Other third - party libraries :
Custom HAL : NO
Protobuf : optimized C : / vcpkg / installed / x64 - windows / bin / libprotobuf.dll debug __location_debug - NOTFOUND   version(3.21.12.0)
Flatbuffers : 23.5.26

NVIDIA CUDA : NO

OpenCL : YES(NVD3D11)
Include path : C: / vcpkg / buildtrees / opencv4 / src / 4.8.0 - 2bf495557d.clean / 3rdparty / include / opencl / 1.2
Link libraries : Dynamic load

Python(for build) : NO

Install to : C: / vcpkg / packages / opencv4_x64 - windows
---------------------------------------------------------------- -

*/