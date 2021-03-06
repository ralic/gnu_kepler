/*
 * earth_figure.h - Declarations for calculating earth figure values
 * Copyright (C) 2016 Shiva Iyer <shiva.iyer AT g m a i l DOT c o m>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _EARTH_FIGURE_H_
#define _EARTH_FIGURE_H_

void earth_figure_values(double geog_lat, double height_msl,
			 double *gc_lat, double *gc_radius);

double earth_gcdist(double lon1, double lat1, double lon2, double lat2,
		    double *inb, double *fib);

double earth_gcend(double lon1, double lat1, double inb, double dist,
		   double *lon2, double *lat2);

#endif
