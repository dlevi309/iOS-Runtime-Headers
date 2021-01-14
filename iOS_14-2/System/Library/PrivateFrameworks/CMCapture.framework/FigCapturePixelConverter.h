/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


#import <CMCapture/CMCapture-Structs.h>
@class BWPixelBufferPool, BWVideoFormat;

@interface FigCapturePixelConverter : NSObject {

	OpaqueVTPixelTransferSessionRef _transferSession;
	BOOL _alwaysUseHardwareForConversion;
	BWPixelBufferPool* _pool;
	BWVideoFormat* _outputFormat;
	opaqueCMFormatDescriptionRef _outputFormatDescription;
	int _poolCapacity;
	BOOL _prefetchPool;

}

@property (nonatomic,readonly) BWVideoFormat * outputFormat;              //@synthesize outputFormat=_outputFormat - In the implementation block
+(void)initialize;
-(id)init;
-(BWVideoFormat *)outputFormat;
-(int)_buildTransferSession;
-(int)updateOutputPixelFormat:(unsigned)arg1 dimensions:(SCD_Struct_BW2)arg2 poolCapacity:(int)arg3 colorSpaceProperties:(int)arg4 alwaysUseHardwareForConversion:(BOOL)arg5 ;
-(int)convertPixelBuffer:(CVBufferRef)arg1 cropRect:(CGRect)arg2 allocateOutputFromBufferPool:(BOOL)arg3 outputPixelBuffer:(_CVBuffer*)arg4 ;
-(int)convertSampleBuffer:(opaqueCMSampleBufferRef)arg1 cropRect:(CGRect)arg2 outputSampleBuffer:(opaqueCMSampleBuffer*)arg3 ;
-(int)_buildBufferPool;
-(id)initWithPrefetchPool:(BOOL)arg1 ;
-(void)dealloc;
-(void)_purgeResources;
@end

