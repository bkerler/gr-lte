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
/* BINDTOOL_HEADER_FILE(descrambler_vfvf.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(4df951e3f0ba9b05fb6848bb48bf9333)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <lte/descrambler_vfvf.h>
// pydoc.h is automatically generated in the build directory
#include <descrambler_vfvf_pydoc.h>

void bind_descrambler_vfvf(py::module& m)
{

    using descrambler_vfvf    = ::gr::lte::descrambler_vfvf;


    py::class_<descrambler_vfvf, gr::sync_block, gr::block, gr::basic_block,
        std::shared_ptr<descrambler_vfvf>>(m, "descrambler_vfvf", D(descrambler_vfvf))

        .def(py::init(&descrambler_vfvf::make),
           py::arg("tag_key"),
           py::arg("msg_buf_name"),
           py::arg("len"),
           py::arg("name") = "descrambler_vfvf",
           D(descrambler_vfvf,make)
        )
        


        
        .def("set_descr_seqs",&descrambler_vfvf::set_descr_seqs,       
            py::arg("seqs"),
            D(descrambler_vfvf,set_descr_seqs)
        )



        ;




}








