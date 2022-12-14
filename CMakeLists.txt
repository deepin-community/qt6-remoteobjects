cmake_minimum_required(VERSION 3.16)

include(.cmake.conf)
project(QtRemoteObjects
    VERSION "${QT_REPO_MODULE_VERSION}"
    DESCRIPTION "Qt RemoteObjects Libraries"
    HOMEPAGE_URL "https://qt.io/"
    LANGUAGES CXX C
)

# Make sure we only use latest private CMake API, aka no compatibility wrappers.
set(QT_NO_INTERNAL_COMPATIBILITY_FUNCTIONS TRUE)

# Make sure we use the fixed BASE argument of qt_add_resource.
set(QT_USE_FIXED_QT_ADD_RESOURCE_BASE TRUE)

find_package(Qt6 ${PROJECT_VERSION} CONFIG REQUIRED COMPONENTS BuildInternals Core Network)
find_package(Qt6 ${PROJECT_VERSION} CONFIG OPTIONAL_COMPONENTS Gui Widgets Quick QuickTest)

if(NOT TARGET Qt::Network)
    message(NOTICE "Skipping the build as the condition \"TARGET Qt::Network\" is not met.")
    return()
endif()
qt_build_repo()

if(NOT QT_BUILD_STANDALONE_TESTS)
    # Copy mkspecs for users preferring qmake builds
    set(mkspecs_install_dir "${INSTALL_MKSPECSDIR}")
    qt_path_join(mkspecs_install_dir ${QT_INSTALL_DIR} ${mkspecs_install_dir})

    qt_copy_or_install(DIRECTORY mkspecs/
        DESTINATION "${mkspecs_install_dir}"
        FILES_MATCHING PATTERN "*.pr[if]"
    )
endif()
