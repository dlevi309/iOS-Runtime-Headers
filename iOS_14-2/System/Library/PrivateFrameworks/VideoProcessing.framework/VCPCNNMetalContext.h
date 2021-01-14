/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


@protocol MTLDevice, MTLCommandQueue, MTLCommandBuffer;
@interface VCPCNNMetalContext : NSObject {

	id<MTLDevice> _device;
	id<MTLCommandQueue> _commandQueue;
	id<MTLCommandBuffer> _commandBuffer;

}

@property (retain) id<MTLDevice> device;                            //@synthesize device=_device - In the implementation block
@property (retain) id<MTLCommandQueue> commandQueue;                //@synthesize commandQueue=_commandQueue - In the implementation block
@property (retain) id<MTLCommandBuffer> commandBuffer;              //@synthesize commandBuffer=_commandBuffer - In the implementation block
+(id)sharedCommandQueue;
+(BOOL)supportGPU;
+(BOOL)supportVectorForward;
-(int)execute;
-(id<MTLCommandQueue>)commandQueue;
-(id<MTLDevice>)device;
-(id)initNewContext:(BOOL)arg1 ;
-(void)setCommandBuffer:(id<MTLCommandBuffer>)arg1 ;
-(id<MTLCommandBuffer>)commandBuffer;
-(void)setDevice:(id<MTLDevice>)arg1 ;
-(void)setCommandQueue:(id<MTLCommandQueue>)arg1 ;
@end

