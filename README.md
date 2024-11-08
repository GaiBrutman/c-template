# c-template

A C project cookiecutter

## Library

Using meson for compilation and conan for library managment.

### Structure

src/                All .c files
include/
    <LIBRARY_NAME>  All .h files. Uses as "#include <LIBRARY_NAME>/header.h"

### Dependencies

- [meson](https://mesonbuild.com/) for building.
- [ninja](https://ninja-build.org/) for building.
- [conan](https://conan.io/) for package management.

### Building

```bash
conan install . --output-folder=build --build=missing # Install dependencies
meson setup --native-file build/conan_meson_native.ini build
meson compile -C build/
```
