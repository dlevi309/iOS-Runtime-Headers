/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

typedef struct CGAffineTransform {
	double a;
	double b;
	double c;
	double d;
	double tx;
	double ty;
} CGAffineTransform;

typedef struct UIEdgeInsets {
	double top;
	double left;
	double bottom;
	double right;
} UIEdgeInsets;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct __CFRunLoopObserver* CFRunLoopObserverRef;

typedef struct {
	double value;
	BOOL inclusive;
} SCD_Struct_SB4;

typedef struct {
	SCD_Struct_SB4 start;
	SCD_Struct_SB4 end;
} SCD_Struct_SB5;

typedef struct _NSZone* NSZoneRef;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct SBIconImageInfo {
	CGSize size;
	double scale;
	double continuousCornerRadius;
} SBIconImageInfo;

typedef struct CGImage* CGImageRef;

typedef struct NSDirectionalEdgeInsets {
	double top;
	double leading;
	double bottom;
	double trailing;
} NSDirectionalEdgeInsets;

typedef struct {
	unsigned long long field1;
	id field2;
	unsigned long long field3;
	unsigned long long field4[5];
} SCD_Struct_SB12;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct SBVisibleColumnRange {
	unsigned long long iconListIndex;
	NSRange columnRange;
} SBVisibleColumnRange;

typedef struct SBIconListPredictedVisibleColumn {
	unsigned long long column;
	double confidence;
} SBIconListPredictedVisibleColumn;

typedef struct SBFolderPredictedVisibleColumn {
	unsigned long long iconListIndex;
	SBIconListPredictedVisibleColumn predictedVisibleColumn;
} SBFolderPredictedVisibleColumn;

typedef struct {
	CGRect field1;
	CGRect field2;
	CGRect field3;
	CGRect field4;
	CGRect field5;
} SCD_Struct_SB17;

typedef struct SBIconCoordinate {
	long long row;
	long long col;
} SBIconCoordinate;

typedef struct {
	UIEdgeInsets field1;
	CGRect field2;
	CGRect field3;
	CGRect field4;
	CGRect field5;
	double field6;
} SCD_Struct_SB19;

