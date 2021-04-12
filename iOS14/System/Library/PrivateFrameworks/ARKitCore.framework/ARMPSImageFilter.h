/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/


@protocol MTLDevice, MTLCommandQueue;
#import <ARKitCore/ARKitCore-Structs.h>
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

