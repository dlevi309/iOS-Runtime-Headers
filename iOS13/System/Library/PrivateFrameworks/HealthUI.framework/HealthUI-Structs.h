/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

typedef struct {
	long long field1;
	long long field2;
} SCD_Struct_HK0;

typedef struct _NSZone* NSZoneRef;

typedef struct CGContext* CGContextRef;

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

typedef struct UIEdgeInsets {
	double top;
	double left;
	double bottom;
	double right;
} UIEdgeInsets;

typedef struct {
	unsigned timestamp : 1;
	unsigned categoryID : 1;
	unsigned type : 1;
} SCD_Struct_He7;

typedef struct {
	unsigned numAccounts : 1;
	unsigned timestamp : 1;
} SCD_Struct_He8;

typedef struct {
	long long index;
	long long zoom;
} SCD_Struct_HK9;

typedef struct {
	SCD_Struct_HK9 blockPath;
	long long index;
} SCD_Struct_HK10;

typedef struct {
	SCD_Struct_HK10 min;
	SCD_Struct_HK10 max;
} SCD_Struct_HK11;

typedef struct CGColor* CGColorRef;

typedef struct CGAffineTransform {
	double a;
	double b;
	double c;
	double d;
	double tx;
	double ty;
} CGAffineTransform;

typedef struct {
	CGRect transformedRect;
	double labelValue;
	long long options;
} SCD_Struct_HK14;

typedef struct {
	CGRect field1;
	double field2;
	long long field3;
} SCD_Struct_HK15;

typedef struct {
	SCD_Struct_HK9 field1;
	long long field2;
} SCD_Struct_HK16;

typedef struct {
	CGPoint field1;
	CGPoint field2;
} SCD_Struct_HK17;

typedef struct HKLinearTransform {
	double offset;
	double scale;
} HKLinearTransform;

typedef struct __CTServerConnection* CTServerConnectionRef;

