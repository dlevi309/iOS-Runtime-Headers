/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/


@protocol MTLDevice, MTLCommandQueue, MTLComputePipelineState;
#import <ARKitCore/ARKitCore-Structs.h>
@interface ARGPUCubemapConverter : NSObject {

	id<MTLDevice> _device;
	id<MTLCommandQueue> _commandQueue;
	id<MTLComputePipelineState> _cubemapToLatLongPipelineState;
	id<MTLComputePipelineState> _latLongToCubemapPipelineState;
	BOOL _gpuFamilyAtleast4;

}
-(id)init;
-(id)equirectangularTextureFromCubemapTexture:(id)arg1 rotation:(SCD_Struct_AR25)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 ;
-(id)cubemapTextureFromEquirectangularTexture:(id)arg1 rotation:(SCD_Struct_AR25)arg2 size:(unsigned long long)arg3 ;
@end

