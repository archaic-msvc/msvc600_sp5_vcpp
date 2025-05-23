/******************************************************************************

 Copyright (c) 1999 Advanced Micro Devices, Inc.

 LIMITATION OF LIABILITY:  THE MATERIALS ARE PROVIDED *AS IS* WITHOUT ANY
 EXPRESS OR IMPLIED WARRANTY OF ANY KIND INCLUDING WARRANTIES OF MERCHANTABILITY,
 NONINFRINGEMENT OF THIRD-PARTY INTELLECTUAL PROPERTY, OR FITNESS FOR ANY
 PARTICULAR PURPOSE.  IN NO EVENT SHALL AMD OR ITS SUPPLIERS BE LIABLE FOR ANY
 DAMAGES WHATSOEVER (INCLUDING, WITHOUT LIMITATION, DAMAGES FOR LOSS OF PROFITS,
 BUSINESS INTERRUPTION, LOSS OF INFORMATION) ARISING OUT OF THE USE OF OR
 INABILITY TO USE THE MATERIALS, EVEN IF AMD HAS BEEN ADVISED OF THE POSSIBILITY
 OF SUCH DAMAGES.  BECAUSE SOME JURISDICTIONS PROHIBIT THE EXCLUSION OR LIMITATION
 OF LIABILITY FOR CONSEQUENTIAL OR INCIDENTAL DAMAGES, THE ABOVE LIMITATION MAY
 NOT APPLY TO YOU.

 AMD does not assume any responsibility for any errors which may appear in the
 Materials nor any responsibility to support or update the Materials.  AMD retains
 the right to make changes to its test specifications at any time, without notice.

 NO SUPPORT OBLIGATION: AMD is not obligated to furnish, support, or make any
 further information, software, technical information, know-how, or show-how
 available to you.

 So that all may benefit from your experience, please report  any  problems
 or  suggestions about this software to 3dsdk.support@amd.com

 AMD Developer Technologies, M/S 585
 Advanced Micro Devices, Inc.
 5900 E. Ben White Blvd.
 Austin, TX 78741
 3dsdk.support@amd.com

*******************************************************************************

 AVECTOR.H

 AMD3D 3D library code: Vector Math

*******************************************************************************/

#ifndef _AMD_AVECTOR_H
#define _AMD_AVECTOR_H

#include <d3dtypes.h>

#ifdef __cplusplus
extern "C" {
#endif

void _add_vect  (D3DVECTOR *res, const D3DVECTOR *a, const D3DVECTOR *b);
void _sub_vect  (D3DVECTOR *res, const D3DVECTOR *a, const D3DVECTOR *b);
void _mult_vect (D3DVECTOR *res, const D3DVECTOR *a, const D3DVECTOR *b);
void _scale_vect(D3DVECTOR *res, const D3DVECTOR *a, float b);
void _norm_vect (D3DVECTOR *res, const D3DVECTOR *a);
float _mag_vect (const D3DVECTOR *a);
float _dot_vect (const D3DVECTOR *a, const D3DVECTOR *b);
void _cross_vect(D3DVECTOR *res, const D3DVECTOR *a, const D3DVECTOR *b);

/* fastcall routines */
void a_mag_vect(void);      /* eax -> mm0       */
void a_dot_vect(void);      /* eax * edx -> mm0 */

/* Unaccelerated routines */
void add_vect  (D3DVECTOR *res, const D3DVECTOR *a, const D3DVECTOR *b);
void sub_vect  (D3DVECTOR *res, const D3DVECTOR *a, const D3DVECTOR *b);
void mult_vect (D3DVECTOR *res, const D3DVECTOR *a, const D3DVECTOR *b);
void scale_vect(D3DVECTOR *res, const D3DVECTOR *a, float b);
void norm_vect (D3DVECTOR *res, const D3DVECTOR *a);
float mag_vect (const D3DVECTOR *a);
float dot_vect (const D3DVECTOR *a, const D3DVECTOR *b);
void cross_vect(D3DVECTOR *res, const D3DVECTOR *a, const D3DVECTOR *b);

#ifdef __cplusplus
}
#endif

#endif

/* eof - AVECTOR.H */
