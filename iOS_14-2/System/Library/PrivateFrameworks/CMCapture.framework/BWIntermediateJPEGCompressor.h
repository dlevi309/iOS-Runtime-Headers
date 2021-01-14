/*
* Generated on Thursday, January 14, 2021 at 2:23:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@protocol OS_dispatch_semaphore;
#import <CMCapture/CMCapture-Structs.h>
@class NSString, NSObject, NSMutableDictionary, BWStats, BWMovingWindowStats;

@interface BWIntermediateJPEGCompressor : NSObject {

	NSString* _name;
	NSObject*<OS_dispatch_semaphore> _backPressureSemaphore;
	unsigned long long _compressedBufferSize;
	unsigned long long _compressedBufferPoolAllocationTimeoutMS;
	float _compressionQuality;
	float _compressionRate;
	int _numberOfTimesWaitedOnBackPressureSemaphore;
	int _jpegSurfacePoolLowWaterBufferCount;
	int _jpegSurfacePoolHighWaterBufferCount;
	BOOL _setupIsComplete;
	FigPhotoSurfacePoolRef _surfacePool;
	FigPhotoCompressionSessionRef _compressionSession;
	CFDictionaryRef _containerOptions;
	NSMutableDictionary* _qualityControllerParameters;
	CFDictionaryRef _compressionOptions;
	opaqueCMFormatDescriptionRef _jpegFormatDescription;
	BWStats* _overallWaitStats;
	BWMovingWindowStats* _recentWaitStats;

}
+(void)initialize;
-(int)_setupJPEGCompressionSession;
-(int)_setupJPEGContainerOptions;
-(int)_setupJPEGCompressionOptions;
-(opaqueCMSampleBufferRef)newJPEGSampleBufferFromUncompressedSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(int)_setupJPEGFormatDescriptionFromSourceBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(int)_setupJPEGSurfacePool;
-(id)initWithCompressionQuality:(float)arg1 compressionRate:(float)arg2 jpegSurfacePoolLowWaterBufferCount:(int)arg3 jpegSurfacePoolHighWaterBufferCount:(int)arg4 compressedBufferPoolAllocationTimeoutMS:(unsigned long long)arg5 name:(id)arg6 ;
-(void)_releaseResources;
-(void)dealloc;
-(int)_setupJPEGEncodeResourcesForSourcePixelBuffer:(CVBufferRef)arg1 ;
@end

