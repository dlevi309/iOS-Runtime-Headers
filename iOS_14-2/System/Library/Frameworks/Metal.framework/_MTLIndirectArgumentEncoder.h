/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <Metal/_MTLObjectWithLabel.h>
#import <libobjc.A.dylib/MTLArgumentEncoder.h>

@protocol MTLDevice;
@class NSString, _MTLIndirectArgumentBufferLayout;

@interface _MTLIndirectArgumentEncoder : _MTLObjectWithLabel <MTLArgumentEncoder> {

	id<MTLDevice> _device;
	_MTLIndirectArgumentBufferLayout* _layout;

}

@property (readonly) unsigned long long encodedLength; 
@property (readonly) id<MTLDevice> device; 
@property (copy) NSString * label; 
@property (nonatomic,readonly) _MTLIndirectArgumentBufferLayout * layout;              //@synthesize layout=_layout - In the implementation block
@property (readonly) unsigned long long alignment; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setArgumentBuffer:(id)arg1 offset:(unsigned long long)arg2 ;
-(void*)constantDataAtIndex:(unsigned long long)arg1 ;
-(void)setIntersectionFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2 ;
-(void)setVisibleFunctionTables:(const id*)arg1 withBufferRange:(NSRange)arg2 ;
-(void)setSamplerStates:(const id*)arg1 withRange:(NSRange)arg2 ;
-(id<MTLDevice>)device;
-(void)setTextures:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void)setTexture:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setIndirectArgumentBuffer:(id)arg1 offset:(unsigned long long)arg2 ;
-(void)setArgumentBuffer:(id)arg1 startOffset:(unsigned long long)arg2 arrayElement:(unsigned long long)arg3 ;
-(void)setRenderPipelineState:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setRenderPipelineStates:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void)setComputePipelineState:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setComputePipelineStates:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void)setIndirectCommandBuffer:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setIndirectCommandBuffers:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void)setAccelerationStructure:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)newArgumentEncoderForBufferAtIndex:(unsigned long long)arg1 ;
-(void)setVisibleFunctionTable:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setVisibleFunctionTables:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void)setIntersectionFunctionTable:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setIntersectionFunctionTables:(const id*)arg1 withRange:(NSRange)arg2 ;
-(id)initWithLayout:(id)arg1 device:(id)arg2 ;
-(void)setFunctionPointer:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setFunctionPointers:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void)setBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(NSRange)arg3 ;
-(void)setVisibleFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2 ;
-(void)dealloc;
-(void)setIntersectionFunctionTables:(const id*)arg1 withBufferRange:(NSRange)arg2 ;
-(_MTLIndirectArgumentBufferLayout *)layout;
-(void)setBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)setSamplerState:(id)arg1 atIndex:(unsigned long long)arg2 ;
@end

