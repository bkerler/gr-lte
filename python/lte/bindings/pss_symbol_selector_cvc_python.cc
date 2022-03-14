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
/* BINDTOOL_HEADER_FILE(pss_symbol_selector_cvc.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(0be5f140f09c7fedf7abd36253cb0024)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <lte/pss_symbol_selector_cvc.h>
// pydoc.h is automatically generated in the build directory
#include <pss_symbol_selector_cvc_pydoc.h>

void bind_pss_symbol_selector_cvc(py::module& m)
{

    using pss_symbol_selector_cvc    = ::gr::lte::pss_symbol_selector_cvc;


    py::class_<pss_symbol_selector_cvc, gr::block, gr::basic_block,
        std::shared_ptr<pss_symbol_selector_cvc>>(m, "pss_symbol_selector_cvc", D(pss_symbol_selector_cvc))

        .def(py::init(&pss_symbol_selector_cvc::make),
           py::arg("fftl"),
           py::arg("name") = "pss_symbol_selector_cvc",
           D(pss_symbol_selector_cvc,make)
        )
        



        ;




}








