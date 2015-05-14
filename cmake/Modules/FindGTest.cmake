# FindGTEST
# --------
# Defines:
# GTEST_FOUND - true if GTEST has been found and can be used
# GTEST_INCLUDE_DIRS - include directories for GTEST
# GTEST_LIBRARIES - libraries to link against GTEST



set (GTEST_ROOT_DIR "${PROJECT_SOURCE_DIR}/external/gtest")

add_subdirectory (${GTEST_ROOT_DIR} gtest)

set (GTEST_FOUND true)
set (GTEST_INCLUDE_DIRS "${GTEST_ROOT_DIR}/include")
set (GTEST_LIBRARIES gtest)
