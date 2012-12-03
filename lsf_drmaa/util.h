/* $Id: util.h 2 2009-10-12 09:51:22Z mamonski $ */
/*
 * FedStage DRMAA for LSF
 * Copyright (C) 2007-2008  FedStage Systems
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef __LSF_DRMAA__UTIL_H
#define __LSF_DRMAA__UTIL_H

#ifdef HAVE_CONFIG_H
#	include <config.h>
#endif

#include <lsf/lsbatch.h>

struct jobInfoEnt *
lsfdrmaa_copy_job_info( const struct jobInfoEnt *job_info );
void lsfdrmaa_free_job_info( struct jobInfoEnt *job_info );
void lsfdrmaa_free_submit_req( struct submit *req, bool free_req );
void lsfdrmaa_dump_submit_req( struct submit *req );

void
fsd_exc_raise_lsf( const char *function )
	__attribute__(( noreturn ));

int lsfdrmaa_map_lsberrno( int _lsberrno );
int lsfdrmaa_map_lserrno( int _lserrno );

#endif /* __LSF_DRMAA__UTIL_H */
