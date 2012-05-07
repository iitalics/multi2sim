/*
 *  Multi2Sim
 *  Copyright (C) 2012  Rafael Ubal (ubal@ece.neu.edu)
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#include <m2s-glut.h>
#include <debug.h>
#include <unistd.h>


#define __X86_GLUT_NOT_IMPL__  fatal("%s: not implemented.\n%s", \
	__FUNCTION__, err_x86_glut_not_impl);


static char *err_x86_glut_not_impl =
	"\tMulti2Sim provides partial support for the OpenGL Utility Toolkit (GLUT)\n"
	"\tlibrary. To request the implementation of a certain functionality, please\n"
	"\temail development@multi2sim.org.\n";

static char *err_x86_glut_version =
	"\tYour guest application is using a version of the GLUT runtime library\n"
	"\tthat is incompatible with this version of Multi2Sim. Please download the\n"
	"\tlatest Multi2Sim version, and recompile your application with the latest\n"
	"\tGLUT runtime library ('libm2s-glut').\n";


/* Multi2Sim GLUT Runtime required */
#define X86_GLUT_RUNTIME_VERSION_MAJOR	0
#define X86_GLUT_RUNTIME_VERSION_MINOR	669

struct x86_glut_version_t
{
	int major;
	int minor;
};

void glutInit(int *argcp, char **argv)
{
	struct x86_glut_version_t version;

	/* Runtime function 'init' */
	syscall(X86_GLUT_SYS_CODE, x86_glut_call_init, &version);

	/* Check that exact major version matches */
	if (version.major != X86_GLUT_RUNTIME_VERSION_MAJOR
			|| version.minor < X86_GLUT_RUNTIME_VERSION_MINOR)
		fatal("incompatible GLUT runtime versions.\n"
			"\tGuest library v. %d.%d / Host implementation v. %d.%d.\n"
			"%s", X86_GLUT_RUNTIME_VERSION_MAJOR, X86_GLUT_RUNTIME_VERSION_MINOR,
			version.major, version.minor, err_x86_glut_version);
}


void glutInitDisplayMode(unsigned int mode)
{
	__X86_GLUT_NOT_IMPL__
}


void glutInitDisplayString(const char *string)
{
	__X86_GLUT_NOT_IMPL__
}


void glutInitWindowPosition(int x, int y)
{
	__X86_GLUT_NOT_IMPL__
}


void glutInitWindowSize(int width, int height)
{
	__X86_GLUT_NOT_IMPL__
}


void glutMainLoop(void)
{
	__X86_GLUT_NOT_IMPL__
}


int glutCreateWindow(const char *title)
{
	__X86_GLUT_NOT_IMPL__
	return 0;
}


int glutCreateSubWindow(int win, int x, int y, int width, int height)
{
	__X86_GLUT_NOT_IMPL__
	return 0;
}


void glutDestroyWindow(int win)
{
	__X86_GLUT_NOT_IMPL__
}


void glutPostRedisplay(void)
{
	__X86_GLUT_NOT_IMPL__
}


void glutPostWindowRedisplay(int win)
{
	__X86_GLUT_NOT_IMPL__
}


void glutSwapBuffers(void)
{
	__X86_GLUT_NOT_IMPL__
}


int glutGetWindow(void)
{
	__X86_GLUT_NOT_IMPL__
	return 0;
}


void glutSetWindow(int win)
{
	__X86_GLUT_NOT_IMPL__
}


void glutSetWindowTitle(const char *title)
{
	__X86_GLUT_NOT_IMPL__
}


void glutSetIconTitle(const char *title)
{
	__X86_GLUT_NOT_IMPL__
}


void glutPositionWindow(int x, int y)
{
	__X86_GLUT_NOT_IMPL__
}


void glutReshapeWindow(int width, int height)
{
	__X86_GLUT_NOT_IMPL__
}


void glutPopWindow(void)
{
	__X86_GLUT_NOT_IMPL__
}


void glutPushWindow(void)
{
	__X86_GLUT_NOT_IMPL__
}


void glutIconifyWindow(void)
{
	__X86_GLUT_NOT_IMPL__
}


void glutShowWindow(void)
{
	__X86_GLUT_NOT_IMPL__
}


void glutHideWindow(void)
{
	__X86_GLUT_NOT_IMPL__
}


void glutFullScreen(void)
{
	__X86_GLUT_NOT_IMPL__
}


void glutSetCursor(int cursor)
{
	__X86_GLUT_NOT_IMPL__
}


void glutWarpPointer(int x, int y)
{
	__X86_GLUT_NOT_IMPL__
}


void glutEstablishOverlay(void)
{
	__X86_GLUT_NOT_IMPL__
}


void glutRemoveOverlay(void)
{
	__X86_GLUT_NOT_IMPL__
}


void glutUseLayer(GLenum layer)
{
	__X86_GLUT_NOT_IMPL__
}


void glutPostOverlayRedisplay(void)
{
	__X86_GLUT_NOT_IMPL__
}


void glutPostWindowOverlayRedisplay(int win)
{
	__X86_GLUT_NOT_IMPL__
}


void glutShowOverlay(void)
{
	__X86_GLUT_NOT_IMPL__
}


void glutHideOverlay(void)
{
	__X86_GLUT_NOT_IMPL__
}


int glutCreateMenu(void (*func)(int))
{
	__X86_GLUT_NOT_IMPL__
	return 0;
}


void glutDestroyMenu(int menu)
{
	__X86_GLUT_NOT_IMPL__
}


int glutGetMenu(void)
{
	__X86_GLUT_NOT_IMPL__
	return 0;
}


void glutSetMenu(int menu)
{
	__X86_GLUT_NOT_IMPL__
}


void glutAddMenuEntry(const char *label, int value)
{
	__X86_GLUT_NOT_IMPL__
}


void glutAddSubMenu(const char *label, int submenu)
{
	__X86_GLUT_NOT_IMPL__
}


void glutChangeToMenuEntry(int item, const char *label, int value)
{
	__X86_GLUT_NOT_IMPL__
}


void glutChangeToSubMenu(int item, const char *label, int submenu)
{
	__X86_GLUT_NOT_IMPL__
}


void glutRemoveMenuItem(int item)
{
	__X86_GLUT_NOT_IMPL__
}


void glutAttachMenu(int button)
{
	__X86_GLUT_NOT_IMPL__
}


void glutDetachMenu(int button)
{
	__X86_GLUT_NOT_IMPL__
}


void glutDisplayFunc(void (*func)(void))
{
	__X86_GLUT_NOT_IMPL__
}


void glutReshapeFunc(void (*func)(int width, int height))
{
	__X86_GLUT_NOT_IMPL__
}


void glutKeyboardFunc(void (*func)(unsigned char key, int x, int y))
{
	__X86_GLUT_NOT_IMPL__
}


void glutMouseFunc(void (*func)(int button, int state, int x, int y))
{
	__X86_GLUT_NOT_IMPL__
}


void glutMotionFunc(void (*func)(int x, int y))
{
	__X86_GLUT_NOT_IMPL__
}


void glutPassiveMotionFunc(void (*func)(int x, int y))
{
	__X86_GLUT_NOT_IMPL__
}


void glutEntryFunc(void (*func)(int state))
{
	__X86_GLUT_NOT_IMPL__
}


void glutVisibilityFunc(void (*func)(int state))
{
	__X86_GLUT_NOT_IMPL__
}


void glutIdleFunc(void (*func)(void))
{
	__X86_GLUT_NOT_IMPL__
}


void glutTimerFunc(unsigned int millis, void (*func)(int value), int value)
{
	__X86_GLUT_NOT_IMPL__
}


void glutMenuStateFunc(void (*func)(int state))
{
	__X86_GLUT_NOT_IMPL__
}


void glutSpecialFunc(void (*func)(int key, int x, int y))
{
	__X86_GLUT_NOT_IMPL__
}


void glutSpaceballMotionFunc(void (*func)(int x, int y, int z))
{
	__X86_GLUT_NOT_IMPL__
}


void glutSpaceballRotateFunc(void (*func)(int x, int y, int z))
{
	__X86_GLUT_NOT_IMPL__
}


void glutSpaceballButtonFunc(void (*func)(int button, int state))
{
	__X86_GLUT_NOT_IMPL__
}


void glutButtonBoxFunc(void (*func)(int button, int state))
{
	__X86_GLUT_NOT_IMPL__
}


void glutDialsFunc(void (*func)(int dial, int value))
{
	__X86_GLUT_NOT_IMPL__
}


void glutTabletMotionFunc(void (*func)(int x, int y))
{
	__X86_GLUT_NOT_IMPL__
}


void glutTabletButtonFunc(void (*func)(int button, int state, int x, int y))
{
	__X86_GLUT_NOT_IMPL__
}


void glutMenuStatusFunc(void (*func)(int status, int x, int y))
{
	__X86_GLUT_NOT_IMPL__
}


void glutOverlayDisplayFunc(void (*func)(void))
{
	__X86_GLUT_NOT_IMPL__
}


void glutWindowStatusFunc(void (*func)(int state))
{
	__X86_GLUT_NOT_IMPL__
}


void glutKeyboardUpFunc(void (*func)(unsigned char key, int x, int y))
{
	__X86_GLUT_NOT_IMPL__
}


void glutSpecialUpFunc(void (*func)(int key, int x, int y))
{
	__X86_GLUT_NOT_IMPL__
}


void glutJoystickFunc(void (*func)(unsigned int buttonMask, int x, int y, int z), int pollInterval)
{
	__X86_GLUT_NOT_IMPL__
}


void glutSetColor(int cell, GLfloat red, GLfloat green, GLfloat blue)
{
	__X86_GLUT_NOT_IMPL__
}


GLfloat glutGetColor(int ndx, int component)
{
	__X86_GLUT_NOT_IMPL__
	return 0.0;
}


void glutCopyColormap(int win)
{
	__X86_GLUT_NOT_IMPL__
}


int glutGet(GLenum type)
{
	__X86_GLUT_NOT_IMPL__
	return 0;
}


int glutDeviceGet(GLenum type)
{
	__X86_GLUT_NOT_IMPL__
	return 0;
}


int glutExtensionSupported(const char *name)
{
	__X86_GLUT_NOT_IMPL__
	return 0;
}


int glutGetModifiers(void)
{
	__X86_GLUT_NOT_IMPL__
	return 0;
}


int glutLayerGet(GLenum type)
{
	__X86_GLUT_NOT_IMPL__
	return 0;
}


void glutBitmapCharacter(void *font, int character)
{
	__X86_GLUT_NOT_IMPL__
}


int glutBitmapWidth(void *font, int character)
{
	__X86_GLUT_NOT_IMPL__
	return 0;
}


void glutStrokeCharacter(void *font, int character)
{
	__X86_GLUT_NOT_IMPL__
}


int glutStrokeWidth(void *font, int character)
{
	__X86_GLUT_NOT_IMPL__
	return 0;
}


int glutBitmapLength(void *font, const unsigned char *string)
{
	__X86_GLUT_NOT_IMPL__
	return 0;
}


int glutStrokeLength(void *font, const unsigned char *string)
{
	__X86_GLUT_NOT_IMPL__
	return 0;
}


void glutWireSphere(GLdouble radius, GLint slices, GLint stacks)
{
	__X86_GLUT_NOT_IMPL__
}


void glutSolidSphere(GLdouble radius, GLint slices, GLint stacks)
{
	__X86_GLUT_NOT_IMPL__
}


void glutWireCone(GLdouble base, GLdouble height, GLint slices, GLint stacks)
{
	__X86_GLUT_NOT_IMPL__
}


void glutSolidCone(GLdouble base, GLdouble height, GLint slices, GLint stacks)
{
	__X86_GLUT_NOT_IMPL__
}


void glutWireCube(GLdouble size)
{
	__X86_GLUT_NOT_IMPL__
}


void glutSolidCube(GLdouble size)
{
	__X86_GLUT_NOT_IMPL__
}


void glutWireTorus(GLdouble innerRadius, GLdouble outerRadius, GLint sides, GLint rings)
{
	__X86_GLUT_NOT_IMPL__
}


void glutSolidTorus(GLdouble innerRadius, GLdouble outerRadius, GLint sides, GLint rings)
{
	__X86_GLUT_NOT_IMPL__
}


void glutWireDodecahedron(void)
{
	__X86_GLUT_NOT_IMPL__
}


void glutSolidDodecahedron(void)
{
	__X86_GLUT_NOT_IMPL__
}


void glutWireTeapot(GLdouble size)
{
	__X86_GLUT_NOT_IMPL__
}


void glutSolidTeapot(GLdouble size)
{
	__X86_GLUT_NOT_IMPL__
}


void glutWireOctahedron(void)
{
	__X86_GLUT_NOT_IMPL__
}


void glutSolidOctahedron(void)
{
	__X86_GLUT_NOT_IMPL__
}


void glutWireTetrahedron(void)
{
	__X86_GLUT_NOT_IMPL__
}


void glutSolidTetrahedron(void)
{
	__X86_GLUT_NOT_IMPL__
}


void glutWireIcosahedron(void)
{
	__X86_GLUT_NOT_IMPL__
}


void glutSolidIcosahedron(void)
{
	__X86_GLUT_NOT_IMPL__
}


int glutVideoResizeGet(GLenum param)
{
	__X86_GLUT_NOT_IMPL__
	return 0;
}


void glutSetupVideoResizing(void)
{
	__X86_GLUT_NOT_IMPL__
}


void glutStopVideoResizing(void)
{
	__X86_GLUT_NOT_IMPL__
}


void glutVideoResize(int x, int y, int width, int height)
{
	__X86_GLUT_NOT_IMPL__
}


void glutVideoPan(int x, int y, int width, int height)
{
	__X86_GLUT_NOT_IMPL__
}


void glutReportErrors(void)
{
	__X86_GLUT_NOT_IMPL__
}


void glutIgnoreKeyRepeat(int ignore)
{
	__X86_GLUT_NOT_IMPL__
}


void glutSetKeyRepeat(int repeatMode)
{
	__X86_GLUT_NOT_IMPL__
}


void glutForceJoystickFunc(void)
{
	__X86_GLUT_NOT_IMPL__
}


void glutGameModeString(const char *string)
{
	__X86_GLUT_NOT_IMPL__
}


int glutEnterGameMode(void)
{
	__X86_GLUT_NOT_IMPL__
	return 0;
}


void glutLeaveGameMode(void)
{
	__X86_GLUT_NOT_IMPL__
}


int glutGameModeGet(GLenum mode)
{
	__X86_GLUT_NOT_IMPL__
	return 0;
}


