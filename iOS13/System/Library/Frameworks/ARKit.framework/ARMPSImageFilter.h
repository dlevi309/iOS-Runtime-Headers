/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/


@protocol MTLDevice, MTLCommandQueue;
#import <ARKit/ARKit-Structs.h>
@class MPSUnaryImageKernel;

@interface ARMPSImageFilter : NSObject {

	CVPixelBufferPoolRef _pixelBufferPool;
	id<MTLDevice> _device;
	id<MTLCommandQueue> _commandQueue;
	MPSUnaryImageKernel* _kernel;

}
-(void)dealloc;
-(id)initWithImageKernel:(id)arg1 device:(id)arg2 ;
-(CVBufferRef)processPixelBuffer:(CVBufferRef)arg1 format:(unsigned long long)arg2 ;
@end

