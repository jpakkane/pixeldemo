project('pixeldemo', 'cpp',
    default_options: ['cpp_std=c++17',
                      'default_library=static',
                      'buildtype=debugoptimized'])

pge_dep = dependency('pixelengine')
lua_dep = dependency('lua-5.3')

executable('pixeldemo', 'pixeldemo.cpp',
    dependencies: [pge_dep, lua_dep])
