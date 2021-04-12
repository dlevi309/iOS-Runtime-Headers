/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
*/

typedef struct CGPath* CGPathRef;

typedef struct OpaqueFigCFCaptionRenderer* OpaqueFigCFCaptionRendererRef;

typedef struct OpaqueFigSimpleMutex* OpaqueFigSimpleMutexRef;

typedef struct OpaqueFigReentrantMutex* OpaqueFigReentrantMutexRef;

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

typedef struct FigGeometryDimension {
	double value;
	unsigned units;
	unsigned flags;
} FigGeometryDimension;

typedef struct FigGeometryMargins {
	FigGeometryDimension left;
	FigGeometryDimension right;
	FigGeometryDimension top;
	FigGeometryDimension bottom;
} FigGeometryMargins;

typedef struct CGContext* CGContextRef;

typedef struct OpaqueFigVirtualDisplaySession* OpaqueFigVirtualDisplaySessionRef;

typedef struct {
	long long value;
	int timescale;
	unsigned flags;
	long long epoch;
} SCD_Struct_Fi11;

typedef struct opaqueCMSampleBuffer* opaqueCMSampleBufferRef;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct OpaqueFigSubtitleRenderer* OpaqueFigSubtitleRendererRef;

typedef struct __CFString* CFStringRef;

typedef struct OpaqueFigPlayer* OpaqueFigPlayerRef;

typedef struct {
	SCD_Struct_Fi11 start;
	SCD_Struct_Fi11 duration;
} SCD_Struct_Fi17;

typedef struct __CTServerConnection* CTServerConnectionRef;

typedef struct OpaqueFigCoreTelephonyStatus {
	unsigned char hasHighSpeedHighPower;
} OpaqueFigCoreTelephonyStatus;

typedef struct FigCoreTelephonyMonitorListHead {
	FigCoreTelephonyMonitorCallbackEntry stqh_first;
	FigCoreTelephonyMonitorCallbackEntry stqh_last;
} FigCoreTelephonyMonitorListHead;

typedef struct __CFAllocator* CFAllocatorRef;

typedef struct FigRetainProxy* FigRetainProxyRef;

typedef struct OpaqueFigHTTPRequest* OpaqueFigHTTPRequestRef;

typedef struct __CFAttributedString* CFAttributedStringRef;

typedef struct OpaqueFigCFWeakReferenceHolder* OpaqueFigCFWeakReferenceHolderRef;

typedef struct FigOpaqueAssertion* FigOpaqueAssertionRef;

typedef struct OpaqueFigNeroid* OpaqueFigNeroidRef;

typedef struct __CTFont* CTFontRef;

typedef struct __CFArray* CFArrayRef;

typedef struct __IOSurface* IOSurfaceRef;

typedef struct vImageConverter* vImageConverterRef;

typedef struct FigPhotoCache* FigPhotoCacheRef;

typedef struct FigPhotoSurfacePool* FigPhotoSurfacePoolRef;

typedef struct CGImage* CGImageRef;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct CGColorSpace* CGColorSpaceRef;

typedef struct OpaqueFigEndpointPlaybackSession* OpaqueFigEndpointPlaybackSessionRef;

typedef struct FPStreamOpaque_* FPStreamOpaque_Ref;

typedef struct {
	id field1;
	_ field2;
	_ field3;
	CFString field4;
	id field5;
	id field6;
	/*function pointer*/void* field7;
} SCD_Struct_Fi39;

typedef struct __CFData* CFDataRef;

