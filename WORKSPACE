workspace(
  name = "dork_fortress",
)

load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

http_archive(
  name = "com_google_absl",
  urls = [
    "https://github.com/abseil/abseil-cpp/archive/98eb410c93ad059f9bba1bf43f5bb916fc92a5ea.zip",
  ],
  strip_prefix = "abseil-cpp-98eb410c93ad059f9bba1bf43f5bb916fc92a5ea",
)

http_archive(
  name = "bazel_skylib",
  urls = [
    "https://github.com/bazelbuild/bazel-skylib/releases/download/1.2.1/bazel-skylib-1.2.1.tar.gz",
  ],
  sha256 = "f7be3474d42aae265405a592bb7da8e171919d74c16f082a5457840f06054728",
)

http_archive(
  name = "com_google_googletest",
  urls = [
    "https://github.com/google/googletest/archive/011959aafddcd30611003de96cfd8d7a7685c700.zip",
  ],
  strip_prefix = "googletest-011959aafddcd30611003de96cfd8d7a7685c700",
)

