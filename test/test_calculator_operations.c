#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

/* Modify these two lines according to the project */
#include <calculator_operations.h>
#define PROJECT_NAME    "Calculator"

/* Prototypes for all the test functions */
void test_add(void);
void test_subtract(void);
void test_multiply(void);
void test_divide(void);
void test_greater(void);
void test_primenum(void);
void test_primenum1(void);
void test_evenodd(void);
void test_evenodd1(void);
void test_posneg(void);
void test_posneg1(void);

/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */
  
  
  /* Add your test functions in this format for testing*/
  CU_add_test(suite, "add", test_add);
  CU_add_test(suite, "subtract", test_subtract);
  CU_add_test(suite, "multiply", test_multiply);
  CU_add_test(suite, "divide", test_divide);
  CU_add_test(suite, "greater", test_greater);
  CU_add_test(suite, "primenum", test_primenum);
  CU_add_test(suite, "primenum1", test_primenum1);
  CU_add_test(suite, "evenodd", test_evenodd);
   CU_add_test(suite, "evenodd1", test_evenodd1);
   CU_add_test(suite, "posneg", test_posneg);
  CU_add_test(suite, "posneg1", test_posneg1);


/* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);
  
  /* run the unit test framework*/
  CU_basic_run_tests();
  
  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}

/* Write all the test functions */ 
void test_add(void) {
  CU_ASSERT(30 == add(10, 20));
  
  /* Dummy fail*/
  CU_ASSERT(1500 == add(750, 7500));
}

void test_subtract(void) {
  CU_ASSERT(-3 == subtract(0, 3));
  
  /* Dummy fail*/
  CU_ASSERT(1 == subtract(1000, 900));
}

void test_multiply(void) {
  CU_ASSERT(0 == multiply(1, 0));
  
  /* Dummy fail*/
  CU_ASSERT(2 == multiply(2, 5));
}

void test_divide(void) {
  CU_ASSERT(0 == divide(1, 0));
  
  /* Dummy fail*/
  CU_ASSERT(3 == divide(2, 2));
}

void test_greater(void) {
  CU_ASSERT(20 == greater(10, 20));
  
  /* Dummy fail*/
  CU_ASSERT(30 == divide(30, 40));
}

void test_primenum(void)
{
   CU_ASSERT(1 == primenum(7));
  
  /* Dummy fail*/
  CU_ASSERT(1 == primenum(30));
}

void test_primenum1(void)
{
   CU_ASSERT(1 == primenum1(7));
  
  /* Dummy fail*/
  CU_ASSERT(1 == primenum1(30));
}

void test_evenodd(void)
{
   CU_ASSERT(1 == evenodd(6));
  
  /* Dummy fail*/
  CU_ASSERT(1 == evenodd(5));
}

void test_evenodd1(void)
{
   CU_ASSERT(1 == evenodd1(6));
  
  /* Dummy fail*/
  CU_ASSERT(1 == evenodd1(5));
}
  
void test_posneg(void)
{
   CU_ASSERT(1 == posneg(6));
  
  /* Dummy fail*/
  CU_ASSERT(1 == posneg(-5));
}

void test_posneg1(void)
{
   CU_ASSERT(1 == posneg1(6));
  
  /* Dummy fail*/
  CU_ASSERT(1 == posneg1(-5));
}


