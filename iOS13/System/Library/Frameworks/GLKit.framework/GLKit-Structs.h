/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/GLKit.framework/GLKit
*/

typedef struct {
	float x;
	float y;
	float z;
	float w;
} SCD_Struct_GL0;

typedef union GLKVector4 {
	SCD_Struct_GL0 field1;
	SCD_Struct_GL0 field2;
	SCD_Struct_GL0 field3;
	float v[4];
} GLKVector4;

typedef struct GLKBigInt_s {
	unsigned long long n0;
	unsigned long long n1;
} GLKBigInt_s;

typedef struct _NSZone* NSZoneRef;

typedef struct {
	float x;
	float y;
	float z;
} SCD_Struct_GL4;

typedef union GLKVector3 {
	SCD_Struct_GL4 field1;
	SCD_Struct_GL4 field2;
	SCD_Struct_GL4 field3;
	float v[3];
} GLKVector3;

typedef struct {
	float m00;
	float m01;
	float m02;
	float m03;
	float m10;
	float m11;
	float m12;
	float m13;
	float m20;
	float m21;
	float m22;
	float m23;
	float m30;
	float m31;
	float m32;
	float m33;
} SCD_Struct_GL6;

typedef union GLKMatrix4 {
	SCD_Struct_GL6 field1;
	float m[16];
} GLKMatrix4;

typedef struct {
	float m00;
	float m01;
	float m02;
	float m10;
	float m11;
	float m12;
	float m20;
	float m21;
	float m22;
} SCD_Struct_GL8;

typedef union GLKMatrix3 {
	SCD_Struct_GL8 field1;
	float m[9];
} GLKMatrix3;

typedef struct CGImageBlockSet* CGImageBlockSetRef;

typedef struct __CFData* CFDataRef;

typedef struct CGImage* CGImageRef;

typedef struct CGImageProvider* CGImageProviderRef;

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

