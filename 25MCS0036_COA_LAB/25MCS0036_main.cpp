#include "stdio.h"
#include "omp.h"
//#include "helloworld_srl.h"
//#include "helloworld_prl.h"
//#include "ret_et_helloworld.h"
//#include "ret_tid_helloworld.h"
//#include "ret_practice.h"
//#include "mnudrvprg_010_parallel_construct.h"
//#include "mnudrvprg_020_runtime_environment_routines.h"
//#include "run_time_environment_routines.h"
//#include "030_ws_for_pp1.h"
//#include "031_wsc_for_num_square.h"
//#include "040_wsc_section_pp1.h"
//#include "040_wsc_section_pp2.h"
//#include "050_Scheduling_Static.h"
//#include "050_Scheduling_Dynamic.h"
//#include "050_Scheduling_Guided.h"
//#include "050_Scheduling_pp1.h"
//#include "060_Data_env_constructs.h"
//#include "061_dec_critical.h"
//#include "061_dec_reduction.h"
#include "mnudrvprg_edge.h"
//#include "00_Cover_Screen.h"

int main()
{
	/*fn_helloworld_prl();
	fn_rer_practice_prl();
	fn_ret_et_helloworld_prl();
	fn_ret_et_helloworld_srl();
    fn_helloworld_srl();*/
	/*fn_helloworld_srl();
	fn_ret_tid_helloworld_srl();
	fn_ret_tid_helloworld_prl();
	fn_rer_practice1_srl();
	fn_rer_practice3_speed_ef();*/
	//printf("Hello World");
	//fn_mnudrvprg_010_parallel_construct();
	//fn_mnudrvprg_020_parallel_construct();
    //fn_ret_practice_srl();
    //fn_ret_practice_prl();
       
    //fn_rter_omp_set_num_threads(4);
    
    //fn_rter_omp_get_num_threads();
   
    //fn_rter_omp_get_max_threads();

    //fn_rter_omp_get_thread_num();

    //fn_rter_omp_get_num_procs();

    //fn_rter_omp_in_parallel();

    //fn_rter_omp_set_dynamic(1);

    //fn_rter_omp_get_dynamic();

    //fn_rter_omp_get_cancellation();

    //fn_rter_omp_set_nested(1);

    //fn_rter_omp_get_nested();

    //fn_rter_omp_set_schedule(4);

    //fn_rter_omp_get_schedule();

    //fn_rter_omp_get_thread_limit();

    //fn_rter_omp_set_max_active_levels(2);

    //fn_rter_omp_get_max_active_levels();

    //fn_rter_omp_get_level();

    //fn_rter_omp_get_ancestor_thread_num(0);

    //fn_rter_omp_get_team_size(0);

    //fn_rter_omp_get_active_level();

    //fn_rter_omp_in_final();

    //fn_rter_omp_get_proc_bind();

    //fn_rter_omp_set_default_device(0);

    //fn_rter_omp_get_default_device();

    //fn_rter_omp_get_num_devices();

    //fn_rter_omp_get_num_teams();

    //fn_rter_omp_get_team_num();

    //fn_wsc_for_2constructs();
    //fn_wsc_for_1construct();
    ////fn_num_squa.0re();
    //fn_wsc_section_pp1_srl();
    //fn_wsc_section_pp1_prl();
    /*int choice;
    do 
    {
        printf("\n==============================\n");
        printf("Menu: Number Square using Work-Sharing Construct (OMP)\n");
        printf("==============================\n");
        printf("1. Serial Execution\n");
        printf("2. Parallel Execution\n");
        printf("3. Compare Execution Time, Speedup, and Efficiency\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf_s("%d", &choice);

        switch (choice) {
        case 1:
            fn_num_square_srl();
            break;
        case 2:
            fn_num_square_prl();
            break;
        case 3:
            fn_num_square_speedup_efficiency();
            break;
        case 4:
            printf("Exiting program...\n");
            break;
        default:
            printf("Invalid choice. Please enter 1–4.\n");
        }
    } while (choice != 4);*/

	/*fn_default_Static_Scheduling();
    fn_static_01();
    fn_static_02();
	fn_default_Dynamic_Scheduling();
    fn_dynamic_01();
	fn_dynamic_02();
	fn_default_Guided_Scheduling();
	fn_guided_uneven();
    fn_guided_01();
	fn_guided_02();*/
    
    // Assuming the prototype of fn_work_1 is something like:
    // void fn_work_1(float *a, float *b, float *c, float *d);
    //fn_run_vector_addition();
    // Fix: Declare float variables, assign values, and pass their addresses.
    //float a = 2.0f, b = 3.0f, c = 4.0f, d = 6.0f;
    //fn_work(&a, &b, &c, 2);
    //fn_run_vector_addition();
    //fn_main_page();
    //playGame();
    /*printf("=== Bakery Order Simulation Using OpenMP Scheduling ===\n");
    process_static();
    process_dynamic();
    process_guided();
    printf("\n=== Simulation Completed ===\n");*/
    //fn_dec_critical();
    //fn_dec_reduction();
    fn_mnudrvprg_edge();
    return 0;
}