/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
*/

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned ndouble : 1;
	unsigned nint64 : 1;
	unsigned nuint64 : 1;
	unsigned nfloat : 1;
	unsigned nint32 : 1;
	unsigned nuint32 : 1;
	unsigned subtype : 1;
	unsigned nbool : 1;
} SCD_Struct_SP1;

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
	unsigned duration : 1;
} SCD_Struct_SP5;

typedef struct {
	unsigned errorCode : 1;
	unsigned status : 1;
} SCD_Struct_SP6;

typedef struct {
	CLLocationCoordinate2D field1;
	CGPoint field2;
} SCD_Struct_WK7;

typedef struct {
	CGPoint field1;
	CGPoint field2;
} SCD_Struct_WK8;

