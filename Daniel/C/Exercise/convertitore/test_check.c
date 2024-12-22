#include <check.h>
#include <stdlib.h>

START_TEST(test_addition) {
    ck_assert_int_eq(2 + 3, 5);
}
END_TEST

Suite *create_suite(void) {
    Suite *s = suite_create("Example");
    TCase *tc_core = tcase_create("Core");
    tcase_add_test(tc_core, test_addition);
    suite_add_tcase(s, tc_core);
    return s;
}

int main(void) {
    int number_failed;
    Suite *s = create_suite();
    SRunner *sr = srunner_create(s);

    srunner_run_all(sr, CK_NORMAL);
    number_failed = srunner_ntests_failed(sr);
    srunner_free(sr);

    return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}