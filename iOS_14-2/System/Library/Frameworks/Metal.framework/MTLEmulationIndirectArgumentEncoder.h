/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <Metal/_MTLIndirectArgumentEncoder.h>
#import <libobjc.A.dylib/MTLArgumentEncoderSPI.h>

@class _MTLIndirectArgumentBufferLayout, MTLEmulationIndirectArgumentBufferLayout, NSString;

@interface MTLEmulationIndirectArgumentEncoder : _MTLIndirectArgumentEncoder <MTLArgumentEncoderSPI> {

	char* _destination;
	MTLEmulationIndirectArgumentBufferLayout* _emulationLayout;

}

@property (readonly) unsigned long long encodedLength; 
@property (nonatomic,readonly) _MTLIndirectArgumentBufferLayout * layout; 
@property (readonly) id<MTLDevice> device; 
@property (copy) NSString * label; 
@property (readonly) unsigned long long alignment; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)encodedLength;
-(void)setArgumentBuffer:(id)arg1 offset:(unsigned long long)arg2 ;
-(void*)constantDataAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)alignment;
-(void)setSamplerStates:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void)setTextures:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void)setTexture:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setRenderPipelineState:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setRenderPipelineStates:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void)setComputePipelineState:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setComputePipelineStates:(const id*)arg1 withRange:(NSRange)arg2 ;
-(id)newArgumentEncoderForBufferAtIndex:(unsigned long long)arg1 ;
-(id)initWithLayout:(id)arg1 device:(id)arg2 ;
-(void)setFunctionPointer:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setFunctionPointers:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void)setBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(NSRange)arg3 ;
-(void)dealloc;
-(void)setBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)setSamplerState:(id)arg1 atIndex:(unsigned long long)arg2 ;
@end

