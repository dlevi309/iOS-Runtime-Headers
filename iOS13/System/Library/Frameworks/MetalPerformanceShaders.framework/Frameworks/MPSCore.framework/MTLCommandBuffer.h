/*
* Generated on Monday, March 1, 2021 at 2:34:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
*/

@class NSString, NSError;


@protocol MTLCommandBuffer <NSObject>
@property (readonly) id<MTLDevice> device; 
@property (readonly) id<MTLCommandQueue> commandQueue; 
@property (readonly) BOOL retainedReferences; 
@property (copy) NSString * label; 
@property (readonly) double kernelStartTime; 
@property (readonly) double kernelEndTime; 
@property (readonly) double GPUStartTime; 
@property (readonly) double GPUEndTime; 
@property (readonly) unsigned long long status; 
@property (readonly) NSError * error; 
@required
-(NSError *)error;
-(unsigned long long)status;
-(id<MTLDevice>)device;
-(id)computeCommandEncoder;
-(void)setLabel:(id)arg1;
-(void)commit;
-(void)waitUntilCompleted;
-(id<MTLCommandQueue>)commandQueue;
-(void)addCompletedHandler:(/*^block*/id)arg1;
-(id)blitCommandEncoder;
-(NSString *)label;
-(BOOL)retainedReferences;
-(void)addScheduledHandler:(/*^block*/id)arg1;
-(id)renderCommandEncoderWithDescriptor:(id)arg1;
-(void)presentDrawable:(id)arg1;
-(void)waitUntilScheduled;
-(double)GPUEndTime;
-(double)GPUStartTime;
-(void)pushDebugGroup:(id)arg1;
-(void)popDebugGroup;
-(void)enqueue;
-(void)presentDrawable:(id)arg1 atTime:(double)arg2;
-(void)presentDrawable:(id)arg1 afterMinimumDuration:(double)arg2;
-(id)computeCommandEncoderWithDispatchType:(unsigned long long)arg1;
-(void)encodeWaitForEvent:(id)arg1 value:(unsigned long long)arg2;
-(void)encodeSignalEvent:(id)arg1 value:(unsigned long long)arg2;
-(id)parallelRenderCommandEncoderWithDescriptor:(id)arg1;
-(id)resourceStateCommandEncoder;
-(double)kernelStartTime;
-(double)kernelEndTime;

@end

