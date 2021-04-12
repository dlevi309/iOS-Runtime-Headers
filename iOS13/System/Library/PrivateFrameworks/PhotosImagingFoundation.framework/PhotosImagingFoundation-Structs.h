/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
*/

typedef struct _NSZone* NSZoneRef;

typedef struct {
	long long value;
	int timescale;
	unsigned flags;
	long long epoch;
} SCD_Struct_IP1;

typedef struct {
	SCD_Struct_IP1 start;
	SCD_Struct_IP1 duration;
} SCD_Struct_IP2;

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

typedef struct {
	unsigned long long field1;
	id field2;
	unsigned long long field3;
	unsigned long long field4[5];
} SCD_Struct_IP6;

typedef struct PFIntSize_st {
	unsigned long long width;
	unsigned long long height;
} PFIntSize_st;

typedef struct CGImageSource* CGImageSourceRef;

typedef struct __CFString* CFStringRef;

typedef struct Matrix4d {
	double m[16];
} Matrix4d;

typedef struct Vector2d {
	double X;
	double Y;
} Vector2d;

typedef struct Quad2d {
	Vector2d V0;
	Vector2d V1;
	Vector2d V2;
	Vector2d V3;
} Quad2d;

