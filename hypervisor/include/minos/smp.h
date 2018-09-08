#ifndef _MINOS_SMP_H_
#define _MINOS_SMP_H_

#include <minos/types.h>
#include <minos/percpu.h>
#include <minos/bitmap.h>
#include <config/config.h>

#define NR_CPUS		CONFIG_NR_CPUS

#define for_all_cpu(cpu)	\
	for (cpu = 0; cpu < NR_CPUS; cpu++)

void smp_cpus_up(void);
void smp_init(void);

#endif
