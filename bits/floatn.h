/* Macros to control TS 18661-3 glibc features.
   Copyright (C) 2016 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

/* Defined if the current compiler invocation supports _Float128 or
   __float128 as an additional floating-point type.  */
#define __HAVE_FLOAT128 0

/* Defined if support for _Float128 is present.  This implies
   support for ISO/IEC TS-18661-3, meaning that architectures that
   define this macro use __GLIBC_USE (IEC_60559_TYPES_EXT).  */
#define __USE_FLOAT128 0

/* Defined for GCC versions which support the __float128 type, but not
   _Complex __float128.  This resolves to a complex binary128 type.  */
#undef __CFLOAT128