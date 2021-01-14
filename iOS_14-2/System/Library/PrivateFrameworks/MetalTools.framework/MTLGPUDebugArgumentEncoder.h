/*
* Generated on Thursday, January 14, 2021 at 2:27:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsArgumentEncoder.h>

@interface MTLGPUDebugArgumentEncoder : MTLToolsArgumentEncoder {

	const GPUDebugArgumentEncoderLayout* _layout;

}
-(void)setArgumentBuffer:(id)arg1 offset:(unsigned long long)arg2 ;
-(void)setArgumentBuffer:(id)arg1 startOffset:(unsigned long long)arg2 arrayElement:(unsigned long long)arg3 ;
-(void)setRenderPipelineState:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setRenderPipelineStates:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void)setIndirectCommandBuffer:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setIndirectCommandBuffers:(const id*)arg1 withRange:(NSRange)arg2 ;
-(id)newArgumentEncoderForBufferAtIndex:(unsigned long long)arg1 ;
-(void)setBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(NSRange)arg3 ;
-(void)setBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(id)initWithArgumentEncoder:(id)arg1 layout:(const GPUDebugArgumentEncoderLayout*)arg2 device:(id)arg3 ;
@end

