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
/* BINDTOOL_HEADER_FILE(subblock_deinterleaver_vfvf.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(e57126283815e348dad98e69089fe062)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <lte/subblock_deinterleaver_vfvf.h>
// pydoc.h is automatically generated in the build directory
#include <subblock_deinterleaver_vfvf_pydoc.h>

void bind_subblock_deinterleaver_vfvf(py::module& m)
{

    using subblock_deinterleaver_vfvf    = ::gr::lte::subblock_deinterleaver_vfvf;


    py::class_<subblock_deinterleaver_vfvf, gr::sync_block, gr::block, gr::basic_block,
        std::shared_ptr<subblock_deinterleaver_vfvf>>(m, "subblock_deinterleaver_vfvf", D(subblock_deinterleaver_vfvf))

        .def(py::init(&subblock_deinterleaver_vfvf::make),
           py::arg("num_groups"),
           py::arg("items_per_group"),
           py::arg("name") = "subblock_deinterleaver_vfvf",
           D(subblock_deinterleaver_vfvf,make)
        )
        



        ;




}








