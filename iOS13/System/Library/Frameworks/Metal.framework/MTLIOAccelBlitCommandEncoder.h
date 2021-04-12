/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLIOAccelCommandEncoder.h>

@interface MTLIOAccelBlitCommandEncoder : MTLIOAccelCommandEncoder
-(void)copyFromTexture:(id)arg1 toTexture:(id)arg2 ;
-(void)updateFence:(id)arg1 ;
-(void)waitForFence:(id)arg1 ;
-(void)optimizeContentsForGPUAccess:(id)arg1 ;
-(void)optimizeContentsForCPUAccess:(id)arg1 ;
-(unsigned long long)getType;
-(void)copyFromTexture:(id)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 toTexture:(id)arg4 destinationSlice:(unsigned long long)arg5 destinationLevel:(unsigned long long)arg6 sliceCount:(unsigned long long)arg7 levelCount:(unsigned long long)arg8 ;
-(void)synchronizeResource:(id)arg1 ;
-(void)synchronizeTexture:(id)arg1 slice:(unsigned long long)arg2 level:(unsigned long long)arg3 ;
-(void)optimizeContentsForGPUAccess:(id)arg1 slice:(unsigned long long)arg2 level:(unsigned long long)arg3 ;
-(void)optimizeContentsForCPUAccess:(id)arg1 slice:(unsigned long long)arg2 level:(unsigned long long)arg3 ;
-(void)resetCommandsInBuffer:(id)arg1 withRange:(NSRange)arg2 ;
-(void)copyIndirectCommandBuffer:(id)arg1 sourceRange:(NSRange)arg2 destination:(id)arg3 destinationIndex:(unsigned long long)arg4 ;
-(void)optimizeIndirectCommandBuffer:(id)arg1 withRange:(NSRange)arg2 ;
@end

