project(find-decl)

add_executable(${PROJECT_NAME} FindDecl.cpp)

target_link_libraries(${PROJECT_NAME}
PRIVATE
  clangAST
  clangBasic
  clangFrontend
  clangIndex
  clangRewrite
  clangTooling
)

target_include_directories(${PROJECT_NAME} PRIVATE ${CLANG_INCLUDE_DIRS})

install(TARGETS ${PROJECT_NAME} RUNTIME DESTINATION bin)
