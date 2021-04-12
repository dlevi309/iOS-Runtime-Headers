/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(BOOL)supportGPU;
+(BOOL)supportVectorForward;
+(id)sharedCommandQueue;
-(id<MTLDevice>)device;
-(id<MTLCommandBuffer>)commandBuffer;
-(id<MTLCommandQueue>)commandQueue;
-(void)setCommandBuffer:(id<MTLCommandBuffer>)arg1 ;
-(void)setCommandQueue:(id<MTLCommandQueue>)arg1 ;
-(int)execute;
-(void)setDevice:(id<MTLDevice>)arg1 ;
-(id)initNewContext:(BOOL)arg1 ;
@end

