/* Copyright (C) 1992-1998 The Geometry Center
 * Copyright (C) 1998-2000 Stuart Levy, Tamara Munzner, Mark Phillips
 *
 * This file is part of Geomview.
 * 
 * Geomview is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published
 * by the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 * 
 * Geomview is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public
 * License along with Geomview; see the file COPYING.  If not, write
 * to the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139,
 * USA, or visit http://www.gnu.org.
 */
#include <geom.h>
#include "color.h"
#include "vec4.h"

typedef double vec4[4];

/* in xform.c */
extern proj_matrix	*matmatmul4 (matrix4 mat1, matrix4 mat2, matrix4 mat3);
extern vec4		*vecmatmul4 (point4 v1, matrix4 m, point4 v2);
extern vec4		*matvecmul4 (matrix4 m, point4 v1, point4 v2);

/* in projective.c */
extern vec4		*conf2proj ();
extern vec4 		*proj2conf ();
extern vec4		*hs2ball ();
extern proj_matrix	*sl2c2proj ();

/* in polyhedron.c */
extern Geom		*WEPolyhedronToPolyList(WEpolyhedron *poly);
extern Geom		*WEPolyhedronToVect(WEpolyhedron *poly, HPoint3 origin);

/* colormap.c */
extern int		readcmap(char *cmapfname);
extern ColorA		GetCmapEntry(int n);
