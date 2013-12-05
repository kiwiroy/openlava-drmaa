# $Id: Makefile.am 2304 2009-04-09 16:27:37Z lukasz $
#
# FedStage DRMAA for LSF
# Copyright (C) 2007-2008  FedStage Systems
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#    http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

RAGEL = @RAGEL@
RAGELFLAGS = 

lib_LTLIBRARIES = libdrmaa.la
libdrmaa_la_SOURCES = \
 drmaa.c \
 job.c job.h \
 native.c native.h \
 session.c session.h \
 util.c util.h

libdrmaa_la_CPPFLAGS =  -I$(top_srcdir)/drmaa_utils/ -I$(top_srcdir)/lsf_drmaa @LSF_INCLUDES@
if GCC
  libdrmaa_la_CPPFLAGS += -Wno-long-long
endif

libdrmaa_la_LIBADD = ../drmaa_utils/drmaa_utils/libdrmaa_utils.la @LSF_LIBS@
libdrmaa_la_LDFLAGS = @LSF_LDFLAGS@ \
  -version-info @LSF_DRMAA_VERSION_INFO@

native.c : native.rl
	$(RAGEL) $(RAGELFLAGS) -o native.c native.rl

EXTRA_DIST = native.rl
BUILT_SOURCES = native.c

if DEVELOPER_MODE
  CLEANFILES = $(BUILT_SOURCES)
endif

if GCC
native.lo: CFLAGS += -Wno-unused
endif

dist_sysconf_DATA = lsf_drmaa.conf.example
