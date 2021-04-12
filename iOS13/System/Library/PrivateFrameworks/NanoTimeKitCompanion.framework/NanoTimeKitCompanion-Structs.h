/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

typedef struct __IOSurface* IOSurfaceRef;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct {
	float field1;
	float field2;
	float field3;
} SCD_Struct_NT3;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct CGContext* CGContextRef;

typedef struct {
	double field1;
	double field2;
	double field3;
	double field4;
	double field5;
	double field6;
	double field7;
	double field8;
	double field9;
	double field10;
	double field11;
	double field12;
	double field13;
	double field14;
} SCD_Struct_NT6;

typedef struct {
	double cityNameFontSize;
	double cityNameBaselineOffsetNorthSide;
	double cityNameBaselineOffsetSouthSide;
	double dialDiameter;
	CGSize majorTickSize;
	CGSize minorTickSize;
} SCD_Struct_NT7;

typedef struct CGGradient* CGGradientRef;

typedef struct UIEdgeInsets {
	double top;
	double left;
	double bottom;
	double right;
} UIEdgeInsets;

typedef struct {
	double field1;
	float field2;
	int field3;
} SCD_Struct_NT10;

typedef struct {
	int field1;
} SCD_Struct_NT11;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct _NSZone* NSZoneRef;

typedef struct __CFFileDescriptor* CFFileDescriptorRef;

typedef struct CharacterPoseSpecs {
	float bodyOffsetX;
	float footOffsetX;
	float headOffsetX;
} CharacterPoseSpecs;

typedef struct CharacterStateSpecs {
	unsigned bodyTexIdx;
	unsigned minuteTexIdx;
	unsigned hourArmOnLeftShoulder;
	float xFlipBody;
	float xFlipFoot;
	float xFlipFace;
	float xFlipMinuteHand;
	float xFlipHourHand;
	float leftShoulderX;
	float rightShoulderX;
	float minuteElbowBend;
	float hourElbowBend;
} CharacterStateSpecs;

typedef struct {
	[4 columns];
} SCD_Struct_NT17;

typedef const struct CGPath* CGPathRef;

typedef struct CGAffineTransform {
	double a;
	double b;
	double c;
	double d;
	double tx;
	double ty;
} CGAffineTransform;

typedef struct {
	BOOL smallTicksMatchingMinutes;
	BOOL hideHourTicks;
	CGSize hourTickSize;
	CGSize smallTickSize;
} SCD_Struct_NT20;

typedef struct {
	BOOL field1;
	BOOL field2;
	CGSize field3;
	CGSize field4;
} SCD_Struct_NT21;

typedef struct {
	double timeLabel12HourLayoutFontSize;
	double timeLabel12HourLayoutMaxWidth;
	double timeLabel12HourTimeLeadingLayoutBottom;
	double timeLabel12HourDesignatorLeadingLayoutBottom;
	double timeLabel24HourLayoutFontSize;
	double timeLabel24HourLayoutMaxWidth;
	double timeLabel24HourLayoutBottom;
	double timeLabeSnoozeLayoutFontSize;
	double timeLabeSnoozeLayoutMaxWidth;
	double timeLabelSnoozeLayoutBottom;
	double designatorLabelFontSize;
	double designatorLabelMaxWidth;
	double designatorLabel12HourTimeLeadingLayoutBottom;
	double designatorLabel12HourDesignatorLeadingLayoutBottom;
	double snoozeIconTop;
	double snoozeRingStrokeWidth;
} SCD_Struct_NT22;

typedef struct CLLocationCoordinate2D {
	double latitude;
	double longitude;
} CLLocationCoordinate2D;

typedef struct {
	unsigned long long field1;
	id field2;
	unsigned long long field3;
	unsigned long long field4[5];
} SCD_Struct_NT24;

typedef struct {
	BOOL isComplexBackground;
	BOOL isColoredText;
	float textHue;
	float textSaturation;
	float textBrightness;
	float bgHue;
	float bgSaturation;
	float bgBrightness;
	float shadowHue;
	float shadowSaturation;
	float shadowBrightness;
} SCD_Struct_NT25;

typedef struct {
	unsigned layoutContainerView : 1;
} SCD_Struct_NT26;

typedef struct CGColor* CGColorRef;

typedef struct jetsam_info {
	long long currentKB;
	long long maxLifetimeKB;
	long long maxIntervalKB;
} jetsam_info;

typedef struct {
	double field1;
	double field2;
	double field3;
	double field4;
	double field5;
	double field6;
	double field7;
	double field8;
	double field9;
	double field10;
	double field11;
	double field12;
	UIEdgeInsets field13;
} SCD_Struct_NT29;

typedef struct RingLayout {
	double bottomEdgeInset;
	double leftEdgeInset;
	double diameter;
	double thickness;
	double interspacing;
} RingLayout;

typedef struct CGColorSpace* CGColorSpaceRef;

typedef struct CGImage* CGImageRef;

typedef struct {
	double curveLineWidth;
	CGSize curveMaxSize;
	double lineTop;
	double lineHeight;
	double strokeDiskDiameter;
	double strokeDiskBorderWidth;
	double fillDiskDiameter;
	double haloMinScale;
	double haloMaxScale;
	double backgroundGradientSunsetLayerMaxAlpha;
} SCD_Struct_NT33;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct {
	long long numberTicks;
	CGSize tickSize;
	double dialDiameter;
	double timerLabelBottom;
	double timerLabelFontSize;
	double timerLabelMaxWidth;
} SCD_Struct_NT35;

typedef struct CGVector {
	double dx;
	double dy;
} CGVector;

