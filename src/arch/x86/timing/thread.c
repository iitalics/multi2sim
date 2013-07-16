/*
 *  Multi2Sim
 *  Copyright (C) 2012  Rafael Ubal (ubal@ece.neu.edu)
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#include <arch/common/timing.h>
#include <arch/x86/emu/context.h>
#include <lib/esim/trace.h>
#include <lib/mhandle/mhandle.h>
#include <lib/util/debug.h>
#include <lib/util/list.h>
#include <lib/util/string.h>

#include "core.h"
#include "cpu.h"
#include "fetch-queue.h"
#include "thread.h"
#include "uop-queue.h"


/*
 * Class 'X86Thread'
 */

CLASS_IMPLEMENTATION(X86Thread);

void X86ThreadCreate(X86Thread *self, X86Core *core)
{
	/* Initialize */
	self->core = core;
	self->cpu = core->cpu;
}


void X86ThreadDestroy(X86Thread *self)
{
	self->name = str_free(self->name);
}


void X86ThreadSetName(X86Thread *self, char *name)
{
	self->name = str_set(self->name, name);
}


int X86ThreadIsPipelineEmpty(X86Thread *self)
{
	return !self->rob_count && !self->fetch_queue->count &&
			!self->uop_queue->count;
}