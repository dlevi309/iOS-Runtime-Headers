/*
* Generated on Thursday, January 14, 2021 at 2:27:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ACTFramework.framework/ACTFramework
*/


@protocol MTLDevice, MTLCommandQueue, MTLComputePipelineState;
#import <ACTFramework/ACTFramework-Structs.h>
@interface ACTPanoGPUDownscaler : NSObject {

	id<MTLDevice> _device;
	id<MTLCommandQueue> _queue;
	id<MTLComputePipelineState> _downsampleState;

}
-(id)init;
-(void)dealloc;
-(int)downsample:(CVBufferRef)arg1 to:(CVBufferRef)arg2 ;
@end

