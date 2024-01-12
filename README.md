# ced
ced is a borderline unusable and probably not very portable CLI text editor for Linux using ncurses.

## Usage:
ced <b>[filename]</b>

if the specified <b>filename</b> does not point to an existing file, a temporary file will be created and a new file will be created upon saving.

## Build instructions:
on Debian, install the ncurses library with <br><br>
 `apt install libncurses-dev` <br><br>
or use your distros package manager to install them,
and use `make` to build the project.