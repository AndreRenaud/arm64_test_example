#include <sys/utsname.h>

#include "acutest.h"


void test_tutorial(void)
{
    void* mem;

    mem = malloc(10);
    TEST_CHECK(mem != NULL);

    mem = realloc(mem, 20);
    TEST_CHECK(mem != NULL);

    free(mem);
}

void test_output(void)
{
	FILE *fp = fopen("foo", "wb");
	fprintf(fp, "blah\n");
	fclose(fp);
}

void test_aarch64(void)
{
	struct utsname name;
	uname(&name);
	TEST_CHECK(strcmp(name.machine, "aarch64") == 0);
}


TEST_LIST = {
    { "tutorial", test_tutorial },
    { "output",    test_output },
    { "aarch64", test_aarch64 },
    { NULL, NULL }
};
