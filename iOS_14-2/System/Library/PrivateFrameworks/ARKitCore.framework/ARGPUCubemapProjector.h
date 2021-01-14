/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/


@protocol MTLDevice, MTLCommandQueue, MTLRenderPipelineState, MTLDepthStencilState;
#import <ARKitCore/ARKitCore-Structs.h>
@interface ARGPUCubemapProjector : NSObject {

	id<MTLDevice> _device;
	id<MTLCommandQueue> _commandQueue;
	id<MTLRenderPipelineState> _cubemapPipelineStateSRGB_BGRA;
	id<MTLRenderPipelineState> _cubemapPipelineStateSRGB_RGBA;
	id<MTLRenderPipelineState> _cubemapPipelineStateHDR;
	id<MTLDepthStencilState> _cubemapDepthState;

}
+(id)createCubemap:(unsigned long long)arg1 ;
-(id)init;
-(void)projectToCube:(id)arg1 transformWorldFromCube:(SCD_Struct_AR1)arg2 meshes:(id)arg3 blend:(BOOL)arg4 ;
@end

