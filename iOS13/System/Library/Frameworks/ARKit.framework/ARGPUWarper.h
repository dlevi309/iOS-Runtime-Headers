/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/


@protocol MTLDevice, MTLCommandQueue, MTLRenderPipelineState;
#import <ARKit/ARKit-Structs.h>
@interface ARGPUWarper : NSObject {

	id<MTLDevice> _device;
	id<MTLCommandQueue> _commandQueue;
	id<MTLRenderPipelineState> _homographyPipelineState;

}
-(id)init;
-(id)description;
-(void)warpCameraImage:(CVBufferRef)arg1 withExposureOffset:(float)arg2 withCameraIntrinsics:(SCD_Struct_AR24)arg3 withCameraTransform:(SCD_Struct_AR1)arg4 toPlane:(ARTexturedPlane*)arg5 withLoadAction:(unsigned long long)arg6 synchronous:(BOOL)arg7 ;
-(void)warpPlane:(ARTexturedPlane*)arg1 toPlane:(ARTexturedPlane*)arg2 withLoadAction:(unsigned long long)arg3 synchronous:(BOOL)arg4 ;
@end

