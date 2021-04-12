/*
* Generated on Monday, March 1, 2021 at 2:34:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HDRProcessing.framework/HDRProcessing
*/


@protocol MTLDeviceSPI, MTLLibrary, MTLComputePipelineState;
#import <HDRProcessing/HDRProcessing-Structs.h>
@interface SpatialResampler : NSObject {

	id<MTLDeviceSPI> _device;
	id<MTLLibrary> _defaultLibrary;
	id<MTLComputePipelineState> _verticalResampleKernel;
	id<MTLComputePipelineState> _verticalResampleChromaKernel;
	id<MTLComputePipelineState> _horizontalResampleKernel;

}
-(id)initWithDevice:(id)arg1 ;
-(void)createKernels;
-(void)encodeToCommandBuffer:(id)arg1 input:(IOSurfaceRef)arg2 output:(IOSurfaceRef)arg3 ;
-(void)setupTextures:(id)arg1 input:(IOSurfaceRef)arg2 output:(IOSurfaceRef)arg3 ;
-(void)encodeSpatialResampleVertical:(id)arg1 Input:(id)arg2 Output:(id)arg3 isChroma:(BOOL)arg4 ;
-(void)encodeSpatialResampleHorizontal:(id)arg1 Input:(id)arg2 Output:(id)arg3 ;
@end

