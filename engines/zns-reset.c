/*
 * zns-reset: ioengine for ZNS reset interference benchmarks in io_uring passthrough mode
 *
 * IO engine that issues concurrent ZNS Reset and read/write commands to ZNS zones.
 * Reset and read commands are issued to a fully written subset of zones, as these require data to be present in the zone, whereas write commands are issued to empty zones.
 *
 * Portions of this engine are based on the io_uring engine for passthrough mode
 *
 */
#include <stdio.h>
#include <errno.h>

#include "../fio.h"

