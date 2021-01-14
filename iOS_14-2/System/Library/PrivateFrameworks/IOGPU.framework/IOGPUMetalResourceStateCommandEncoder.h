/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IOGPU.framework/IOGPU
*/

#import <IOGPU/IOGPU-Structs.h>
#import <IOGPU/IOGPUMetalCommandEncoder.h>

@interface IOGPUMetalResourceStateCommandEncoder : IOGPUMetalCommandEncoder
-(void)updateTextureMapping:(id)arg1 mode:(unsigned long long)arg2 region:(SCD_Struct_IO24)arg3 mipLevel:(unsigned long long)arg4 slice:(unsigned long long)arg5 ;
-(void)updateTextureMappings:(id)arg1 mode:(unsigned long long)arg2 regions:(const SCD_Struct_IO24*)arg3 mipLevels:(const unsigned long long*)arg4 slices:(const unsigned long long*)arg5 numRegions:(unsigned long long)arg6 ;
-(void)updateTextureMapping:(id)arg1 mode:(unsigned long long)arg2 indirectBuffer:(id)arg3 indirectBufferOffset:(unsigned long long)arg4 ;
-(unsigned long long)getType;
@end

