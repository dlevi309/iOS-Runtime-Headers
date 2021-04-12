/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


#import <Celestial/Celestial-Structs.h>
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
-(void)dealloc;
-(BWVideoFormat *)outputFormat;
-(void)_purgeResources;
-(id)initWithPrefetchPool:(BOOL)arg1 ;
-(int)updateOutputPixelFormat:(unsigned)arg1 dimensions:(SCD_Struct_BW19)arg2 poolCapacity:(int)arg3 colorSpaceProperties:(int)arg4 alwaysUseHardwareForConversion:(BOOL)arg5 ;
-(int)convertSampleBuffer:(opaqueCMSampleBufferRef)arg1 cropRect:(CGRect)arg2 outputSampleBuffer:(opaqueCMSampleBuffer*)arg3 ;
-(int)_buildBufferPool;
-(int)_buildTransferSession;
-(int)convertPixelBuffer:(CVBufferRef)arg1 cropRect:(CGRect)arg2 allocateOutputFromBufferPool:(BOOL)arg3 outputPixelBuffer:(_CVBuffer*)arg4 ;
@end

