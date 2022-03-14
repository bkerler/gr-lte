/*
 * Copyright 2022 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(mimo_pss_coarse_control.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(3560d3a63a1044fcde125d93944a4dfe)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <lte/mimo_pss_coarse_control.h>
// pydoc.h is automatically generated in the build directory
#include <mimo_pss_coarse_control_pydoc.h>

void bind_mimo_pss_coarse_control(py::module& m)
{

    using mimo_pss_coarse_control    = ::gr::lte::mimo_pss_coarse_control;


    py::class_<mimo_pss_coarse_control, gr::block, gr::basic_block,
        std::shared_ptr<mimo_pss_coarse_control>>(m, "mimo_pss_coarse_control", D(mimo_pss_coarse_control))

        .def(py::init(&mimo_pss_coarse_control::make),
           py::arg("rxant"),
           D(mimo_pss_coarse_control,make)
        )
        



        ;




}








