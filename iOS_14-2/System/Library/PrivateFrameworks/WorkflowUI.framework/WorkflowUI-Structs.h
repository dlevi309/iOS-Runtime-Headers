/*
* Generated on Thursday, January 14, 2021 at 2:28:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

typedef struct UIEdgeInsets {
	double top;
	double left;
	double bottom;
	double right;
} UIEdgeInsets;

typedef struct {
	double start;
	double end;
	double dt;
} SCD_Struct_WF1;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct {
	long long curve;
} SCD_Struct_WF5;

typedef struct {
	double initialVelocity;
} SCD_Struct_WF6;

typedef union {
	SCD_Struct_WF5 basic;
	UIEdgeInsets spring;
	SCD_Struct_WF6 defaultSpring;
} SCD_Union_WF7;

typedef struct CGImage* CGImageRef;

typedef struct CGContext* CGContextRef;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct _NSZone* NSZoneRef;

