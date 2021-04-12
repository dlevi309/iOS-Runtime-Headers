/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsParallelRenderCommandEncoder.h>

@class MTLRenderPassDescriptor;

@interface MTLCountersParallelRenderCommandEncoder : MTLToolsParallelRenderCommandEncoder {

	MTLRenderPassDescriptor* _descriptor;

}
-(void)dealloc;
-(void)endEncoding;
-(void)setColorStoreAction:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setDepthStoreAction:(unsigned long long)arg1 ;
-(void)setStencilStoreAction:(unsigned long long)arg1 ;
-(id)renderCommandEncoder;
-(id)sampledRenderCommandEncoderWithProgramInfoBuffer:(SCD_Struct_MT8*)arg1 capacity:(unsigned long long)arg2 ;
-(id)initWithBaseRenderPass:(id)arg1 commandBuffer:(id)arg2 descriptor:(id)arg3 ;
@end

