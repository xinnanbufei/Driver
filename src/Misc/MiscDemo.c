/*
 * MiscDemo.c
 *
 *  Created on: Sep 3, 2023
 *      Author: neware
 */

#include <linux/module.h>		/* Needed by all modules */
#include <linux/kernel.h>		/* Needed for KERN_INFO */
#include <linux/init.h>    	 	/* Needed for the macros */

static int __init hello_init(void)
{
    printk(KERN_INFO "Hello, Misc\n");
    return 0;
}

static void __exit hello_exit(void)
{
    printk(KERN_INFO "Goodbye, Misc\n");
}

module_init(hello_init);
module_exit(hello_exit);
MODULE_LICENSE("GPL");
