#include "unity.h"
#include "BinarySearch.h"

void setUp(void){}
void tearDown(void){}

void test_binarySearch_should_return_index_of_1_size_array(void){

	int array[] = {2};
	int returnValue;
	
	returnValue = binarySearch(2, array, 0, 0);
	
	TEST_ASSERT_EQUAL(0, returnValue);
}

void test_binarySearch_should_return_index_of_2_array_0(void){

	int array[] = {2,4,6};
	int returnValue;
	
	returnValue = binarySearch(2, array, 0, 2);
	
	TEST_ASSERT_EQUAL(0, returnValue);
}

void test_binarySearch_should_return_index_of_6_at_array_2(void){

	int array[] = {2,4,6};
	int returnValue;
	
	returnValue = binarySearch(6, array, 0, 2);
	
	TEST_ASSERT_EQUAL(2, returnValue);
}

void test_binarySearch_should_return_negative_1_when_not_found_infront(void){

	int array[] = {2,4,6,8,10};
	int returnValue;
	
	returnValue = binarySearch(1, array, 0, 4);
	
	TEST_ASSERT_EQUAL(-1, returnValue);
}

void test_binarySearch_should_return_negative_1_when_not_found_in_middle(void){

	int array[] = {2,4,6,8,10};
	int returnValue;
	
	returnValue = binarySearch(7, array, 0, 4);
	
	TEST_ASSERT_EQUAL(-1, returnValue);
}

void test_binarySearch_should_return_negative_1_when_not_found_in_end(void){

	int array[] = {2,4,6,8,10};
	int returnValue;
	
	returnValue = binarySearch(17, array, 0, 4);
	
	TEST_ASSERT_EQUAL(-1, returnValue);
}

void test_binarySearch_with_odd_number_array_size(void){

	int array[] = {2,4,6,8,10,15,16};
	int returnValue;
	
	returnValue = binarySearch(16, array, 0, 6);
	
	TEST_ASSERT_EQUAL(6, returnValue);
}

void test_binarySearch_with_even_number_array_size(void){

	int array[] = {2,4,6,8,10,15,16,18};
	int returnValue;
	
	returnValue = binarySearch(16, array, 0, 7);
	
	TEST_ASSERT_EQUAL(6, returnValue);
}