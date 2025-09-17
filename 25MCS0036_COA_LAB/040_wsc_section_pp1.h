#include <stdio.h>
#include "omp.h"
#include "040_calculator_function_pp1.h"

void fn_wsc_section_pp1_srl()
{
	int a = 5;
	int b = 3;
	double start_time, end_time;
	start_time = omp_get_wtime();
	int sum = fn_calculator_add(a,b);
	printf("Addition of %d and %d is: %d by thread id: %d", a,b, sum,omp_get_thread_num());
	int sub = fn_calculator_subtract(a,b);
	printf("Subtraction of %d and %d is: %d by thread id: %d", a, b, sub,omp_get_thread_num());
	end_time = omp_get_wtime();
	printf("\nTime taken for serial execution: %f seconds\n", end_time - start_time);
}

void fn_wsc_section_pp1_prl()
{
	int a = 5;
	int b = 3;
	int sum, sub;
	double start_time, end_time;
	start_time = omp_get_wtime();
#pragma omp parallel sections
	{
#pragma omp section
		{
			sum = fn_calculator_add(a, b);
			printf("Addition of %d and %d is: %d by thread id: %d", a, b, sum, omp_get_thread_num());
		}
#pragma omp section
		{
			sub = fn_calculator_subtract(a, b);
			printf("Subtraction of %d and %d is: %d by thread id: %d", a, b, sub, omp_get_thread_num());
		}
	}
	end_time = omp_get_wtime();
	printf("\nTime taken for parallel execution: %f seconds\n", end_time - start_time);
}