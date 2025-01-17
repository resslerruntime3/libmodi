/*
 * Universal Disk Image Format (UDIF) resource file functions
 *
 * Copyright (C) 2012-2022, Joachim Metz <joachim.metz@gmail.com>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#if !defined( _LIBMODI_UDIF_RESOURCE_FILE_H )
#define _LIBMODI_UDIF_RESOURCE_FILE_H

#include <common.h>
#include <types.h>

#include "libmodi_libbfio.h"
#include "libmodi_libcerror.h"

#if defined( __cplusplus )
extern "C" {
#endif

typedef struct libmodi_udif_resource_file libmodi_udif_resource_file_t;

struct libmodi_udif_resource_file
{
	/* The data fork offset
	 */
	uint64_t data_fork_offset;

	/* The data fork size
	 */
	uint64_t data_fork_size;

	/* The resource fork offset
	 */
	uint64_t resource_fork_offset;

	/* The resource fork size
	 */
	uint64_t resource_fork_size;

	/* The XML plist offset
	 */
	uint64_t xml_plist_offset;

	/* The XML plist size
	 */
	uint64_t xml_plist_size;

	/* The number of sectors
	 */
	uint32_t number_of_sectors;
};

int libmodi_udif_resource_file_initialize(
     libmodi_udif_resource_file_t **resource_file,
     libcerror_error_t **error );

int libmodi_udif_resource_file_free(
     libmodi_udif_resource_file_t **resource_file,
     libcerror_error_t **error );

int libmodi_udif_resource_file_read_data(
     libmodi_udif_resource_file_t *resource_file,
     const uint8_t *data,
     size_t data_size,
     libcerror_error_t **error );

int libmodi_udif_resource_file_read_file_io_handle(
     libmodi_udif_resource_file_t *resource_file,
     libbfio_handle_t *file_io_handle,
     off64_t offset,
     libcerror_error_t **error );

#if defined( __cplusplus )
}
#endif

#endif /* !defined( _LIBMODI_UDIF_RESOURCE_FILE_H ) */

