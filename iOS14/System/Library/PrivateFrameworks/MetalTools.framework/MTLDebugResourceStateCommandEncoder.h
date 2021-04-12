/*
* Generated on Thursday, January 14, 2021 at 2:27:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsResourceStateCommandEncoder.h>

@interface MTLDebugResourceStateCommandEncoder : MTLToolsResourceStateCommandEncoder {

	BOOL canDealloc;
	BOOL canEndEncoding;
	BOOL hasEndedEncoding;
	deque<id, std::__1::allocator<id> >* updatedFences;

}
-(void)updateTextureMapping:(id)arg1 mode:(unsigned long long)arg2 region:(SCD_Struct_MT8)arg3 mipLevel:(unsigned long long)arg4 slice:(unsigned long long)arg5 ;
-(void)updateTextureMappings:(id)arg1 mode:(unsigned long long)arg2 regions:(const SCD_Struct_MT8*)arg3 mipLevels:(const unsigned long long*)arg4 slices:(const unsigned long long*)arg5 numRegions:(unsigned long long)arg6 ;
-(void)updateTextureMapping:(id)arg1 mode:(unsigned long long)arg2 indirectBuffer:(id)arg3 indirectBufferOffset:(unsigned long long)arg4 ;
-(void)updateFence:(id)arg1 ;
-(void)waitForFence:(id)arg1 ;
-(void)endEncoding;
-(void)dealloc;
-(void)_setDefaults;
-(void)validateTextureAccess:(id)arg1 region:(SCD_Struct_MT8)arg2 mipLevel:(unsigned long long)arg3 slice:(unsigned long long)arg4 ;
-(BOOL)checkEncoderState;
-(void)validateSparseTextureMappingMode:(unsigned long long)arg1 ;
-(id)initWithResourceStateCommandEncoder:(id)arg1 commandBuffer:(id)arg2 ;
@end

