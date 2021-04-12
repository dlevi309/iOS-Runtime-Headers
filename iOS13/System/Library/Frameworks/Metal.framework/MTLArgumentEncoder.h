/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

@class NSString;


@protocol MTLArgumentEncoder <NSObject>
@property (readonly) id<MTLDevice> device; 
@property (copy) NSString * label; 
@property (readonly) unsigned long long encodedLength; 
@property (readonly) unsigned long long alignment; 
@required
-(unsigned long long)alignment;
-(id<MTLDevice>)device;
-(void)setBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
-(void)setTexture:(id)arg1 atIndex:(unsigned long long)arg2;
-(void)setLabel:(id)arg1;
-(NSString *)label;
-(void)setSamplerState:(id)arg1 atIndex:(unsigned long long)arg2;
-(unsigned long long)encodedLength;
-(void)setArgumentBuffer:(id)arg1 offset:(unsigned long long)arg2;
-(void*)constantDataAtIndex:(unsigned long long)arg1;
-(void)setBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(NSRange)arg3;
-(void)setTextures:(const id*)arg1 withRange:(NSRange)arg2;
-(void)setSamplerStates:(const id*)arg1 withRange:(NSRange)arg2;
-(void)setArgumentBuffer:(id)arg1 startOffset:(unsigned long long)arg2 arrayElement:(unsigned long long)arg3;
-(void)setRenderPipelineState:(id)arg1 atIndex:(unsigned long long)arg2;
-(void)setRenderPipelineStates:(const id*)arg1 withRange:(NSRange)arg2;
-(void)setComputePipelineState:(id)arg1 atIndex:(unsigned long long)arg2;
-(void)setComputePipelineStates:(const id*)arg1 withRange:(NSRange)arg2;
-(void)setIndirectCommandBuffer:(id)arg1 atIndex:(unsigned long long)arg2;
-(void)setIndirectCommandBuffers:(const id*)arg1 withRange:(NSRange)arg2;
-(id)newArgumentEncoderForBufferAtIndex:(unsigned long long)arg1;

@end

