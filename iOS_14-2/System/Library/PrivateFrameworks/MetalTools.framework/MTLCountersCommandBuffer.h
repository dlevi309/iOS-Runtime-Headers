/*
* Generated on Thursday, January 14, 2021 at 2:27:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MTLToolsCommandBuffer.h>

@class MTLCountersTraceCommandBuffer;

@interface MTLCountersCommandBuffer : MTLToolsCommandBuffer {

	MTLCountersTraceCommandBuffer* _traceBuffer;

}

@property (nonatomic,readonly) MTLCountersTraceCommandBuffer * traceBuffer;              //@synthesize traceBuffer=_traceBuffer - In the implementation block
-(id)resourceStateCommandEncoderWithDescriptor:(id)arg1 ;
-(void)waitUntilCompleted;
-(id)computeCommandEncoderWithDescriptor:(id)arg1 ;
-(void)waitUntilScheduled;
-(void)presentDrawable:(id)arg1 ;
-(id)computeCommandEncoder;
-(id)blitCommandEncoderWithDescriptor:(id)arg1 ;
-(void)addPurgedHeap:(id)arg1 ;
-(id)computeCommandEncoderWithDispatchType:(unsigned long long)arg1 ;
-(void)addPurgedResource:(id)arg1 ;
-(id)parallelRenderCommandEncoderWithDescriptor:(id)arg1 ;
-(id)resourceStateCommandEncoder;
-(id)sampledComputeCommandEncoderWithProgramInfoBuffer:(/*function pointer*/void**)arg1 capacity:(unsigned long long)arg2 ;
-(id)sampledComputeCommandEncoderWithDispatchType:(unsigned long long)arg1 programInfoBuffer:(/*function pointer*/void**)arg2 capacity:(unsigned long long)arg3 ;
-(id)sampledComputeCommandEncoderWithDescriptor:(id)arg1 programInfoBuffer:(/*function pointer*/void**)arg2 capacity:(unsigned long long)arg3 ;
-(id)sampledRenderCommandEncoderWithDescriptor:(id)arg1 programInfoBuffer:(/*function pointer*/void**)arg2 capacity:(unsigned long long)arg3 ;
-(id)blitCommandEncoder;
-(id)renderCommandEncoderWithDescriptor:(id)arg1 ;
-(void)presentDrawable:(id)arg1 atTime:(double)arg2 ;
-(void)dealloc;
-(MTLCountersTraceCommandBuffer *)traceBuffer;
-(id)initWithCommandBuffer:(id)arg1 commandQueue:(id)arg2 ;
@end

