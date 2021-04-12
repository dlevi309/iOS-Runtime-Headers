/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation
*/

typedef struct {
	[4 columns];
} SCD_Struct_PK0;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct __SecAccessControl* SecAccessControlRef;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct {
	unsigned didTransitionToEvaluationStateWithEvent : 1;
	unsigned didTransitionToCoachingState : 1;
} SCD_Struct_PK4;

typedef struct {
	long long field1;
	long long field2;
} SCD_Struct_PK5;

typedef struct CGImage* CGImageRef;

typedef struct {
	SCD_Struct_PK0 projectionMatrix;
	SCD_Struct_PK0 motionMatrix;
	 data;
} SCD_Struct_PK7;

typedef struct {
	 position;
	 velocity;
	float radius;
	float scale;
	float scaleTarget;
	float created;
	 color;
	SCD_Struct_PK0 matrix;
} SCD_Struct_PK8;

typedef struct {
	double startTime;
	unsigned long long bucketCount;
	double magnitudeForBucket;
	 colorForBucket;
	SCD_Struct_PK7 uniforms;
	SCD_Struct_PK8 singleCircle;
	unsigned long long circleCount;
	SCD_Struct_PK8 circles[88];
	unsigned long long categoryCount;
	 gravity;
	unsigned framesToRender;
	BOOL isAnimating;
} SCD_Struct_PK9;

typedef struct {
	double field1;
	unsigned long long field2;
	double field3;
	SCD_Struct_PK7 field4;
	SCD_Struct_PK8 field5;
	unsigned long long field6;
	SCD_Struct_PK8 field7[88];
	unsigned long long field8;
	unsigned field9;
	BOOL field10;
} SCD_Struct_PK10;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGColor* CGColorRef;

typedef struct UIEdgeInsets {
	double top;
	double left;
	double bottom;
	double right;
} UIEdgeInsets;

