/* $Id: session.h 2 2009-10-12 09:51:22Z mamonski $ */
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

#ifndef __LSF_DRMAA__SESSION_H
#define __LSF_DRMAA__SESSION_H

#ifdef HAVE_CONFIG_H
#	include <config.h>
#endif

#include <drmaa_utils/session.h>

typedef struct lsfdrmaa_session_s lsfdrmaa_session_t;

fsd_drmaa_session_t *
lsfdrmaa_session_new( const char *contact );

struct lsfdrmaa_session_s {
	fsd_drmaa_session_t super;
	void (*
	super_apply_configuration)(
			fsd_drmaa_session_t *self
			);
	bool prepand_report_to_output;
};

#endif /* __LSF_DRMAA__SESSION_H */

