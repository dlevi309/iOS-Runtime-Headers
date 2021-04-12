/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@protocol MTLDevice, MTLCommandQueue;
#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
@class MPSImageGuidedFilter;

@interface JFXGuidedFilter : NSObject {

	MPSImageGuidedFilter* _osGuidedFilter;
	BOOL _useCPU;
	id<MTLDevice> _device;
	id<MTLCommandQueue> _commandQueue;
	CVPixelBufferPoolRef _coeffPool;
	CVMetalTextureCacheRef _textureCache;
	unsigned long long _guideImageWidth;
	unsigned long long _guideImageHeight;

}
-(id)initWithDiameter:(int)arg1 ;
-(void)dealloc;
-(void)scaleImage:(CVBufferRef)arg1 guidanceImage:(CVBufferRef)arg2 destinationImage:(CVBufferRef)arg3 ;
@end

