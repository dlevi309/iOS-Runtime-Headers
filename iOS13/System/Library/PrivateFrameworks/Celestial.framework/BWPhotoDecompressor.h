/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


#import <Celestial/Celestial-Structs.h>
@class BWPixelBufferPool, NSDictionary, NSMutableDictionary;

@interface BWPhotoDecompressor : NSObject {

	int _poolSize;
	unsigned _outputPixelFormat;
	BWPixelBufferPool* _outputPixelBufferPool;
	BOOL _decompressionSetupIsComplete;
	CVBufferRef _decompressionPixelBufferPool;
	FigPhotoSurfacePoolRef _decompressionSurfacePool;
	FigPhotoDecompressionSessionRef _decompressionSession;
	NSDictionary* _containerOptions;
	NSMutableDictionary* _decompressionOptions;
	opaqueCMFormatDescriptionRef _uncompressedFormatDescription;
	BOOL _forceAllocationsFromFigSurfacePool;

}

@property (readonly) BWPixelBufferPool * outputPixelBufferPool; 
-(void)dealloc;
-(void)_releaseResources;
-(id)initWithPoolSize:(int)arg1 outputPixelFormat:(unsigned)arg2 ;
-(CVBufferRef)newUncompressedPixelBufferFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(id)initWithOutputPixelBufferPool:(id)arg1 ;
-(opaqueCMSampleBufferRef)newUncompressedSampleBufferFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(id)_initWithPoolSize:(int)arg1 outputPixelFormat:(unsigned)arg2 outputPixelBufferPool:(id)arg3 ;
-(CVBufferRef)_newUncompressedPixelBufferFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 pixelBufferTrackingTag:(id)arg2 ;
-(int)_setupResources;
-(void)_setCVColorProperties:(CVBufferRef)arg1 fromSourceBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(opaqueCMSampleBufferRef)_newUncompressedSampleBufferFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 pixelBufferTrackingTag:(id)arg2 ;
-(int)_setupDecompressionSurfacePool;
-(int)_setupDecompressionSession;
-(int)_setupContainerOptions;
-(int)_setupDecompressionOptions;
-(BWPixelBufferPool *)outputPixelBufferPool;
@end

