/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/


@protocol MTLDevice, MTLCommandQueue, MTLRenderPipelineState;
#import <ARKitCore/ARKitCore-Structs.h>
@interface ARGPUWarper : NSObject {

	id<MTLDevice> _device;
	id<MTLCommandQueue> _commandQueue;
	id<MTLRenderPipelineState> _homographyPipelineState;

}
-(id)init;
-(id)description;
-(void)warpCameraImage:(CVBufferRef)arg1 withExposureOffset:(float)arg2 withCameraIntrinsics:(SCD_Struct_AR25)arg3 withCameraTransform:(SCD_Struct_AR1)arg4 toPlane:(ARTexturedPlane*)arg5 withLoadAction:(unsigned long long)arg6 synchronous:(BOOL)arg7 ;
-(void)warpPlane:(ARTexturedPlane*)arg1 toPlane:(ARTexturedPlane*)arg2 withLoadAction:(unsigned long long)arg3 synchronous:(BOOL)arg4 ;
@end

