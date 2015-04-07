#ifndef VISUALIZER2D_GLOBAL_H
#define VISUALIZER2D_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(VISUALIZER2D_LIBRARY)
#  define VISUALIZER2DSHARED_EXPORT Q_DECL_EXPORT
#else
#  define VISUALIZER2DSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // VISUALIZER2D_GLOBAL_H
