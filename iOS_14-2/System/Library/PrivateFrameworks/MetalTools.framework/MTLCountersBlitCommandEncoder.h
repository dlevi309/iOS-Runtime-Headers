/*
* Generated on Thursday, January 14, 2021 at 2:27:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsBlitCommandEncoder.h>

@class MTLCountersTraceBlitCommandEncoder;

@interface MTLCountersBlitCommandEncoder : MTLToolsBlitCommandEncoder {

	MTLCountersTraceBlitCommandEncoder* _traceEncoder;

}
-(void)pushDebugGroup:(id)arg1 ;
-(void)copyFromBuffer:(id)arg1 sourceOffset:(unsigned long long)arg2 sourceBytesPerRow:(unsigned long long)arg3 sourceBytesPerImage:(unsigned long long)arg4 sourceSize:(SCD_Struct_MT109)arg5 toTexture:(id)arg6 destinationSlice:(unsigned long long)arg7 destinationLevel:(unsigned long long)arg8 destinationOrigin:(SCD_Struct_MT109)arg9 ;
-(void)optimizeContentsForGPUAccess:(id)arg1 slice:(unsigned long long)arg2 level:(unsigned long long)arg3 ;
-(void)optimizeContentsForCPUAccess:(id)arg1 slice:(unsigned long long)arg2 level:(unsigned long long)arg3 ;
-(void)copyFromTexture:(id)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 sourceOrigin:(SCD_Struct_MT109)arg4 sourceSize:(SCD_Struct_MT109)arg5 toTexture:(id)arg6 destinationSlice:(unsigned long long)arg7 destinationLevel:(unsigned long long)arg8 destinationOrigin:(SCD_Struct_MT109)arg9 ;
-(void)fillBuffer:(id)arg1 range:(NSRange)arg2 value:(unsigned char)arg3 ;
-(void)copyFromTexture:(id)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 sourceOrigin:(SCD_Struct_MT109)arg4 sourceSize:(SCD_Struct_MT109)arg5 toBuffer:(id)arg6 destinationOffset:(unsigned long long)arg7 destinationBytesPerRow:(unsigned long long)arg8 destinationBytesPerImage:(unsigned long long)arg9 ;
-(void)copyFromTexture:(id)arg1 toTexture:(id)arg2 ;
-(void)updateFence:(id)arg1 ;
-(void)popDebugGroup;
-(void)waitForFence:(id)arg1 ;
-(void)endEncoding;
-(void)generateMipmapsForTexture:(id)arg1 ;
-(void)insertDebugSignpost:(id)arg1 ;
-(void)optimizeContentsForGPUAccess:(id)arg1 ;
-(void)optimizeContentsForCPUAccess:(id)arg1 ;
-(void)setLabel:(id)arg1 ;
-(void)dealloc;
-(void)copyFromTexture:(id)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 toTexture:(id)arg4 destinationSlice:(unsigned long long)arg5 destinationLevel:(unsigned long long)arg6 sliceCount:(unsigned long long)arg7 levelCount:(unsigned long long)arg8 ;
-(void)copyFromBuffer:(id)arg1 sourceOffset:(unsigned long long)arg2 toBuffer:(id)arg3 destinationOffset:(unsigned long long)arg4 size:(unsigned long long)arg5 ;
-(void)copyFromBuffer:(id)arg1 sourceOffset:(unsigned long long)arg2 sourceBytesPerRow:(unsigned long long)arg3 sourceBytesPerImage:(unsigned long long)arg4 sourceSize:(SCD_Struct_MT109)arg5 toTexture:(id)arg6 destinationSlice:(unsigned long long)arg7 destinationLevel:(unsigned long long)arg8 destinationOrigin:(SCD_Struct_MT109)arg9 options:(unsigned long long)arg10 ;
-(void)copyFromTexture:(id)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 sourceOrigin:(SCD_Struct_MT109)arg4 sourceSize:(SCD_Struct_MT109)arg5 toBuffer:(id)arg6 destinationOffset:(unsigned long long)arg7 destinationBytesPerRow:(unsigned long long)arg8 destinationBytesPerImage:(unsigned long long)arg9 options:(unsigned long long)arg10 ;
-(void)copyFromTexture:(id)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 sourceOrigin:(SCD_Struct_MT109)arg4 sourceSize:(SCD_Struct_MT109)arg5 toTexture:(id)arg6 destinationSlice:(unsigned long long)arg7 destinationLevel:(unsigned long long)arg8 destinationOrigin:(SCD_Struct_MT109)arg9 options:(unsigned long long)arg10 ;
-(id)initWithBlitCommandEncoder:(id)arg1 commandBuffer:(id)arg2 ;
@end

