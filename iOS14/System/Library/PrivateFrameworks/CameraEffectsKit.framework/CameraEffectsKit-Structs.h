/*
* Generated on Thursday, January 14, 2021 at 2:27:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

typedef struct {
	long long field1;
	int field2;
	unsigned field3;
	long long field4;
} SCD_Struct_JF0;

typedef struct {
	SCD_Struct_JF0 field1;
	SCD_Struct_JF0 field2;
} SCD_Struct_JF1;

typedef struct opaqueCMSampleBuffer* opaqueCMSampleBufferRef;

typedef struct {
	long long value;
	int timescale;
	unsigned flags;
	long long epoch;
} SCD_Struct_JF3;

typedef struct {
	SCD_Struct_JF3 start;
	SCD_Struct_JF3 duration;
} SCD_Struct_JF4;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CVASegmentation* CVASegmentationRef;

typedef struct __CVPixelBufferPool* CVPixelBufferPoolRef;

typedef struct __CVBuffer* CVBufferRef;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct PVTransformAnimationInfo {
	SCD_Struct_JF3 time;
	CGPoint translation;
	double scale;
	double rotation;
} PVTransformAnimationInfo;

typedef struct _NSZone* NSZoneRef;

typedef struct {
	[3 columns];
} SCD_Struct_JF13;

typedef struct {
	[4 columns];
} SCD_Struct_JF14;

typedef struct CGAffineTransform {
	double a;
	double b;
	double c;
	double d;
	double tx;
	double ty;
} CGAffineTransform;

typedef struct __CVMetalTextureCache* CVMetalTextureCacheRef;

typedef struct OpaqueVTImageRotationSession* OpaqueVTImageRotationSessionRef;

typedef const struct CGPath* CGPathRef;

typedef struct {
	 position;
	 texCoords;
} SCD_Struct_JF19;

typedef struct {
	SCD_Struct_JF19 vertices[4];
} SCD_Struct_JF20;

typedef struct OpaqueVTDecompressionSession* OpaqueVTDecompressionSessionRef;

typedef struct opaqueCMFormatDescription* opaqueCMFormatDescriptionRef;

typedef struct promise<opaqueCMSampleBuffer *> {
	__assoc_state<opaqueCMSampleBuffer *> __state_;
} promise<opaqueCMSampleBuffer *>;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct {
	double x;
	double y;
	double z;
	double w;
} SCD_Struct_JT25;

typedef struct CGImageMetadata* CGImageMetadataRef;

typedef struct {
	int field1;
	int field2;
} SCD_Struct_JF27;

typedef struct CGImageDestination* CGImageDestinationRef;

typedef struct {
	int width;
	int height;
} SCD_Struct_JF29;

typedef struct {
	SCD_Struct_JF3 field1;
	SCD_Struct_JF3 field2;
	SCD_Struct_JF3 field3;
} SCD_Struct_JF30;

typedef struct CGImage* CGImageRef;

typedef struct OpaqueVTPixelTransferSession* OpaqueVTPixelTransferSessionRef;

typedef struct {
	long long tapBehavior;
	long long longPressBehavior;
	long long dragRightBehavior;
	long long dragLeftBehavior;
	BOOL allowsLockButton;
	long long ringStyle;
	long long stopColor;
	long long idleColor;
} SCD_Struct_CF33;

typedef struct OpaqueCMBlockBuffer* OpaqueCMBlockBufferRef;

typedef struct PVCGPointQuad {
	CGPoint a;
	CGPoint b;
	CGPoint c;
	CGPoint d;
} PVCGPointQuad;

typedef struct {
	BOOL updateContinousPreviewsForEffectIds;
	BOOL willBeginDownloadingPreviewAssetsForEffect;
	BOOL downloadingPreviewAssetsForEffect;
	BOOL didFinishDownloadingPreviewAssetsForEffect;
} SCD_Struct_JF36;

