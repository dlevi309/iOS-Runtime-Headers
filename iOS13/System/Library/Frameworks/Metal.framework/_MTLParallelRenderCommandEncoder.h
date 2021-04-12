/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <Metal/_MTLObjectWithLabel.h>
#import <libobjc.A.dylib/MTLParallelRenderCommandEncoder.h>

@protocol MTLDevice, MTLCommandQueue, MTLCommandBuffer;
@class _MTLCommandBuffer, MTLRenderPassDescriptor, NSString;

@interface _MTLParallelRenderCommandEncoder : _MTLObjectWithLabel <MTLParallelRenderCommandEncoder> {

	id<MTLDevice> _device;
	id<MTLCommandQueue> _queue;
	unsigned long long _globalTraceObjectID;
	unsigned long long _labelTraceID;
	_MTLCommandBuffer*<MTLCommandBuffer> _commandBuffer;
	MTLRenderPassDescriptor* _renderPassDescriptor;
	opaque_pthread_mutex_t _lock;
	unsigned long long _commandBuffersSize;
	unsigned long long _commandBuffersCount;
	id* _commandBuffers;
	BOOL _retainedReferences;
	BOOL _StatEnabled;
	unsigned long long _numThisEncoder;

}

@property (readonly) unsigned long long globalTraceObjectID;                        //@synthesize globalTraceObjectID=_globalTraceObjectID - In the implementation block
@property (getter=getType,nonatomic,readonly) unsigned long long type; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) id<MTLDevice> device;                                          //@synthesize device=_device - In the implementation block
@property (copy) NSString * label; 
-(void)dealloc;
-(NSString *)description;
-(id<MTLDevice>)device;
-(void)endEncoding;
-(id)commandBuffer;
-(void)pushDebugGroup:(id)arg1 ;
-(void)popDebugGroup;
-(void)insertDebugSignpost:(id)arg1 ;
-(unsigned long long)globalTraceObjectID;
-(void)setColorStoreAction:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setDepthStoreAction:(unsigned long long)arg1 ;
-(void)setStencilStoreAction:(unsigned long long)arg1 ;
-(void)setColorStoreActionOptions:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setDepthStoreActionOptions:(unsigned long long)arg1 ;
-(void)setStencilStoreActionOptions:(unsigned long long)arg1 ;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(id)_renderCommandEncoderCommon;
-(id)renderCommandEncoder;
-(id)initWithCommandBuffer:(id)arg1 renderPassDescriptor:(id)arg2 ;
-(id)sampledRenderCommandEncoderWithProgramInfoBuffer:(SCD_Struct_MT44*)arg1 capacity:(unsigned long long)arg2 ;
-(BOOL)isMemorylessRender;
@end

