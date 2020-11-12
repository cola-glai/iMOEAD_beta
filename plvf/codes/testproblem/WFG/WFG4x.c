/*
 * WFG4x.c
 *  These are variants of WFG4 instance, which keeps the g(x) function and differentiate on the shape functions only.
 *
 * Authors:
 *  Ke Li <k.li@exeter.ac.uk>
 *  Renzhi Chen <rxc332@cs.bham.ac.uk>
 *
 * Copyright (c) 2017 Renzhi Chen, Ke Li
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

# include "toolkit.h"

void wfg41 (individual_real *ind)
{
    int i;
    int size;
    double *xreal, *obj;

    Degenerate = 0;

    WFG_ini ();

    obj   = ind->obj;
    xreal = ind->xreal;
    size  = number_variable;
    size  = WFG4_t1 (xreal, size, wfg_temp);
    size  = WFG2_t3 (wfg_temp, size, wfg_K, number_objective, wfg_temp);
    WFG4_shape (wfg_temp, size, obj);

    WFG_free ();
}

void wfg42 (individual_real *ind)
{
    int i;
    int size;
    double *xreal, *obj;

    Degenerate = 0;

    WFG_ini ();

    obj   = ind->obj;
    xreal = ind->xreal;
    size  = number_variable;
    size  = WFG4_t1 (xreal, size, wfg_temp);
    size  = WFG2_t3 (wfg_temp, size, wfg_K, number_objective, wfg_temp);
    WFG42_shape (wfg_temp, size, obj);

    WFG_free ();
}

void wfg43 (individual_real *ind)
{
    int i;
    int size;
    double *xreal, *obj;

    Degenerate = 0;

    WFG_ini ();

    obj   = ind->obj;
    xreal = ind->xreal;
    size  = number_variable;
    size  = WFG4_t1 (xreal, size, wfg_temp);
    size  = WFG2_t3 (wfg_temp, size, wfg_K, number_objective, wfg_temp);
    WFG43_shape (wfg_temp, size, obj);

    WFG_free ();
}

void wfg44 (individual_real *ind)
{
    int i;
    int size;
    double *xreal, *obj;

    Degenerate = 0;

    WFG_ini ();

    obj   = ind->obj;
    xreal = ind->xreal;
    size  = number_variable;
    size  = WFG4_t1 (xreal, size, wfg_temp);
    size  = WFG2_t3 (wfg_temp, size, wfg_K, number_objective, wfg_temp);
    WFG44_shape (wfg_temp, size, obj);

    WFG_free ();
}

void wfg45 (individual_real *ind)
{
    int i;
    int size;
    double *xreal, *obj;

    Degenerate = 0;

    WFG_ini ();

    obj   = ind->obj;
    xreal = ind->xreal;
    size  = number_variable;
    size  = WFG4_t1 (xreal, size, wfg_temp);
    size  = WFG2_t3 (wfg_temp, size, wfg_K, number_objective, wfg_temp);
    WFG45_shape (wfg_temp, size, obj);

    WFG_free ();
}

void wfg46 (individual_real *ind)
{
    int i;
    int size;
    double *xreal, *obj;

    Degenerate = 0;

    WFG_ini ();

    obj   = ind->obj;
    xreal = ind->xreal;
    size  = number_variable;
    size  = WFG4_t1 (xreal, size, wfg_temp);
    size  = WFG2_t3 (wfg_temp, size, wfg_K, number_objective, wfg_temp);
    WFG46_shape (wfg_temp, size, obj);

    WFG_free ();
}

void wfg47 (individual_real *ind)
{
    int i;
    int size;
    double *xreal, *obj;

    Degenerate = 0;

    WFG_ini ();

    obj   = ind->obj;
    xreal = ind->xreal;
    size  = number_variable;
    size  = WFG4_t1 (xreal, size, wfg_temp);
    size  = WFG2_t3 (wfg_temp, size, wfg_K, number_objective, wfg_temp);
    WFG47_shape (wfg_temp, size, obj);

    WFG_free ();
}

void wfg48 (individual_real *ind)
{
    int i;
    int size;
    double *xreal, *obj;

    Degenerate = 0;

    WFG_ini ();

    obj   = ind->obj;
    xreal = ind->xreal;
    size  = number_variable;
    size  = WFG4_t1 (xreal, size, wfg_temp);
    size  = WFG2_t3 (wfg_temp, size, wfg_K, number_objective, wfg_temp);
    WFG48_shape (wfg_temp, size, obj);

    WFG_free ();
}