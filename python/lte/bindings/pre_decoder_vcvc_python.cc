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
/* BINDTOOL_HEADER_FILE(pre_decoder_vcvc.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(a36c5010439ada725ece1216b8a4bcd7)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <lte/pre_decoder_vcvc.h>
// pydoc.h is automatically generated in the build directory
#include <pre_decoder_vcvc_pydoc.h>

void bind_pre_decoder_vcvc(py::module& m)
{

    using pre_decoder_vcvc    = ::gr::lte::pre_decoder_vcvc;


    py::class_<pre_decoder_vcvc, gr::sync_block, gr::block, gr::basic_block,
        std::shared_ptr<pre_decoder_vcvc>>(m, "pre_decoder_vcvc", D(pre_decoder_vcvc))

        .def(py::init(&pre_decoder_vcvc::make),
           py::arg("rxant"),
           py::arg("N_ant"),
           py::arg("vlen"),
           py::arg("style"),
           D(pre_decoder_vcvc,make)
        )
        


        
        .def("set_N_ant",&pre_decoder_vcvc::set_N_ant,       
            py::arg("N_ant"),
            D(pre_decoder_vcvc,set_N_ant)
        )


        
        .def("get_N_ant",&pre_decoder_vcvc::get_N_ant,       
            D(pre_decoder_vcvc,get_N_ant)
        )


        
        .def("set_decoding_style",&pre_decoder_vcvc::set_decoding_style,       
            py::arg("style"),
            D(pre_decoder_vcvc,set_decoding_style)
        )


        
        .def("get_decoding_style",&pre_decoder_vcvc::get_decoding_style,       
            D(pre_decoder_vcvc,get_decoding_style)
        )



        ;




}








