cmake_minimum_required(VERSION 2.6)

project(RENDER_OPL3)

set(SOURCES
	main.cpp
	mfile.cpp
	ymf262.cpp
)

add_executable (render_opl3
	${SOURCES}
)

#include_directories("${PROJECT_BINARY_DIR}" "${KS_PATH}" "${RUNTIME_SRC_PATH}")

#add_test(ks_tests ks_tests)

#enable_testing()
