/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct _NSZone* NSZoneRef;

typedef struct CGImage* CGImageRef;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct {
	long long x;
	long long y;
} SCD_Struct_PI5;

typedef struct {
	SCD_Struct_PI5 origin;
	SCD_Struct_PI5 size;
} SCD_Struct_PI6;

typedef struct {
	long long field1;
	int field2;
	unsigned field3;
	long long field4;
} SCD_Struct_PI7;

typedef struct {
	long long value;
	int timescale;
	unsigned flags;
	long long epoch;
} SCD_Struct_PI8;

typedef struct {
	[3 columns];
} SCD_Struct_PI9;

typedef struct {
	double field1;
	double field2;
	double field3;
} SCD_Struct_PI10;

typedef struct {
	double field1[4];
} SCD_Struct_PI11;

typedef struct {
	SCD_Struct_PI11 field1;
	SCD_Struct_PI11 field2;
	double field3;
} SCD_Struct_PI12;

typedef struct {
	double exposure;
	double contrast;
	double brightness;
	double shadows;
	double highlights;
	double black;
	double rawHighlights;
	double localLight;
} SCD_Struct_PI13;

typedef struct CGColorSpace* CGColorSpaceRef;

typedef struct CGVector {
	double dx;
	double dy;
} CGVector;

typedef struct CGAffineTransform {
	double a;
	double b;
	double c;
	double d;
	double tx;
	double ty;
} CGAffineTransform;

typedef struct {
	double p75;
	double p98;
	double autoValue;
	double g98;
} SCD_Struct_PI17;

typedef struct {
	double sat;
	double contrast;
	double cast;
} SCD_Struct_PI18;

typedef struct shared_ptr<VRFSession> {
	VRFSession __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<VRFSession>;

typedef struct {
	 xy;
	 wh;
} SCD_Struct_PI20;

typedef union CenteredRect {
	SCD_Struct_PI17 field1;
	SCD_Struct_PI20 field2;
	 xywh;
} CenteredRect;

typedef struct {
	int major;
	int minor;
} SCD_Struct_PI22;

typedef struct {
	SCD_Struct_PI8 field1;
	SCD_Struct_PI8 field2;
} SCD_Struct_PI23;

