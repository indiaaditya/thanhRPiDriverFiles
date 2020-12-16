#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

MODULE_INFO(depends, "");

MODULE_ALIAS("spi:max3107y");
MODULE_ALIAS("spi:max3108y");
MODULE_ALIAS("spi:max3109y");
MODULE_ALIAS("spi:max14830y");
MODULE_ALIAS("of:N*T*Cmaxim,max3107y");
MODULE_ALIAS("of:N*T*Cmaxim,max3107yC*");
MODULE_ALIAS("of:N*T*Cmaxim,max3108y");
MODULE_ALIAS("of:N*T*Cmaxim,max3108yC*");
MODULE_ALIAS("of:N*T*Cmaxim,max3109y");
MODULE_ALIAS("of:N*T*Cmaxim,max3109yC*");
MODULE_ALIAS("of:N*T*Cmaxim,max14830y");
MODULE_ALIAS("of:N*T*Cmaxim,max14830yC*");

MODULE_INFO(srcversion, "008509B2AB6C3D7046CE3A2");
