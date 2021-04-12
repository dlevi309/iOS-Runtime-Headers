/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
*/

@class NSString, NSError;


@protocol MTLCommandBuffer <NSObject>
@property (readonly) id<MTLDevice> device; 
@property (readonly) id<MTLCommandQueue> commandQueue; 
@property (readonly) BOOL retainedReferences; 
@property (readonly) unsigned long long errorOptions; 
@property (copy) NSString * label; 
@property (readonly) double kernelStartTime; 
@property (readonly) double kernelEndTime; 
@property (readonly) id<MTLLogContainer> logs; 
@property (readonly) double GPUStartTime; 
@property (readonly) double GPUEndTime; 
@property (readonly) unsigned long long status; 
@property (readonly) NSError * error; 
@required
-(void)presentDrawable:(id)arg1 afterMinimumDuration:(double)arg2;
-(void)commit;
-(id)resourceStateCommandEncoderWithDescriptor:(id)arg1;
-(void)pushDebugGroup:(id)arg1;
-(void)waitUntilCompleted;
-(id<MTLLogContainer>)logs;
-(double)kernelStartTime;
-(void)addScheduledHandler:(/*^block*/id)arg1;
-(double)kernelEndTime;
-(void)enqueue;
-(id<MTLCommandQueue>)commandQueue;
-(id)computeCommandEncoderWithDescriptor:(id)arg1;
-(void)waitUntilScheduled;
-(id)accelerationStructureCommandEncoder;
-(void)presentDrawable:(id)arg1;
-(unsigned long long)errorOptions;
-(id)computeCommandEncoder;
-(BOOL)retainedReferences;
-(id)blitCommandEncoderWithDescriptor:(id)arg1;
-(id)computeCommandEncoderWithDispatchType:(unsigned long long)arg1;
-(void)encodeWaitForEvent:(id)arg1 value:(unsigned long long)arg2;
-(NSError *)error;
-(id)parallelRenderCommandEncoderWithDescriptor:(id)arg1;
-(id)resourceStateCommandEncoder;
-(id<MTLDevice>)device;
-(void)popDebugGroup;
-(double)GPUStartTime;
-(id)blitCommandEncoder;
-(id)renderCommandEncoderWithDescriptor:(id)arg1;
-(void)setLabel:(id)arg1;
-(void)encodeSignalEvent:(id)arg1 value:(unsigned long long)arg2;
-(double)GPUEndTime;
-(NSString *)label;
-(void)presentDrawable:(id)arg1 atTime:(double)arg2;
-(void)addCompletedHandler:(/*^block*/id)arg1;
-(unsigned long long)status;

@end

