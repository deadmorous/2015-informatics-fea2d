#ifndef MESHGEN2D_GLOBAL_H
#define MESHGEN2D_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(MESHGEN2D_LIBRARY)
#  define MESHGEN2DSHARED_EXPORT Q_DECL_EXPORT
#else
#  define MESHGEN2DSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // MESHGEN2D_GLOBAL_H
