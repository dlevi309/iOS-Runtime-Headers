/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
*/

#import <MPSCore/MPSCore-Structs.h>
#import <MPSCore/MPSImage.h>

@interface MPSTemporaryImage : MPSImage {

	unsigned long long _readCount;

}

@property (assign,nonatomic) unsigned long long readCount;              //@synthesize readCount=_readCount - In the implementation block
+(id)temporaryImageWithCommandBuffer:(id)arg1 textureDescriptor:(id)arg2 featureChannels:(unsigned long long)arg3 ;
+(id)defaultAllocator;
+(id)temporaryImageWithCommandBuffer:(id)arg1 imageDescriptor:(id)arg2 ;
+(id)temporaryImageWithCommandBuffer:(id)arg1 textureDescriptor:(id)arg2 ;
+(void)prefetchStorageWithCommandBuffer:(id)arg1 imageDescriptorList:(id)arg2 ;
-(id)debugDescription;
-(void)setReadCount:(unsigned long long)arg1 ;
-(void)readBytes:(void*)arg1 dataLayout:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 bytesPerImage:(unsigned long long)arg4 region:(SCD_Struct_MP1)arg5 featureChannelInfo:(SCD_Struct_MP5)arg6 imageIndex:(unsigned long long)arg7 ;
-(unsigned long long)setPurgeableState:(unsigned long long)arg1 ;
-(id)initWithParentImage:(id)arg1 sliceRange:(NSRange)arg2 featureChannels:(unsigned long long)arg3 ;
-(void)synchronizeOnCommandBuffer:(id)arg1 ;
-(void)writeBytes:(const void*)arg1 dataLayout:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 bytesPerImage:(unsigned long long)arg4 region:(SCD_Struct_MP1)arg5 featureChannelInfo:(SCD_Struct_MP5)arg6 imageIndex:(unsigned long long)arg7 ;
-(unsigned long long)readCount;
-(void)dealloc;
@end

