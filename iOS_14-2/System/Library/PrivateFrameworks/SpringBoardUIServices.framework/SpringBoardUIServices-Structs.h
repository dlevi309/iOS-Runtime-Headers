/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
*/

typedef struct {
	BOOL field1;
	BOOL field2;
	double field3;
	BOOL field4;
	double field5;
	double field6;
	double field7;
	double field8;
	BOOL field9;
	BOOL field10;
	BOOL field11;
	unsigned long long field12;
} SCD_Struct_SB0;

typedef struct {
	long long fromState;
	long long toState;
	double progress;
} SCD_Struct_SB1;

typedef struct {
	BOOL showScanningState;
	BOOL showScanningStateDuringFaceDetect;
	double minimumDurationBeforeShowScanningState;
	BOOL bkCoachingHintsEnabled;
	double minimumDurationBetweenLeavingCoachingAndCoaching;
	double minimumDurationShowingCoaching;
	double durationOnCameraCoveredGlyphBeforeCoaching;
	double durationToSuppressCameraCoveredWhenWakingWithSmartCover;
	BOOL coachingDelaysUnlock;
	BOOL suppressFaceIDDisabledState;
	BOOL spinBeforeCoaching;
	unsigned long long substate;
} SCD_Struct_SB2;

typedef struct UIEdgeInsets {
	double top;
	double left;
	double bottom;
	double right;
} UIEdgeInsets;

typedef struct _NSZone* NSZoneRef;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct CGAffineTransform {
	double a;
	double b;
	double c;
	double d;
	double tx;
	double ty;
} CGAffineTransform;

