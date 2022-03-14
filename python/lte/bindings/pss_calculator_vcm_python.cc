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
/* BINDTOOL_HEADER_FILE(pss_calculator_vcm.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(79914cbdc75e22b03c408cb4736bc1cc)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <lte/pss_calculator_vcm.h>
// pydoc.h is automatically generated in the build directory
#include <pss_calculator_vcm_pydoc.h>

void bind_pss_calculator_vcm(py::module& m)
{

    using pss_calculator_vcm    = ::gr::lte::pss_calculator_vcm;


    py::class_<pss_calculator_vcm, gr::sync_block, gr::block, gr::basic_block,
        std::shared_ptr<pss_calculator_vcm>>(m, "pss_calculator_vcm", D(pss_calculator_vcm))

        .def(py::init(&pss_calculator_vcm::make),
           py::arg("fftl"),
           py::arg("name") = "pss_calculator_vcm",
           D(pss_calculator_vcm,make)
        )
        



        ;




}








