/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsCommandBuffer.h>

@class MTLCountersTraceCommandBuffer;

@interface MTLCountersCommandBuffer : MTLToolsCommandBuffer {

	MTLCountersTraceCommandBuffer* _traceBuffer;

}

@property (nonatomic,readonly) MTLCountersTraceCommandBuffer * traceBuffer;              //@synthesize traceBuffer=_traceBuffer - In the implementation block
-(void)dealloc;
-(id)computeCommandEncoder;
-(void)waitUntilCompleted;
-(id)blitCommandEncoder;
-(id)renderCommandEncoderWithDescriptor:(id)arg1 ;
-(void)presentDrawable:(id)arg1 ;
-(void)waitUntilScheduled;
-(void)presentDrawable:(id)arg1 atTime:(double)arg2 ;
-(id)computeCommandEncoderWithDispatchType:(unsigned long long)arg1 ;
-(id)parallelRenderCommandEncoderWithDescriptor:(id)arg1 ;
-(id)resourceStateCommandEncoder;
-(void)addPurgedResource:(id)arg1 ;
-(void)addPurgedHeap:(id)arg1 ;
-(id)sampledRenderCommandEncoderWithDescriptor:(id)arg1 programInfoBuffer:(SCD_Struct_MT8*)arg2 capacity:(unsigned long long)arg3 ;
-(id)sampledComputeCommandEncoderWithProgramInfoBuffer:(SCD_Struct_MT8*)arg1 capacity:(unsigned long long)arg2 ;
-(id)sampledComputeCommandEncoderWithDispatchType:(unsigned long long)arg1 programInfoBuffer:(SCD_Struct_MT8*)arg2 capacity:(unsigned long long)arg3 ;
-(MTLCountersTraceCommandBuffer *)traceBuffer;
-(id)initWithCommandBuffer:(id)arg1 commandQueue:(id)arg2 ;
@end

