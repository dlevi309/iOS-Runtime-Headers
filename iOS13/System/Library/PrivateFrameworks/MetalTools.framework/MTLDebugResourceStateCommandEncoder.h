/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)endEncoding;
-(void)updateFence:(id)arg1 ;
-(void)waitForFence:(id)arg1 ;
-(void)updateTextureMappings:(id)arg1 mode:(unsigned long long)arg2 regions:(const SCD_Struct_MT5*)arg3 mipLevels:(const unsigned long long*)arg4 slices:(const unsigned long long*)arg5 numRegions:(unsigned long long)arg6 ;
-(void)updateTextureMapping:(id)arg1 mode:(unsigned long long)arg2 region:(SCD_Struct_MT5)arg3 mipLevel:(unsigned long long)arg4 slice:(unsigned long long)arg5 ;
-(void)updateTextureMapping:(id)arg1 mode:(unsigned long long)arg2 indirectBuffer:(id)arg3 indirectBufferOffset:(unsigned long long)arg4 ;
-(void)_setDefaults;
-(void)validateTextureAccess:(id)arg1 region:(SCD_Struct_MT5)arg2 mipLevel:(unsigned long long)arg3 slice:(unsigned long long)arg4 ;
-(BOOL)checkEncoderState;
-(void)validateSparseTextureMappingMode:(unsigned long long)arg1 ;
-(id)initWithResourceStateCommandEncoder:(id)arg1 commandBuffer:(id)arg2 ;
@end

