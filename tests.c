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


TEST_LIST = {
    { "tutorial", test_tutorial },
    { "output",    test_output },
    { NULL, NULL }
};
