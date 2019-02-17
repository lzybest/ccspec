workspace(name = "ccspec")

load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

# using cut for xunit test framework.
# curl -L https://github.com/horance-liu/cut/archive/v1.0.tar.gz | sha256sum
http_archive(                                                                                                   
    name = "xunit_cut",
    sha256 = "ade2831913d5be97edaa87c3f7d047262a59e266c30ff0a5f2d3edac08b4480e",
    strip_prefix = "cut-release-v1.0",
    urls = [ 
        "https://github.com/horance-liu/cut/archive/release-v1.0.tar.gz",
    ],  
)

