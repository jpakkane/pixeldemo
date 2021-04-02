project('pixeldemo', 'cpp',
    default_options: ['cpp_std=c++17',
                      'default_library=static',
                      'buildtype=debugoptimized'])

pge_dep = dependency('pixelengine')

executable('pixeldemo', 'pixeldemo.cpp',
    dependencies: pge_dep)
