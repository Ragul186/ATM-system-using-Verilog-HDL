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

/* This file is designed for use with ISim build 0xc4ca3437 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "E:/ATM_system/main.v";
static unsigned int ng1[] = {11112222U, 0U};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {22221111U, 0U};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {33332222U, 0U};
static int ng6[] = {2, 0};
static unsigned int ng7[] = {44442222U, 0U};
static int ng8[] = {3, 0};
static unsigned int ng9[] = {222233U, 0U};
static int ng10[] = {4, 0};
static unsigned int ng11[] = {5432U, 0U};
static unsigned int ng12[] = {7654U, 0U};
static unsigned int ng13[] = {3210U, 0U};
static unsigned int ng14[] = {9999U, 0U};
static unsigned int ng15[] = {5544U, 0U};
static unsigned int ng16[] = {0U, 0U};
static unsigned int ng17[] = {1U, 0U};
static const char *ng18 = "hi=%d";
static int ng19[] = {5, 0};
static const char *ng20 = "for loop changed.";
static unsigned int ng21[] = {2U, 0U};
static const char *ng22 = "****changed.";
static unsigned int ng23[] = {3U, 0U};
static const char *ng24 = "invalid pin";
static const char *ng25 = "count=%d";
static const char *ng26 = "Select transaction(1,2,3,4):";
static const char *ng27 = "1.Deposit";
static const char *ng28 = "2.Withdraw";
static const char *ng29 = "3.Show Balance";
static const char *ng30 = "4.Exit";
static unsigned int ng31[] = {4U, 0U};
static unsigned int ng32[] = {5U, 0U};
static unsigned int ng33[] = {6U, 0U};
static const char *ng34 = "balance=%d";

static void NetReassign_126_3(char *);
static void NetReassign_130_4(char *);


static void Initial_42_0(char *t0)
{
    char t3[8];
    char t4[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    int t14;
    char *t15;
    unsigned int t16;
    int t17;
    int t18;
    unsigned int t19;
    unsigned int t20;
    int t21;
    int t22;

LAB0:    xsi_set_current_line(42, ng0);

LAB2:    xsi_set_current_line(44, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3336);
    t5 = (t0 + 3336);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 3336);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB3;

LAB4:    xsi_set_current_line(45, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 3336);
    t5 = (t0 + 3336);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 3336);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng4)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB5;

LAB6:    xsi_set_current_line(46, ng0);
    t1 = ((char*)((ng5)));
    t2 = (t0 + 3336);
    t5 = (t0 + 3336);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 3336);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng6)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB7;

LAB8:    xsi_set_current_line(47, ng0);
    t1 = ((char*)((ng7)));
    t2 = (t0 + 3336);
    t5 = (t0 + 3336);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 3336);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng8)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB9;

LAB10:    xsi_set_current_line(48, ng0);
    t1 = ((char*)((ng9)));
    t2 = (t0 + 3336);
    t5 = (t0 + 3336);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 3336);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng10)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB11;

LAB12:    xsi_set_current_line(50, ng0);
    t1 = ((char*)((ng11)));
    t2 = (t0 + 3496);
    t5 = (t0 + 3496);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 3496);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB13;

LAB14:    xsi_set_current_line(51, ng0);
    t1 = ((char*)((ng12)));
    t2 = (t0 + 3496);
    t5 = (t0 + 3496);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 3496);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng4)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(52, ng0);
    t1 = ((char*)((ng13)));
    t2 = (t0 + 3496);
    t5 = (t0 + 3496);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 3496);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng6)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB17;

LAB18:    xsi_set_current_line(53, ng0);
    t1 = ((char*)((ng14)));
    t2 = (t0 + 3496);
    t5 = (t0 + 3496);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 3496);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng8)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB19;

LAB20:    xsi_set_current_line(54, ng0);
    t1 = ((char*)((ng15)));
    t2 = (t0 + 3496);
    t5 = (t0 + 3496);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 3496);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng10)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB21;

LAB22:
LAB1:    return;
LAB3:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB4;

LAB5:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB6;

LAB7:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB8;

LAB9:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB10;

LAB11:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB12;

LAB13:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB14;

LAB15:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB16;

LAB17:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB18;

LAB19:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB20;

LAB21:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB22;

}

static void Always_60_1(char *t0)
{
    char t11[8];
    char t35[8];
    char t42[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;

LAB0:    t1 = (t0 + 5624U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 6688);
    *((int *)t2) = 1;
    t3 = (t0 + 5656);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(61, ng0);

LAB5:    xsi_set_current_line(63, ng0);
    t4 = (t0 + 3656);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng16)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t7, 3);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng17)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng21)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng23)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng31)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng32)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng33)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB19;

LAB20:
LAB21:    goto LAB2;

LAB7:    xsi_set_current_line(65, ng0);

LAB22:    xsi_set_current_line(67, ng0);
    t9 = (t0 + 2456U);
    t10 = *((char **)t9);
    t9 = ((char*)((ng17)));
    memset(t11, 0, 8);
    t12 = (t10 + 4);
    t13 = (t9 + 4);
    t14 = *((unsigned int *)t10);
    t15 = *((unsigned int *)t9);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t12);
    t18 = *((unsigned int *)t13);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t13);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB26;

LAB23:    if (t23 != 0)
        goto LAB25;

LAB24:    *((unsigned int *)t11) = 1;

LAB26:    t27 = (t11 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB27;

LAB28:    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 3816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB29:    goto LAB21;

LAB9:    xsi_set_current_line(73, ng0);

LAB30:    xsi_set_current_line(74, ng0);
    t3 = (t0 + 2136U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng18, 2, t0, (char)118, t4, 32);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 2136U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t14 = *((unsigned int *)t2);
    t15 = (~(t14));
    t16 = *((unsigned int *)t3);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB31;

LAB32:    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 3816);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB33:    goto LAB21;

LAB11:    xsi_set_current_line(90, ng0);

LAB47:    xsi_set_current_line(91, ng0);
    t3 = (t0 + 2296U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB48;

LAB49:    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng21)));
    t3 = (t0 + 3816);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB50:    goto LAB21;

LAB13:    xsi_set_current_line(110, ng0);

LAB63:    xsi_set_current_line(111, ng0);
    xsi_vlogfile_write(1, 0, 0, ng26, 1, t0);
    xsi_set_current_line(112, ng0);
    xsi_vlogfile_write(1, 0, 0, ng27, 1, t0);
    xsi_set_current_line(113, ng0);
    xsi_vlogfile_write(1, 0, 0, ng28, 1, t0);
    xsi_set_current_line(114, ng0);
    xsi_vlogfile_write(1, 0, 0, ng29, 1, t0);
    xsi_set_current_line(115, ng0);
    xsi_vlogfile_write(1, 0, 0, ng30, 1, t0);
    xsi_set_current_line(116, ng0);
    t2 = (t0 + 2936U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng17)));
    memset(t11, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t2);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t5);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t5);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB67;

LAB64:    if (t23 != 0)
        goto LAB66;

LAB65:    *((unsigned int *)t11) = 1;

LAB67:    t9 = (t11 + 4);
    t28 = *((unsigned int *)t9);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB68;

LAB69:    xsi_set_current_line(118, ng0);
    t2 = (t0 + 2936U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng21)));
    memset(t11, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t2);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t5);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t5);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB74;

LAB71:    if (t23 != 0)
        goto LAB73;

LAB72:    *((unsigned int *)t11) = 1;

LAB74:    t9 = (t11 + 4);
    t28 = *((unsigned int *)t9);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB75;

LAB76:    xsi_set_current_line(120, ng0);
    t2 = (t0 + 2936U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng23)));
    memset(t11, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t2);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t5);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t5);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB81;

LAB78:    if (t23 != 0)
        goto LAB80;

LAB79:    *((unsigned int *)t11) = 1;

LAB81:    t9 = (t11 + 4);
    t28 = *((unsigned int *)t9);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB82;

LAB83:    xsi_set_current_line(123, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 3816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB84:
LAB77:
LAB70:    goto LAB21;

LAB15:    xsi_set_current_line(125, ng0);

LAB85:    xsi_set_current_line(126, ng0);
    t3 = (t0 + 4456);
    xsi_set_assignedflag(t3);
    t4 = (t0 + 8716);
    *((int *)t4) = 1;
    NetReassign_126_3(t0);
    xsi_set_current_line(127, ng0);
    t2 = ((char*)((ng23)));
    t3 = (t0 + 3816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB21;

LAB17:    xsi_set_current_line(129, ng0);

LAB86:    xsi_set_current_line(130, ng0);
    t3 = (t0 + 4456);
    xsi_set_assignedflag(t3);
    t4 = (t0 + 8720);
    *((int *)t4) = 1;
    NetReassign_130_4(t0);
    xsi_set_current_line(131, ng0);
    t2 = ((char*)((ng23)));
    t3 = (t0 + 3816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB21;

LAB19:    xsi_set_current_line(133, ng0);

LAB87:    xsi_set_current_line(134, ng0);
    t3 = (t0 + 4456);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    xsi_vlogfile_write(1, 0, 0, ng34, 2, t0, (char)119, t5, 32);
    xsi_set_current_line(135, ng0);
    t2 = ((char*)((ng23)));
    t3 = (t0 + 3816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB21;

LAB25:    t26 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB26;

LAB27:    xsi_set_current_line(68, ng0);
    t33 = ((char*)((ng17)));
    t34 = (t0 + 3816);
    xsi_vlogvar_assign_value(t34, t33, 0, 0, 3);
    goto LAB29;

LAB31:    xsi_set_current_line(75, ng0);

LAB34:    xsi_set_current_line(77, ng0);
    xsi_set_current_line(77, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 3976);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB35:    t2 = (t0 + 3976);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng19)));
    memset(t11, 0, 8);
    xsi_vlog_signed_less(t11, 32, t4, 32, t5, 32);
    t7 = (t11 + 4);
    t14 = *((unsigned int *)t7);
    t15 = (~(t14));
    t16 = *((unsigned int *)t11);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB36;

LAB37:    goto LAB33;

LAB36:    xsi_set_current_line(77, ng0);

LAB38:    xsi_set_current_line(78, ng0);
    t9 = (t0 + 3336);
    t10 = (t9 + 56U);
    t12 = *((char **)t10);
    t13 = (t0 + 3336);
    t26 = (t13 + 72U);
    t27 = *((char **)t26);
    t33 = (t0 + 3336);
    t34 = (t33 + 64U);
    t36 = *((char **)t34);
    t37 = (t0 + 3976);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    xsi_vlog_generic_get_array_select_value(t35, 32, t12, t27, t36, 2, 1, t39, 32, 1);
    t40 = (t0 + 2136U);
    t41 = *((char **)t40);
    memset(t42, 0, 8);
    t40 = (t35 + 4);
    t43 = (t41 + 4);
    t19 = *((unsigned int *)t35);
    t20 = *((unsigned int *)t41);
    t21 = (t19 ^ t20);
    t22 = *((unsigned int *)t40);
    t23 = *((unsigned int *)t43);
    t24 = (t22 ^ t23);
    t25 = (t21 | t24);
    t28 = *((unsigned int *)t40);
    t29 = *((unsigned int *)t43);
    t30 = (t28 | t29);
    t31 = (~(t30));
    t32 = (t25 & t31);
    if (t32 != 0)
        goto LAB42;

LAB39:    if (t30 != 0)
        goto LAB41;

LAB40:    *((unsigned int *)t42) = 1;

LAB42:    t45 = (t42 + 4);
    t46 = *((unsigned int *)t45);
    t47 = (~(t46));
    t48 = *((unsigned int *)t42);
    t49 = (t48 & t47);
    t50 = (t49 != 0);
    if (t50 > 0)
        goto LAB43;

LAB44:
LAB45:    xsi_set_current_line(83, ng0);
    xsi_vlogfile_write(1, 0, 0, ng22, 1, t0);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 3976);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t11, 0, 8);
    xsi_vlog_signed_add(t11, 32, t4, 32, t5, 32);
    t7 = (t0 + 3976);
    xsi_vlogvar_assign_value(t7, t11, 0, 0, 32);
    goto LAB35;

LAB41:    t44 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB42;

LAB43:    xsi_set_current_line(78, ng0);

LAB46:    xsi_set_current_line(79, ng0);
    xsi_vlogfile_write(1, 0, 0, ng20, 1, t0);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng21)));
    t3 = (t0 + 3816);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 3976);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4136);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    goto LAB45;

LAB48:    xsi_set_current_line(91, ng0);

LAB51:    xsi_set_current_line(92, ng0);
    t5 = (t0 + 4296);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng8)));
    memset(t11, 0, 8);
    xsi_vlog_signed_greatereq(t11, 32, t9, 32, t10, 32);
    t12 = (t11 + 4);
    t19 = *((unsigned int *)t12);
    t20 = (~(t19));
    t21 = *((unsigned int *)t11);
    t22 = (t21 & t20);
    t23 = (t22 != 0);
    if (t23 > 0)
        goto LAB52;

LAB53:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 3496);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3496);
    t7 = (t5 + 72U);
    t9 = *((char **)t7);
    t10 = (t0 + 3496);
    t12 = (t10 + 64U);
    t13 = *((char **)t12);
    t26 = (t0 + 4136);
    t27 = (t26 + 56U);
    t33 = *((char **)t27);
    xsi_vlog_generic_get_array_select_value(t11, 20, t4, t9, t13, 2, 1, t33, 32, 1);
    t34 = (t0 + 2296U);
    t36 = *((char **)t34);
    memset(t35, 0, 8);
    t34 = (t11 + 4);
    t37 = (t36 + 4);
    t14 = *((unsigned int *)t11);
    t15 = *((unsigned int *)t36);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t34);
    t18 = *((unsigned int *)t37);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t34);
    t22 = *((unsigned int *)t37);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB58;

LAB55:    if (t23 != 0)
        goto LAB57;

LAB56:    *((unsigned int *)t35) = 1;

LAB58:    t39 = (t35 + 4);
    t28 = *((unsigned int *)t39);
    t29 = (~(t28));
    t30 = *((unsigned int *)t35);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB59;

LAB60:    xsi_set_current_line(98, ng0);

LAB62:    xsi_set_current_line(99, ng0);
    xsi_vlogfile_write(1, 0, 0, ng24, 1, t0);
    xsi_set_current_line(100, ng0);
    t2 = (t0 + 4296);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t11, 0, 8);
    xsi_vlog_signed_add(t11, 32, t4, 32, t5, 32);
    t7 = (t0 + 4296);
    xsi_vlogvar_assign_value(t7, t11, 0, 0, 32);
    xsi_set_current_line(101, ng0);
    t2 = (t0 + 4296);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng25, 2, t0, (char)119, t4, 32);
    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng21)));
    t3 = (t0 + 3816);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB61:
LAB54:    goto LAB50;

LAB52:    xsi_set_current_line(93, ng0);
    t13 = ((char*)((ng16)));
    t26 = (t0 + 3816);
    xsi_vlogvar_wait_assign_value(t26, t13, 0, 0, 3, 0LL);
    goto LAB54;

LAB57:    t38 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB58;

LAB59:    xsi_set_current_line(96, ng0);
    t40 = ((char*)((ng23)));
    t41 = (t0 + 3816);
    xsi_vlogvar_wait_assign_value(t41, t40, 0, 0, 3, 0LL);
    goto LAB61;

LAB66:    t7 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB67;

LAB68:    xsi_set_current_line(117, ng0);
    t10 = ((char*)((ng31)));
    t12 = (t0 + 3816);
    xsi_vlogvar_assign_value(t12, t10, 0, 0, 3);
    goto LAB70;

LAB73:    t7 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB74;

LAB75:    xsi_set_current_line(119, ng0);
    t10 = ((char*)((ng32)));
    t12 = (t0 + 3816);
    xsi_vlogvar_assign_value(t12, t10, 0, 0, 3);
    goto LAB77;

LAB80:    t7 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB81;

LAB82:    xsi_set_current_line(121, ng0);
    t10 = ((char*)((ng33)));
    t12 = (t0 + 3816);
    xsi_vlogvar_assign_value(t12, t10, 0, 0, 3);
    goto LAB84;

}

static void Always_142_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 5872U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(142, ng0);
    t2 = (t0 + 6704);
    *((int *)t2) = 1;
    t3 = (t0 + 5904);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(143, ng0);
    t4 = (t0 + 3816);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 3656);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 3);
    goto LAB2;

}

static void NetReassign_126_3(char *t0)
{
    char t8[8];
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;

LAB0:    t1 = (t0 + 6120U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(126, ng0);
    t3 = 0;
    t2 = (t0 + 4456);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 2776U);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t5, 32, t7, 32);
    t6 = (t0 + 8716);
    if (*((int *)t6) > 0)
        goto LAB4;

LAB5:    if (t3 > 0)
        goto LAB6;

LAB7:    t11 = (t0 + 6720);
    *((int *)t11) = 0;

LAB8:
LAB1:    return;
LAB4:    t9 = (t0 + 4456);
    xsi_vlogvar_assignassignvalue(t9, t8, 0, 0, 0, 32, ((int*)(t6)));
    t3 = 1;
    goto LAB5;

LAB6:    t10 = (t0 + 6720);
    *((int *)t10) = 1;
    goto LAB8;

}

static void NetReassign_130_4(char *t0)
{
    char t8[8];
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;

LAB0:    t1 = (t0 + 6368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(130, ng0);
    t3 = 0;
    t2 = (t0 + 4456);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 2776U);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_minus(t8, 32, t5, 32, t7, 32);
    t6 = (t0 + 8720);
    if (*((int *)t6) > 0)
        goto LAB4;

LAB5:    if (t3 > 0)
        goto LAB6;

LAB7:    t11 = (t0 + 6736);
    *((int *)t11) = 0;

LAB8:
LAB1:    return;
LAB4:    t9 = (t0 + 4456);
    xsi_vlogvar_assignassignvalue(t9, t8, 0, 0, 0, 32, ((int*)(t6)));
    t3 = 1;
    goto LAB5;

LAB6:    t10 = (t0 + 6736);
    *((int *)t10) = 1;
    goto LAB8;

}


extern void work_m_00000000001353145740_0286164271_init()
{
	static char *pe[] = {(void *)Initial_42_0,(void *)Always_60_1,(void *)Always_142_2,(void *)NetReassign_126_3,(void *)NetReassign_130_4};
	xsi_register_didat("work_m_00000000001353145740_0286164271", "isim/tb_atm_isim_beh.exe.sim/work/m_00000000001353145740_0286164271.didat");
	xsi_register_executes(pe);
}
