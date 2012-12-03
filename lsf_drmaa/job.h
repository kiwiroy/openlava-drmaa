/* $Id: job.h 2 2009-10-12 09:51:22Z mamonski $ */
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

#ifndef __LSF_DRMAA__JOB_H
#define __LSF_DRMAA__JOB_H

#ifdef HAVE_CONFIG_H
#	include <config.h>
#endif

#include <lsf/lsbatch.h>

#include <drmaa_utils/job.h>
#include <drmaa_utils/environ.h>

typedef struct lsfdrmaa_job_s lsfdrmaa_job_t;

fsd_job_t *
lsfdrmaa_job_new( char *job_id );

struct lsfdrmaa_job_s {
	fsd_job_t super;

	void (*
	read_job_info)( fsd_job_t *job, struct jobInfoEnt *job_info );

	LS_LONG_INT int_job_id;
};

struct submit *
lsfdrmaa_job_create_req(
		fsd_drmaa_session_t *session,
		const fsd_template_t *jt, fsd_environ_t **envp
		);

#endif /* __LSF_DRMAA__JOB_H */

