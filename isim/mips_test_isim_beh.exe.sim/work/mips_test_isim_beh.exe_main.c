/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000003011808631_0467708899_init();
    work_m_00000000004227287504_0345418465_init();
    work_m_00000000004088726521_1307194410_init();
    work_m_00000000001017975745_0024370143_init();
    work_m_00000000003729068290_1621229167_init();
    work_m_00000000003597489664_1785967555_init();
    work_m_00000000002877818716_1508074921_init();
    work_m_00000000000602981439_0379777902_init();
    work_m_00000000003969511442_0103510313_init();
    work_m_00000000003844019580_1158921438_init();
    work_m_00000000000996707001_0175054065_init();
    work_m_00000000001258436517_0886308060_init();
    work_m_00000000000879535695_3816511794_init();
    work_m_00000000002173406186_0110562680_init();
    work_m_00000000000255223731_2757937791_init();
    work_m_00000000002275201500_3373267044_init();
    work_m_00000000002877507448_0786715967_init();
    work_m_00000000001981504900_1638253560_init();
    work_m_00000000003285250097_4024466370_init();
    work_m_00000000001469682933_3405510508_init();
    work_m_00000000001238063520_2420547085_init();
    work_m_00000000002960430582_2924402094_init();
    work_m_00000000003336072183_1870547914_init();
    work_m_00000000001634990922_2520395732_init();
    work_m_00000000002454513192_2321183677_init();
    work_m_00000000001896668117_1332927856_init();
    work_m_00000000000050785656_2958083711_init();
    work_m_00000000000051977409_0185035704_init();
    work_m_00000000003046378362_1729233856_init();
    work_m_00000000002618390425_0142016982_init();
    work_m_00000000003153230717_2336320059_init();
    work_m_00000000001718699541_3877310806_init();
    work_m_00000000002047498008_3968679286_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002047498008_3968679286");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
