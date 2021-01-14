/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <Metal/_MTLIndirectArgumentEncoder.h>

@interface MTLIOAccelIndirectArgumentEncoder : _MTLIndirectArgumentEncoder

@property (readonly) unsigned long long encodedLength; 
-(unsigned long long)encodedLength;
-(void*)constantDataAtIndex:(unsigned long long)arg1 ;
-(void)setIntersectionFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2 ;
-(void)setVisibleFunctionTables:(const id*)arg1 withBufferRange:(NSRange)arg2 ;
-(void)setSamplerStates:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void)setTextures:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void)setTexture:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setIndirectArgumentBuffer:(id)arg1 offset:(unsigned long long)arg2 ;
-(void)setIndirectCommandBuffer:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setIndirectCommandBuffers:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void)setVisibleFunctionTable:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setVisibleFunctionTables:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void)setIntersectionFunctionTable:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setIntersectionFunctionTables:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void)setBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(NSRange)arg3 ;
-(void)setVisibleFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2 ;
-(void)setIntersectionFunctionTables:(const id*)arg1 withBufferRange:(NSRange)arg2 ;
-(void)setBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)setSamplerState:(id)arg1 atIndex:(unsigned long long)arg2 ;
@end

