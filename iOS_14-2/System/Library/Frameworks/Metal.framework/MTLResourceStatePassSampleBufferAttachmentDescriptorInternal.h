/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLResourceStatePassSampleBufferAttachmentDescriptor.h>

@interface MTLResourceStatePassSampleBufferAttachmentDescriptorInternal : MTLResourceStatePassSampleBufferAttachmentDescriptor {

	MTLResourceStatePassSampleBufferAttachmentDescriptorPrivate _private;

}
-(id)init;
-(void)setSampleBuffer:(id)arg1 ;
-(void)setStartOfEncoderSampleIndex:(unsigned long long)arg1 ;
-(unsigned long long)startOfEncoderSampleIndex;
-(void)setEndOfEncoderSampleIndex:(unsigned long long)arg1 ;
-(unsigned long long)endOfEncoderSampleIndex;
-(const MTLResourceStatePassSampleBufferAttachmentDescriptorPrivate*)_descriptorPrivate;
-(unsigned long long)hash;
-(id)sampleBuffer;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

