////////////////////////////////////////////////////////////////////////////////////
//
// PROJECT:       GedWise 6.0
//
// FILE:          Soundex.h
//
// AUTHOR:        Daniel T. Rencricca: October 15, 2004
//
// DESCRIPTION:   Header file for Soundex converter routines.
//
////////////////////////////////////////////////////////////////////////////////////
// Copyright � 2001 - 2004, Battery Park Software ("BPS").  
// All rights reserved.
////////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////////
// Local Defines
////////////////////////////////////////////////////////////////////////////////////
#define chrSm_N_WithTilda	 	0xF1
#define chrSmall_S_Caron	 	0x9A
#define chrSmall_C_Cedilla 	0xE7

////////////////////////////////////////////////////////////////////////////////////
//	Internal Function Prototypes																	 //
////////////////////////////////////////////////////////////////////////////////////

#ifdef __cplusplus
extern "C" {
#endif

static void* 	GetObjectPtr (const UInt16 objectID);
static void 	SoundexGetCode (void);
static void   	SoundexCheckChar (EventPtr event);
static void   	SoundexClearSoundexCode (void);
static void   	SoundexClearForm (void);
static Char 	ConvertAChar (const Char aChar);
Char*				Soundex (const Char *astring);
Boolean     	SoundexHandleEvent (EventPtr event);

#ifdef __cplusplus
}
#endif