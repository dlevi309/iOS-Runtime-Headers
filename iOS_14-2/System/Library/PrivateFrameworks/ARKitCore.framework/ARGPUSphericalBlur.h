/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/


@protocol MTLDevice, MTLCommandQueue, MTLComputePipelineState;
#import <ARKitCore/ARKitCore-Structs.h>
@interface ARGPUSphericalBlur : NSObject {

	id<MTLDevice> _device;
	id<MTLCommandQueue> _commandQueue;
	id<MTLComputePipelineState> _cubemapBlurPipelineState;
	BOOL _gpuFamilyAtleast4;

}
-(id)init;
-(id)blurCubemapTexture:(id)arg1 roughness:(id)arg2 rotation:(SCD_Struct_AR25)arg3 ;
@end

