/* Test cosh.
   Copyright (C) 1997-2017 Free Software Foundation, Inc.
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

static const struct test_f_f_data cosh_test_data[] =
  {
    TEST_f_f (cosh, plus_infty, plus_infty, ERRNO_UNCHANGED|NO_TEST_INLINE),
    TEST_f_f (cosh, minus_infty, plus_infty, ERRNO_UNCHANGED|NO_TEST_INLINE),
    TEST_f_f (cosh, qnan_value, qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED),
    TEST_f_f (cosh, -qnan_value, qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED),
    TEST_f_f (cosh, snan_value, qnan_value, INVALID_EXCEPTION),
    TEST_f_f (cosh, -snan_value, qnan_value, INVALID_EXCEPTION),

    AUTO_TESTS_f_f (cosh),
  };

static void
cosh_test (void)
{
  ALL_RM_TEST (cosh, 0, cosh_test_data, RUN_TEST_LOOP_f_f, END);
}

/*
 * Local Variables:
 * mode:c
 * End:
 */