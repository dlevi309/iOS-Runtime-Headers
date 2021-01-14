/*
* Generated on Thursday, January 14, 2021 at 2:23:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


#import <CMCapture/CMCapture-Structs.h>
@class BWPixelBufferPool, NSMutableDictionary;

@interface BWPhotoDecompressor : NSObject {

	int _poolSize;
	unsigned _outputPixelFormat;
	BWPixelBufferPool* _outputPixelBufferPool;
	BOOL _decompressionSetupIsComplete;
	CVBufferRef _decompressionPixelBufferPool;
	FigPhotoSurfacePoolRef _decompressionSurfacePool;
	FigPhotoDecompressionSessionRef _decompressionSession;
	NSMutableDictionary* _decompressionOptions;
	opaqueCMFormatDescriptionRef _uncompressedFormatDescription;
	BOOL _forceAllocationsFromFigSurfacePool;

}

@property (readonly) BWPixelBufferPool * outputPixelBufferPool; 
-(int)_setupResources;
-(id)_initWithPoolSize:(int)arg1 outputPixelFormat:(unsigned)arg2 outputPixelBufferPool:(id)arg3 ;
-(CVBufferRef)_newUncompressedPixelBufferFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 pixelBufferTrackingTag:(id)arg2 ;
-(void)_setCVColorProperties:(CVBufferRef)arg1 fromSourceBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(opaqueCMSampleBufferRef)_newUncompressedSampleBufferFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 pixelBufferTrackingTag:(id)arg2 ;
-(int)_setupDecompressionSurfacePool;
-(int)_setupDecompressionSession;
-(int)_setupDecompressionOptions;
-(BWPixelBufferPool *)outputPixelBufferPool;
-(id)initWithPoolSize:(int)arg1 outputPixelFormat:(unsigned)arg2 ;
-(id)initWithOutputPixelBufferPool:(id)arg1 ;
-(opaqueCMSampleBufferRef)newUncompressedSampleBufferFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(CVBufferRef)newUncompressedPixelBufferFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_releaseResources;
-(void)dealloc;
@end

