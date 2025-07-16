/*
 * main.c - Trivial counting kernel module.
 */
#include <linux/init.h>
#include <linux/module.h>
#include <linux/printk.h>

static int __init counter_init(void) {
  pr_info("In the beginning...\n");

  return 0;
}

static void __exit counter_exit(void) { pr_info("Amen.\n"); }

module_init(counter_init);
module_exit(counter_exit);

MODULE_LICENSE("MIT");
