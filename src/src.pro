TEMPLATE = subdirs
SUBDIRS += boilerplatelib main.pro
#needs the static lib
main.pro.depends = boilerplatelib
