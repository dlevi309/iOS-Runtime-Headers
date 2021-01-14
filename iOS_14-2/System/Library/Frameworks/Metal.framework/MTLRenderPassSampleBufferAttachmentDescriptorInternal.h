/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLRenderPassSampleBufferAttachmentDescriptor.h>

@interface MTLRenderPassSampleBufferAttachmentDescriptorInternal : MTLRenderPassSampleBufferAttachmentDescriptor {

	MTLRenderPassSampleBufferAttachmentDescriptorPrivate _private;

}
-(void)setEndOfVertexSampleIndex:(unsigned long long)arg1 ;
-(void)setStartOfFragmentSampleIndex:(unsigned long long)arg1 ;
-(unsigned long long)startOfFragmentSampleIndex;
-(void)setEndOfFragmentSampleIndex:(unsigned long long)arg1 ;
-(unsigned long long)endOfFragmentSampleIndex;
-(id)init;
-(void)setSampleBuffer:(id)arg1 ;
-(const MTLRenderPassSampleBufferAttachmentDescriptorPrivate*)_descriptorPrivate;
-(unsigned long long)hash;
-(id)sampleBuffer;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStartOfVertexSampleIndex:(unsigned long long)arg1 ;
-(unsigned long long)startOfVertexSampleIndex;
-(unsigned long long)endOfVertexSampleIndex;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

