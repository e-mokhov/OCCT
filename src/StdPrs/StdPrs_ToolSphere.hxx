// Created on: 2016-02-04
// Created by: Anastasia BORISOVA
// Copyright (c) 2016 OPEN CASCADE SAS
//
// This file is part of Open CASCADE Technology software library.
//
// This library is free software; you can redistribute it and/or modify it under
// the terms of the GNU Lesser General Public License version 2.1 as published
// by the Free Software Foundation, with special exception defined in the file
// OCCT_LGPL_EXCEPTION.txt. Consult the file LICENSE_LGPL_21.txt included in OCCT
// distribution for complete text of the license and disclaimer of any warranty.
//
// Alternatively, this file may be used under the terms of Open CASCADE
// commercial license or contractual agreement.

#ifndef _StdPrs_ToolSphere_HeaderFile
#define _StdPrs_ToolSphere_HeaderFile

#include <Graphic3d_ArrayOfPrimitives.hxx>
#include <Graphic3d_ArrayOfTriangles.hxx>
#include <Poly_Triangulation.hxx>
#include <Prs3d_Root.hxx>
#include <Prs3d_Drawer.hxx>
#include <SelectMgr_Selection.hxx>
#include <Standard.hxx>
#include <Standard_Handle.hxx>
#include <StdPrs_ToolQuadric.hxx>

//! Standard presentation algorithm that outputs graphical primitives for spherical surface.
class StdPrs_ToolSphere : public StdPrs_ToolQuadric
{
public:

  DEFINE_STANDARD_ALLOC

  //! Initializes the algorithm.
  Standard_EXPORT StdPrs_ToolSphere (const Standard_ShortReal theRadius,
                                     const Standard_Integer theSlicesNb,
                                     const Standard_Integer theStacksNb);

protected:

  //! Computes vertex at given parameter location of the surface.
  Standard_EXPORT virtual gp_Pnt Vertex (const Standard_Real theU, const Standard_Real theV) Standard_OVERRIDE;

  //! Computes normal at given parameter location of the surface.
  Standard_EXPORT virtual gp_Dir Normal (const Standard_Real theU, const Standard_Real theV) Standard_OVERRIDE;

protected:

  Standard_ShortReal myRadius;
};


#endif