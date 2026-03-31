#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-variable"
#endif

#include "napi.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic pop
#endif

extern "C" TSLanguage *tree_sitter_log();

Napi::Object Init(Napi::Env env, Napi::Object exports) {
  exports["name"] = Napi::String::New(env, "log");
  exports["language"] = Napi::External<TSLanguage>::New(env, (TSLanguage *)tree_sitter_log());
  return exports;
}

NODE_API_MODULE(tree_sitter_log_binding, Init)
