void log_printKernelVersion() {
	#include <log/printk.h>
	printk(LOG_NOTICE,"The Lapis Kernel - 0.0.0.1 - Copyright (C) Corwin McKnight 2015\n");
	printk(LOG_NOTICE,"This software is in the early stages of development - Be wary when using it.\n");
}