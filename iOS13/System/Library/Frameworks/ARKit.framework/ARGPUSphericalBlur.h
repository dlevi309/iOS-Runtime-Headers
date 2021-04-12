/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/


@protocol MTLDevice, MTLCommandQueue, MTLComputePipelineState;
#import <ARKit/ARKit-Structs.h>
@interface ARGPUSphericalBlur : NSObject {

	id<MTLDevice> _device;
	id<MTLCommandQueue> _commandQueue;
	id<MTLComputePipelineState> _cubemapBlurPipelineState;
	BOOL _gpuFamilyAtleast4;

}
-(id)init;
-(id)blurCubemapTexture:(id)arg1 roughness:(id)arg2 rotation:(SCD_Struct_AR24)arg3 ;
@end

