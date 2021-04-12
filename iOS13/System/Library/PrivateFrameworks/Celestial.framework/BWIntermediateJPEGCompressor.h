/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


#import <Celestial/Celestial-Structs.h>
@class NSMutableDictionary;

@interface BWIntermediateJPEGCompressor : NSObject {

	unsigned long long _compressedBufferSize;
	float _compressionQuality;
	float _compressionRate;
	int _jpegSurfacePoolLowWaterBufferCount;
	int _jpegSurfacePoolHighWaterBufferCount;
	BOOL _setupIsComplete;
	FigPhotoSurfacePoolRef _surfacePool;
	FigPhotoCompressionSessionRef _compressionSession;
	CFDictionaryRef _containerOptions;
	NSMutableDictionary* _qualityControllerParameters;
	CFDictionaryRef _compressionOptions;
	opaqueCMFormatDescriptionRef _jpegFormatDescription;

}
+(void)initialize;
-(void)dealloc;
-(void)_releaseResources;
-(int)_setupJPEGEncodeResourcesForSourcePixelBuffer:(CVBufferRef)arg1 ;
-(int)_setupJPEGFormatDescriptionFromSourceBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(int)_setupJPEGSurfacePool;
-(int)_setupJPEGCompressionSession;
-(int)_setupJPEGContainerOptions;
-(int)_setupJPEGCompressionOptions;
-(id)initWithCompressionQuality:(float)arg1 compressionRate:(float)arg2 jpegSurfacePoolLowWaterBufferCount:(int)arg3 jpegSurfacePoolHighWaterBufferCount:(int)arg4 ;
-(opaqueCMSampleBufferRef)newJPEGSampleBufferFromUncompressedSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
@end

