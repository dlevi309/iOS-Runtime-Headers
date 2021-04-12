/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsUI.framework/ActivityAchievementsUI
*/

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

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
} SCD_Struct_AA2;

typedef union GLKMatrix4 {
	SCD_Struct_AA2 field1;
	float m[16];
} GLKMatrix4;

typedef struct _UniformBinding {
	int location;
	char* name;
} UniformBinding;

typedef struct _UniformBindings {
	UniformBinding viewProjectionMatrix;
	UniformBinding modelMatrix;
	UniformBinding environmentMatrix;
	UniformBinding cameraPosition;
	UniformBinding useTexture;
	UniformBinding useTextureShine;
	UniformBinding useFullColorEnamel;
	UniformBinding color;
	UniformBinding enamelColor;
	UniformBinding colorSampler;
	UniformBinding environmentSampler;
	UniformBinding fleckNormalSampler;
	UniformBinding triColor1;
	UniformBinding triColor2;
	UniformBinding triColor3;
} UniformBindings;

typedef struct {
	float x;
	float y;
	float z;
} SCD_Struct_AA6;

typedef union GLKVector3 {
	SCD_Struct_AA6 field1;
	SCD_Struct_AA6 field2;
	SCD_Struct_AA6 field3;
	float v[3];
} GLKVector3;

typedef struct {
	float x;
	float y;
	f} z;
	SCD_Struct_AA6 ;
	SCD_Struct_AA6 ;
	3f v;
} SCD_Struct_AA8;

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
