#include <stdio.h>

int		main(void)
{
	// // c
	// printf("[-----c------]\n");
	// ft_printf("%012cll  %%c%c  l%9cs\n", '9', 'x', '?');
	// printf("%012cll  %%c%c  l%9cs\n", '9', 'x', '?');
	// ft_printf("-------------\n");
	// ft_printf("ab%9cdef\n", '0');
	// printf("ab%9cdef\n", '0');
	// ft_printf("-------------\n");
	// ft_printf("ab%-4cdef\n", '0');
	// printf("ab%-4cdef\n", '0');
	// ft_printf("-------------\n");
	// ft_printf("ab%4cdef\n", '0');
	// printf("ab%4cdef\n", '0');
	// ft_printf("-------------\n");
	// ft_printf("ab%cde%-10c%sf\n", '+', '-', "Hello World");
	// printf("ab%cde%-10c%sf\n", '+', '-', "Hello World");
	// ft_printf("-------------\n");
	// ft_printf("ab%cde%10c%15sf\n", '+', '-', "Hello World");
	// printf("ab%cde%10c%15sf\n", '+', '-', "Hello World");
	// ft_printf("-------------\n");
	// ft_printf("[%c]\n", 'a');
	// printf("[%c]\n", 'a');
	// ft_printf("-------------\n");
	// ft_printf("[%5c]\n", 'a');
	// printf("[%5c]\n", 'a');
	// ft_printf("-------------\n");
	// ft_printf("[%-3c]\n", 'a');
	// printf("[%-3c]\n", 'a');
	// ft_printf("-------------\n");
	// ft_printf("[%2c]\n", 'a');
	// ft_printf("[%.0c]\n", 'a');
	// printf("[%.0c]\n", 'a');
	// // ft_printf("\n\n");

	// // s
	// printf("[-----s------]\n");
	// ft_printf("%10s;;;%%s%s\n", "lllll", "test");
	// printf("%10s;;;%%s%s\n", "lllll", "test");
	// ft_printf("-------------\n");
	// ft_printf("%-20s!!%010s\n", "Hello World", "Hey!");
	// printf("%-20s!!%010s\n", "Hello World", "Hey!");
	// ft_printf("-------------\n");
	// ft_printf("%-20.2sl\n", "aaaaaaaaaaa");
	// printf("%-20.2sl\n", "aaaaaaaaaaa");
	// ft_printf("-------------\n");
	// ft_printf("%-10.2saaa%013....2s\n", "aaaaaaaaaaa", "bbbb");
	// printf("%-10.2saaa%013....2s\n", "aaaaaaaaaaa", "bbbb");
	// ft_printf("-------------\n");
	// ft_printf("qqq%30.20s\n", "aaaaaaaaaaa", "kkkkk");
	// printf("qqq%30.20s\n", "aaaaaaaaaaa", "kkkkk");
	// ft_printf("-------------\n");

	// // d
	// printf("[-----d------]\n");
	// printf("ft_printf return = %d\n", ft_printf("[%0-10d]\n", -10));
	// printf("printf return =%d\n", printf("[%0-10d]\n", -10));
	// printf("[-----------]\n");
	// ft_printf("[%010d]\n", -10);
	// printf("[%010d]\n", -10);
	// printf("[-----------]\n");
	// ft_printf("[%-10dABC%010.*s]\n", 234, 3, "OOOOOO");
	// printf("[%-10dABC%010.*s]\n", 234, 3, "OOOOOO");
	// printf("[-----------]\n");
	// ft_printf("[%010.6d]\n", -234);
	// printf("[%010.6d]\n", -234);
	// printf("[-----------]\n");
	// ft_printf("[%010.5d]\n", -234);
	// printf("[%010.5d]\n", -234);
	// ft_printf("[%u]\n", -10);
	// printf("[%u]\n", -10);
	// printf("[-----------]\n");
	// ft_printf("[%-10.5d]\n", -10);
	// printf("[%-10.5d]\n", -10);
	// printf("[-----------]\n");
	// ft_printf("[%010.7d]\n", -10);
	// printf("[%010.7d]\n", -10);
	// printf("[-----------]\n");
	// ft_printf("[%010d]\n", -10);
	// printf("[%010d]\n", -10);
	// printf("[-----------]\n");
	// ft_printf("[%010.4d]\n", 10);
	// printf("[%010.4d]\n", 10);
	// printf("[-----------]\n");
	// ft_printf("[%-3.7d]\n", -2375);
	// printf("[%-3.7d]\n", -2375);
	// printf("-----------\n");
	// ft_printf("[%03.7d]\n", 3267);
	// printf("[%03.7d]\n", 3267);
	// printf("-----------\n");
	// ft_printf("[%.3d]\n", 0);
	// printf("[%.3d]\n", 0);
	// printf("-----------\n");
	// ft_printf("%%-d 42 == %-d\n", -2147483648);
	// printf("%%-d 42 == %-d\n", -2147483648);
	// printf("-----------\n");
	// ft_printf("%%-d 42 == %-d\n", 2147483647 + 1);
	// printf("%%-d 42 == %-d\n", 2147483647 + 1);
	// printf("-----------\n");
	// ft_printf("%%-d 42 == %-d\n", 2147483647);
	// printf("%%-d 42 == %-d\n", 2147483647);

	// i
	// ft_printf("[-----i------]\n");
	// ft_printf("%% *.5i 42 == |% *.5i|\n", 4, 42);
	// printf("%% *.5i 42 == |% *.5i|\n", 4, 42);
	// ft_printf("-----------\n");
	// ft_printf("%020i\n", -2147483648);
	// printf("%020i\n", -2147483648);
	// ft_printf("-----------\n");
	// ft_printf("%i\n", 2147483647 + 1);
	// printf("%i\n", 2147483647 + 1);
	// ft_printf("-----------\n");
	// ft_printf("%i\n", 2147483647);
	// printf("%i\n", 2147483647);

	// ft_printf("%.*u\n", -1, 12345);
	// printf("%.*u\n", -1, 12345);
	// // *
	// ft_printf("%*s\n", 3, "aaaa");
	// printf("%*s\n", 3, "aaaa");
	// ft_printf("-------------\n");
	// ft_printf("%*.*s\n", 3, -10, "aaff");
	// printf("%*.*s\n", 3, -10, "aaff");
	// ft_printf("-------------\n");
	// ft_printf("%*.*s\n", 10, 2, "ppppp");
	// printf("%*.*s\n", 10, 2, "ppppp");
	// ft_printf("-------------\n");
	// ft_printf("%0*.*sl\n", -10, 3, "kkkkkk");
	// printf("%0*.*sl\n", -10, 3, "kkkkkk");
	// ft_printf("-------------\n");
	// ft_printf("%0*.*sl\n", 10, 3, "kkkkkk");
	// printf("%0*.*sl\n", 10, 3, "kkkkkk");
	// ft_printf("-------------\n");

	// ft_printf("%.0i\n", 0);
	// // p
	// printf("[-----p------]\n");
	// ft_printf("%p\n", "Hello World!");
	// printf("%p\n", "Hello World!");
	// printf("-------------\n");
	// ft_printf("%p\n", 17);
	// printf("%p\n", 17);
	// ft_printf("%2.9p\n", 1234);
	// printf("%2.9p\n", 1234);
	// ft_printf("-------------\n");
	// ft_printf("%.5p\n", 0);
	// printf("%.5p\n", 0);
	// ft_printf("%.p\n", 0);
	// printf("%.p\n", 0);
	// ft_printf("-------------\n");
	// ft_printf("%2.9p\n", 1234);
	// printf("%2.9p\n", 1234);
	// ft_printf("-------------\n");
	// ft_printf("%9.2p\n", 1234);
	// printf("%9.2p\n", 1234);
	// char c;

	// c = 'a';
	// ft_printf("-------------\n");
	// ft_printf("add0221 [%02.3p]\n", c);
	// printf("add0221 [%02.3p]\n", c);
	// ft_printf("-------------\n");
	// ft_printf("add0222 [%02.3p]\n", c);
	// printf("add0222 [%02.3p]\n", c);
	// ft_printf("-------------\n");
	// ft_printf("add0223 [%-2.3p]\n", c);
	// printf("add0223 [%-2.3p]\n", c);
	// ft_printf("-------------\n");
	// ft_printf("add0224 [%-2.3p]\n", c);
	// printf("add0224 [%-2.3p]\n", c);
	// ft_printf("-------------\n");
	// ft_printf("add0225 [%02.3p]\n", c);
	// printf("add0225 [%02.3p]\n", c);
	// ft_printf("-------------\n");
	// ft_printf("add0266 [%.*p]\n", 3, c);
	// printf("add0266 [%.*p]\n", 3, c);
	// ft_printf("-------------\n");
	// ft_printf("add0267 [%.*p]\n", 2, c);
	// printf("add0267 [%.*p]\n", 2, c);
	// ft_printf("-------------\n");
	// ft_printf("add0311 [%010.2p]\n", NULL);
	// printf("add0311 [%010.2p]\n", NULL);
	// ft_printf("-------------\n");
	// ft_printf("add0312 [%010.2p]\n", NULL);
	// printf("add0312 [%010.2p]\n", NULL);
	// ft_printf("-------------\n");
	// ft_printf("add0313 [%-10.2p]\n", NULL);
	// printf("add0313 [%-10.2p]\n", NULL);
	// ft_printf("-------------\n");
	// ft_printf("add0314 [%-10.2p]\n", NULL);
	// printf("add0314 [%-10.2p]\n", NULL);
	// ft_printf("-------------\n");
	// ft_printf("add0315 [%010.2p]\n", NULL);
	// printf("add0315 [%010.2p]\n", NULL);
	// ft_printf("-------------\n");
	// ft_printf("add0316 [%02.2p]\n", NULL);
	// printf("add0316 [%02.2p]\n", NULL);
	// ft_printf("-------------\n");
	// ft_printf("add0317 [%02.2p]\n", NULL);
	// printf("add0317 [%02.2p]\n", NULL);
	// ft_printf("-------------\n");
	// ft_printf("add0318 [%-2.2p]\n", NULL);
	// printf("add0318 [%-2.2p]\n", NULL);
	// ft_printf("-------------\n");
	// ft_printf("add0319 [%-2.2p]\n", NULL);
	// printf("add0319 [%-2.2p]\n", NULL);
	// ft_printf("-------------\n");
	// ft_printf("add0320 [%02.2p]\n", NULL);
	// printf("add0320 [%02.2p]\n", NULL);
	// ft_printf("-------------\n");
	// ft_printf("add0370 [%*.*p]\n", 10, 10, NULL);
	// printf("add0370 [%*.*p]\n", 10, 10, NULL);
	// ft_printf("-------------\n");
	// ft_printf("add0371 [%*.*p]\n", 10, 3, NULL);
	// printf("add0371 [%*.*p]\n", 10, 3, NULL);
	// ft_printf("-------------\n");
	// ft_printf("add0372 [%*.*p]\n", 10, 2, NULL);
	// printf("add0372 [%*.*p]\n", 10, 2, NULL);
	// ft_printf("-------------\n");

	// // x
	// printf("[-----x------]\n");
	// ft_printf("%x\n", "Hello World!");
	// printf("%x\n", "Hello World!");
	// printf("-------------\n");
	// ft_printf("%x\n", 100);
	// printf("%x\n", 100);

	// // X
	printf("[------X-----]\n");
	// ft_printf("%X\n", "Hello World!");
	// printf("%X\n", "Hello World!");
	printf("-------------\n");
	ft_printf("%X\n", 200);
	printf("%X\n", 200);
	// printf("-------------\n");
	// ft_printf("%02.7X\n", 3267);
	// printf("%02.7X\n", 3267);
	// printf("-------------\n");
	// ft_printf("%03.3X\n", 6983);
	// printf("%03.3X\n", 6983);
	// printf("-------------\n");
	// ft_printf("%08.3X\n", 8375);
	// printf("%08.3X\n", 8375);
	// printf("-------------\n");
	// ft_printf("%.X\n", 0);
	// printf("%.X\n", 0);
	// printf("-------------\n");
	// ft_printf("[%5p]\n", 0);
	// printf("[%5p]\n", 0);

	// // %
	// printf("[------ps-----]\n");
	// printf("ft return = %d\n", ft_printf("%5"));
	// printf("return = %d\n", printf("%5"));
	// printf("-----------\n");
	// printf("ft return = %d\n", ft_printf("%05"));
	// printf("return = %d\n", printf("%05"));
	// printf("-----------\n");
	// ft_printf("%05");
	// printf("%05");
	// printf("-----------\n");
	// ft_printf("[%5%]\n");
	// printf("[%5%]\n");
	// printf("-----------\n");
	// ft_printf("[%05%]\n");
	// printf("[%05%]\n");
	// printf("-----------\n");
	// ft_printf("[%-5.2%]\n");
	// printf("[%-5.2%]\n");
	// printf("-----------\n");
	// ft_printf("[%-5.%]\n");
	// printf("[%-5.%]\n");
	// printf("-----------\n");
	// ft_printf("[%-5.%]\n", 9);
	// printf("[%-5.%]\n", 9);
	// printf("-----------\n");
	// ft_printf("[%-5.9%]\n", 9);
	// printf("[%-5.9%]\n", 9);
	ft_printf("%0-8.5X\n", 0);
	printf("%0-8.5X\n", 0);
	ft_printf("%x\n", 235);
	printf("%x\n", 235);

	// while(1)
	// {}

	return (0);
}
