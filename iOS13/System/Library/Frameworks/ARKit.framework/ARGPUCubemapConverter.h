/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/


@protocol MTLDevice, MTLCommandQueue, MTLComputePipelineState;
#import <ARKit/ARKit-Structs.h>
@interface ARGPUCubemapConverter : NSObject {

	id<MTLDevice> _device;
	id<MTLCommandQueue> _commandQueue;
	id<MTLComputePipelineState> _cubemapToLatLongPipelineState;
	id<MTLComputePipelineState> _latLongToCubemapPipelineState;
	BOOL _gpuFamilyAtleast4;

}
-(id)init;
-(id)equirectangularTextureFromCubemapTexture:(id)arg1 rotation:(SCD_Struct_AR24)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 ;
-(id)cubemapTextureFromEquirectangularTexture:(id)arg1 rotation:(SCD_Struct_AR24)arg2 size:(unsigned long long)arg3 ;
@end

