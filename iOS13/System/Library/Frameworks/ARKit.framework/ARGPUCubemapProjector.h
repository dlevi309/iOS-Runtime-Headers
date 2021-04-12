/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/


@protocol MTLDevice, MTLCommandQueue, MTLRenderPipelineState, MTLDepthStencilState;
#import <ARKit/ARKit-Structs.h>
@interface ARGPUCubemapProjector : NSObject {

	id<MTLDevice> _device;
	id<MTLCommandQueue> _commandQueue;
	id<MTLRenderPipelineState> _cubemapPipelineStateSRGB;
	id<MTLRenderPipelineState> _cubemapPipelineStateHDR;
	id<MTLDepthStencilState> _cubemapDepthState;

}
-(id)init;
-(void)projectToCube:(id)arg1 transformWorldFromCube:(SCD_Struct_AR1)arg2 planes:(const vector<ARTexturedPlane, std::__1::allocator<ARTexturedPlane> >*)arg3 blend:(BOOL)arg4 ;
@end

