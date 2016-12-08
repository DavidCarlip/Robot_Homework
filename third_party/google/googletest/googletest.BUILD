licenses([‘permissive’])

cc_library (
  srcs = glob([
    ‘googletest/src/*’,
    ‘googletest/include/gtest/internal/**/*.h’
  ], exclude = [‘googletest/src/gtest-all.cc’]),
  hdrs = glob([‘googletest/include/gtest/*.h’]),
  includes = [
    ‘googletest/include’,
    ‘googletest’
  ],
  linkopts = [‘-lpthread’]
  visibility = [‘//visibility:public’]
)
