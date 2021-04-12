/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/


@protocol MTLDevice, MTLCommandQueue, MTLComputePipelineState, MTLTexture;
#import <ARKitCore/ARKitCore-Structs.h>
@interface ARGPUImageUndistortion : NSObject {

	id<MTLDevice> _device;
	id<MTLCommandQueue> _commandQueue;
	id<MTLComputePipelineState> _pipelineState;
	id<MTLComputePipelineState> _lutGenerationPipelineState;
	id<MTLTexture> _lut;
	SCD_Struct_AR25 _fisheyeIntrinsics;
	 _fisheyeRadialCoefficients;
	SCD_Struct_AR25 _rectilinearIntrinsics;

}
-(id)init;
-(void)undistortFisheyeImage:(CVBufferRef)arg1 withFisheyeIntrinsics:(SCD_Struct_AR25)arg2 withFisheyeRadialCoefficients:(_CVBuffer*)arg3 toRectilinearImage:(SCD_Struct_AR25)arg4 ;
@end

