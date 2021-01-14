/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@protocol OS_dispatch_semaphore;
#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
@class NSObject;

@interface JFXVideoDecoderInterface : NSObject {

	OpaqueVTDecompressionSessionRef _session;
	double m_expectedFrameRate;
	NSObject*<OS_dispatch_semaphore> _frameSemaphore;
	CVBufferRef _imageBuffer;

}

@property (retain) NSObject*<OS_dispatch_semaphore> frameSemaphore;              //@synthesize frameSemaphore=_frameSemaphore - In the implementation block
@property (assign) CVBufferRef imageBuffer;                                      //@synthesize imageBuffer=_imageBuffer - In the implementation block
-(id)init;
-(CVBufferRef)imageBuffer;
-(void)setImageBuffer:(CVBufferRef)arg1 ;
-(void)dealloc;
-(NSObject*<OS_dispatch_semaphore>)frameSemaphore;
-(void)setFrameSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(id)initWithFormatDescription:(opaqueCMFormatDescriptionRef)arg1 ;
-(CVBufferRef)decodeFrame:(opaqueCMSampleBufferRef)arg1 ;
@end

