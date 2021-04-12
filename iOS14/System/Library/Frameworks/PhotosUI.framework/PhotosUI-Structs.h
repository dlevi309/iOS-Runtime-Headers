/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

typedef struct __CFString* CFStringRef;

typedef struct {
	long long field1;
	int field2;
	unsigned field3;
	long long field4;
} SCD_Struct_PH1;

typedef struct {
	SCD_Struct_PH1 field1;
	SCD_Struct_PH1 field2;
} SCD_Struct_PH2;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct {
	long long value;
	int timescale;
	unsigned flags;
	long long epoch;
} SCD_Struct_PH4;

typedef struct {
	SCD_Struct_PH4 start;
	SCD_Struct_PH4 duration;
} SCD_Struct_PH5;

typedef struct CGImage* CGImageRef;

typedef struct {
	BOOL didBeginTouching;
	BOOL didEndTouching;
	BOOL willBeginDragging;
	BOOL didEndDragging;
	BOOL willBeginDecelerating;
	BOOL didEndDecelerating;
} SCD_Struct_PH7;

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

typedef struct _NSZone* NSZoneRef;

typedef struct {
	BOOL field1;
	BOOL field2;
	BOOL field3;
	BOOL field4;
	BOOL field5;
} SCD_Struct_PU12;

typedef struct {
	BOOL excludeLiveness;
	BOOL excludeLocation;
	BOOL excludeCaption;
	BOOL excludeAccessibilityDescription;
	BOOL includeAllOriginalResources;
} SCD_Struct_PU13;

typedef struct {
	unsigned val[8];
} SCD_Struct_PU14;

typedef struct UIOffset {
	double horizontal;
	double vertical;
} UIOffset;

typedef struct {
	BOOL playbackState;
	BOOL animatedImage;
} SCD_Struct_PU16;

typedef struct {
	BOOL videoPlayersLoadingAllowed;
} SCD_Struct_PU17;

typedef struct PXAssetBadgeInfo {
	unsigned long long badges;
	double duration;
	long long count;
} PXAssetBadgeInfo;

typedef struct {
	[3 columns];
} SCD_Struct_PU19;

typedef struct CGAffineTransform {
	double a;
	double b;
	double c;
	double d;
	double tx;
	double ty;
} CGAffineTransform;

typedef struct CGVector {
	double dx;
	double dy;
} CGVector;

typedef struct {
	long long field1;
	float field2;
} SCD_Struct_PU22;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct {
	long long privateInteger;
	float privateFloat;
} SCD_Struct_PU24;

typedef struct PXSimpleIndexPath {
	unsigned long long dataSourceIdentifier;
	long long section;
	long long item;
	long long subitem;
} PXSimpleIndexPath;

typedef struct __CFUserNotification* CFUserNotificationRef;

typedef struct PUDisplayVelocity {
	double x;
	double y;
	double scale;
	double rotation;
} PUDisplayVelocity;

typedef struct {
	BOOL frameForAssetReferenceInCoordinateSpace;
	BOOL viewController;
	BOOL didSelectSuggestionForAssetReference;
	BOOL canShowSuggestion;
} SCD_Struct_PU28;

typedef struct CGPDFDocument* CGPDFDocumentRef;

typedef struct CGContext* CGContextRef;

typedef struct CGColor* CGColorRef;

typedef struct FigPhotoDecompressionContainer* FigPhotoDecompressionContainerRef;

typedef struct {
	CGSize field1;
	unsigned long long field2;
} SCD_Struct_PU33;

typedef struct {
	CGPoint field1;
	CGRect field2;
	CGAffineTransform field3;
} SCD_Struct_PU34;

typedef struct PUGridCoordinates {
	long long row;
	long long column;
} PUGridCoordinates;

typedef struct CGPath* CGPathRef;

typedef struct {
	double scale;
	CGVector modelSpaceTranslation;
} SCD_Struct_PU37;

typedef struct {
	double scale;
} SCD_Struct_PU38;

typedef struct {
	CGRect startCropRect;
} SCD_Struct_PU39;

