/*
* Generated on Thursday, January 14, 2021 at 2:27:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsParallelRenderCommandEncoder.h>

@class MTLRenderPassDescriptor;

@interface MTLDebugParallelRenderCommandEncoder : MTLToolsParallelRenderCommandEncoder {

	unsigned _unknownStoreActions;
	atomic<unsigned long long> _attachmentWriteMask;
	MTLRenderPassDescriptor* _descriptor;

}

@property (nonatomic,copy,readonly) MTLRenderPassDescriptor * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
-(id)formattedDescription:(unsigned long long)arg1 ;
-(void)setDepthStoreAction:(unsigned long long)arg1 ;
-(void)setColorStoreActionOptions:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(void)filterCounterRangeWithFirstBatch:(unsigned)arg1 lastBatch:(unsigned)arg2 filterIndex:(unsigned)arg3 ;
-(void)setDepthStoreActionOptions:(unsigned long long)arg1 ;
-(MTLRenderPassDescriptor *)descriptor;
-(id)description;
-(void)endEncoding;
-(id)renderCommandEncoder;
-(void)setColorStoreAction:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(id)sampledRenderCommandEncoderWithProgramInfoBuffer:(/*function pointer*/void**)arg1 capacity:(unsigned long long)arg2 ;
-(void)setStencilStoreActionOptions:(unsigned long long)arg1 ;
-(void)setStencilStoreAction:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)initWithBaseRenderPass:(id)arg1 commandBuffer:(id)arg2 descriptor:(id)arg3 ;
-(void)mergeAttachmentWriteMask:(unsigned long long)arg1 ;
@end

