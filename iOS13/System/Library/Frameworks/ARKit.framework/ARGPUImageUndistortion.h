/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/


@protocol MTLDevice, MTLCommandQueue, MTLComputePipelineState, MTLTexture;
#import <ARKit/ARKit-Structs.h>
@interface ARGPUImageUndistortion : NSObject {

	id<MTLDevice> _device;
	id<MTLCommandQueue> _commandQueue;
	id<MTLComputePipelineState> _pipelineState;
	id<MTLComputePipelineState> _lutGenerationPipelineState;
	id<MTLTexture> _lut;
	SCD_Struct_AR24 _fisheyeIntrinsics;
	 _fisheyeRadialCoefficients;
	SCD_Struct_AR24 _rectilinearIntrinsics;

}
-(id)init;
-(void)undistortFisheyeImage:(CVBufferRef)arg1 withFisheyeIntrinsics:(SCD_Struct_AR24)arg2 withFisheyeRadialCoefficients:(_CVBuffer*)arg3 toRectilinearImage:(SCD_Struct_AR24)arg4 ;
@end

