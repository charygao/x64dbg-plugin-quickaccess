#ifndef QUICKACCESS_GLOBAL_H
#define QUICKACCESS_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(QUICKACCESS_LIBRARY)
#  define QUICKACCESSSHARED_EXPORT Q_DECL_EXPORT
#else
#  define QUICKACCESSSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // QUICKACCESS_GLOBAL_H
