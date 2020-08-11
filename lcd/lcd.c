#include <linux/types.h>
#include <linux/kernel.h>
#include <linux/delay.h>
#include <linux/ide.h>
#include <linux/init.h>
#include <linux/module.h>

#define CHRDEVBASE_MAJOR    200             // 主设备号
#define CHRDEVBASE_NAME     "chrdevbase"    // 设备名

static char readbuf[100];   // 读缓冲区
static char writebuf[100];  // 写缓冲区
static char kerneldata[] = {"kernel data!"};

/* 打开设备 */
static int chrtest_open(struct inode *inode, struct file *filp)
{
    return 0;
}

/* 从设备读取 */
static ssize_t chrtest_read(struct file *filp, char __user *buf, size_t cnt, loff_t *offt)
{
    return 0;
}
/* 向设备写数据 */
static ssize_t chrtest_write(struct file *filp, const char __user *buf, size_t cnt, loff_t *offt)
{
    return 0;
}
/* 关闭/释放设备 */
static int chrtest_release(struct inode *inode, struct file *filp)
{
    return 0;
}

static struct file_operations test_fops = {
    
};

static int __init chrdevbase_init(void)
{
    return 0;
}

static void __exit chrdevbase_exit(void)
{
    
}
/*
* 模块入口与出口
*/
module_init(chrdevbase_init);
module_exit(chrdevbase_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("sulfone");
