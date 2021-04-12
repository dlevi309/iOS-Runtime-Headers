/*
* Generated on Monday, March 1, 2021 at 2:34:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
*/

#import <MPSCore/MPSCore-Structs.h>
#import <MPSCore/MPSImage.h>

@interface MPSVirtualImage : MPSImage

@property (nonatomic,readonly) id<MTLTexture> texture; 
-(id<MTLTexture>)texture;
-(void)synchronizeOnCommandBuffer:(id)arg1 ;
-(id)initWithDevice:(id)arg1 imageDescriptor:(id)arg2 ;
-(void)writeBytes:(const void*)arg1 dataLayout:(unsigned long long)arg2 imageIndex:(unsigned long long)arg3 ;
-(void)readBytes:(void*)arg1 dataLayout:(unsigned long long)arg2 imageIndex:(unsigned long long)arg3 ;
-(unsigned long long)setPurgeableState:(unsigned long long)arg1 ;
-(void)readBytes:(void*)arg1 dataLayout:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 bytesPerImage:(unsigned long long)arg4 region:(SCD_Struct_MP16)arg5 featureChannelInfo:(SCD_Struct_MP2)arg6 imageIndex:(unsigned long long)arg7 ;
-(void)writeBytes:(const void*)arg1 dataLayout:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 bytesPerImage:(unsigned long long)arg4 region:(SCD_Struct_MP16)arg5 featureChannelInfo:(SCD_Struct_MP2)arg6 imageIndex:(unsigned long long)arg7 ;
-(void)readBytes:(void*)arg1 dataLayout:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 region:(SCD_Struct_MP16)arg4 featureChannelInfo:(SCD_Struct_MP2)arg5 imageIndex:(unsigned long long)arg6 ;
-(id)initWithTexture:(id)arg1 featureChannels:(unsigned long long)arg2 ;
-(void)writeBytes:(const void*)arg1 dataLayout:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 region:(SCD_Struct_MP16)arg4 featureChannelInfo:(SCD_Struct_MP2)arg5 imageIndex:(unsigned long long)arg6 ;
@end

