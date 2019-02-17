package(                                                                                                          
    default_visibility = [ 
        "//visibility:public",
    ],  
)

licenses(["notice"])  # Apache 2.0

cc_library(
    name = "geometry",
    hdrs = ["geometry.h"],
    srcs = ["geometry.cc"],
)

# bazel build //ccspec/math:geometry_test
cc_binary(
    name = "geometry_test",
    srcs = ["geometry_test.cc"],
    deps = [ 
        ":geometry",
    ],  
)
