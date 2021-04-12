/*
* Generated on Monday, March 1, 2021 at 2:34:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
*/

#import <MPSCore/MPSCore-Structs.h>
#import <MPSCore/MPSImage.h>

@interface MPSTemporaryImage : MPSImage {

	unsigned long long _readCount;

}

@property (assign,nonatomic) unsigned long long readCount;              //@synthesize readCount=_readCount - In the implementation block
+(id)temporaryImageWithCommandBuffer:(id)arg1 imageDescriptor:(id)arg2 ;
+(id)defaultAllocator;
+(id)temporaryImageWithCommandBuffer:(id)arg1 textureDescriptor:(id)arg2 featureChannels:(unsigned long long)arg3 ;
+(id)temporaryImageWithCommandBuffer:(id)arg1 textureDescriptor:(id)arg2 ;
+(void)prefetchStorageWithCommandBuffer:(id)arg1 imageDescriptorList:(id)arg2 ;
-(void)dealloc;
-(id)debugDescription;
-(void)setReadCount:(unsigned long long)arg1 ;
-(void)synchronizeOnCommandBuffer:(id)arg1 ;
-(unsigned long long)readCount;
-(unsigned long long)setPurgeableState:(unsigned long long)arg1 ;
-(id)initWithParentImage:(id)arg1 sliceRange:(NSRange)arg2 featureChannels:(unsigned long long)arg3 ;
-(void)readBytes:(void*)arg1 dataLayout:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 bytesPerImage:(unsigned long long)arg4 region:(SCD_Struct_MP16)arg5 featureChannelInfo:(SCD_Struct_MP2)arg6 imageIndex:(unsigned long long)arg7 ;
-(void)writeBytes:(const void*)arg1 dataLayout:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 bytesPerImage:(unsigned long long)arg4 region:(SCD_Struct_MP16)arg5 featureChannelInfo:(SCD_Struct_MP2)arg6 imageIndex:(unsigned long long)arg7 ;
@end

