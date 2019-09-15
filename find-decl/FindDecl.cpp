#include "DeclFindingAction.h"

#include "clang/Tooling/CommonOptionsParser.h"
#include "clang/Tooling/Tooling.h"

#include <ostream>

static llvm::cl::extrahelp CommonHelp(clang::tooling::CommonOptionsParser::HelpMessage);
llvm::cl::OptionCategory FindDeclCategory("find-decl options");

#define FIND_DECL_VERSION "0.0.1"

static char FindDeclUsage[] = "find-decl <source file>";

int main(int argc, const char **argv) {
  llvm::cl::SetVersionPrinter([](llvm::raw_ostream &OS) { OS << "find-decl version: " << FIND_DECL_VERSION << "\n"; });
  clang::tooling::CommonOptionsParser option(argc, argv, FindDeclCategory, FindDeclUsage);

  auto files = option.getSourcePathList();
  clang::tooling::ClangTool tool(option.getCompilations(), files);

  return tool.run(clang::tooling::newFrontendActionFactory<DeclFindingAction>().get());
}

