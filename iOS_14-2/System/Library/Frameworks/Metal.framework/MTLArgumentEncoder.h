/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

@class NSString;


@protocol MTLArgumentEncoder <NSObject>
@property (readonly) id<MTLDevice> device; 
@property (copy) NSString * label; 
@property (readonly) unsigned long long encodedLength; 
@property (readonly) unsigned long long alignment; 
@required
-(unsigned long long)encodedLength;
-(void)setArgumentBuffer:(id)arg1 offset:(unsigned long long)arg2;
-(void*)constantDataAtIndex:(unsigned long long)arg1;
-(unsigned long long)alignment;
-(void)setSamplerStates:(const id*)arg1 withRange:(NSRange)arg2;
-(id<MTLDevice>)device;
-(void)setTextures:(const id*)arg1 withRange:(NSRange)arg2;
-(void)setTexture:(id)arg1 atIndex:(unsigned long long)arg2;
-(void)setArgumentBuffer:(id)arg1 startOffset:(unsigned long long)arg2 arrayElement:(unsigned long long)arg3;
-(void)setRenderPipelineState:(id)arg1 atIndex:(unsigned long long)arg2;
-(void)setRenderPipelineStates:(const id*)arg1 withRange:(NSRange)arg2;
-(void)setComputePipelineState:(id)arg1 atIndex:(unsigned long long)arg2;
-(void)setComputePipelineStates:(const id*)arg1 withRange:(NSRange)arg2;
-(void)setIndirectCommandBuffer:(id)arg1 atIndex:(unsigned long long)arg2;
-(void)setIndirectCommandBuffers:(const id*)arg1 withRange:(NSRange)arg2;
-(void)setAccelerationStructure:(id)arg1 atIndex:(unsigned long long)arg2;
-(id)newArgumentEncoderForBufferAtIndex:(unsigned long long)arg1;
-(void)setVisibleFunctionTable:(id)arg1 atIndex:(unsigned long long)arg2;
-(void)setVisibleFunctionTables:(const id*)arg1 withRange:(NSRange)arg2;
-(void)setIntersectionFunctionTable:(id)arg1 atIndex:(unsigned long long)arg2;
-(void)setIntersectionFunctionTables:(const id*)arg1 withRange:(NSRange)arg2;
-(void)setBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(NSRange)arg3;
-(void)setLabel:(id)arg1;
-(NSString *)label;
-(void)setBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
-(void)setSamplerState:(id)arg1 atIndex:(unsigned long long)arg2;

@end

