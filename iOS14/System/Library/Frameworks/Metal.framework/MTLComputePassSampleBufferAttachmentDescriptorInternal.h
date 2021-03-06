/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLComputePassSampleBufferAttachmentDescriptor.h>

@interface MTLComputePassSampleBufferAttachmentDescriptorInternal : MTLComputePassSampleBufferAttachmentDescriptor {

	MTLComputePassSampleBufferAttachmentDescriptorPrivate _private;

}
-(id)init;
-(void)setSampleBuffer:(id)arg1 ;
-(void)setStartOfEncoderSampleIndex:(unsigned long long)arg1 ;
-(unsigned long long)startOfEncoderSampleIndex;
-(void)setEndOfEncoderSampleIndex:(unsigned long long)arg1 ;
-(unsigned long long)endOfEncoderSampleIndex;
-(const MTLComputePassSampleBufferAttachmentDescriptorPrivate*)_descriptorPrivate;
-(unsigned long long)hash;
-(id)sampleBuffer;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

