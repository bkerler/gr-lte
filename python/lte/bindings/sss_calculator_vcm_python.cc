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
/* BINDTOOL_HEADER_FILE(sss_calculator_vcm.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(57c2a6aa3dc3643076892c21cd71f0a9)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <lte/sss_calculator_vcm.h>
// pydoc.h is automatically generated in the build directory
#include <sss_calculator_vcm_pydoc.h>

void bind_sss_calculator_vcm(py::module& m)
{

    using sss_calculator_vcm    = ::gr::lte::sss_calculator_vcm;


    py::class_<sss_calculator_vcm, gr::sync_block, gr::block, gr::basic_block,
        std::shared_ptr<sss_calculator_vcm>>(m, "sss_calculator_vcm", D(sss_calculator_vcm))

        .def(py::init(&sss_calculator_vcm::make),
           py::arg("fftl"),
           py::arg("key_id"),
           py::arg("key_offset"),
           py::arg("name") = "sss_calculator_vcm",
           D(sss_calculator_vcm,make)
        )
        




        
        .def("get_cell_id",&sss_calculator_vcm::get_cell_id,       
            D(sss_calculator_vcm,get_cell_id)
        )


        
        .def("get_frame_start",&sss_calculator_vcm::get_frame_start,       
            D(sss_calculator_vcm,get_frame_start)
        )

        ;




}








