/*
* Generated on Thursday, January 14, 2021 at 2:27:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MTLToolsIndirectCommandBuffer.h>

@protocol MTLBuffer, MTLIndirectCommandBuffer;
@interface MTLGPUDebugIndirectCommandBuffer : MTLToolsIndirectCommandBuffer {

	BOOL _hasRender;
	BOOL _inheritsBuffers;
	BOOL _inheritsPipelineState;
	id<MTLBuffer> _argumentStorage;
	id<MTLBuffer> _drawIDBuffer;
	unsigned short _maxCommands;
	unsigned char _maxVertexBindings;
	unsigned char _maxFragmentBindings;
	unsigned short _commandByteStride;
	unsigned long long _originalResourceOptions;
	id<MTLIndirectCommandBuffer> _fencingICB;

}

@property (nonatomic,readonly) id<MTLBuffer> internalICBBuffer; 
@property (nonatomic,readonly) id<MTLBuffer> internalDrawIDBuffer; 
@property (nonatomic,readonly) unsigned long long maxCommands; 
@property (nonatomic,readonly) unsigned long long maxVertexBindings; 
@property (nonatomic,readonly) unsigned long long maxFragmentBindings; 
@property (nonatomic,readonly) unsigned long long commandByteStride; 
@property (nonatomic,readonly) BOOL inheritsPipelineState; 
@property (nonatomic,readonly) BOOL inheritsBuffers; 
-(unsigned long long)cpuCacheMode;
-(unsigned long long)storageMode;
-(unsigned long long)hazardTrackingMode;
-(id)indirectRenderCommandAtIndex:(unsigned long long)arg1 ;
-(id)indirectComputeCommandAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)resourceOptions;
-(void)dealloc;
-(id<MTLBuffer>)internalICBBuffer;
-(id<MTLBuffer>)internalDrawIDBuffer;
-(id)initWithIndirectCommandBuffer:(id)arg1 descriptor:(id)arg2 maxCommandCount:(unsigned long long)arg3 resourceOptions:(unsigned long long)arg4 device:(id)arg5 ;
-(void)setBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 forStage:(unsigned long long)arg4 commandIndex:(unsigned long long)arg5 ;
-(void)setRenderPipelineStateBuffers:(id)arg1 commandIndex:(unsigned long long)arg2 ;
-(void)setTessellationControlPointIndexBuffer:(id)arg1 offset:(unsigned long long)arg2 commandIndex:(unsigned long long)arg3 ;
-(unsigned long long)maxCommands;
-(unsigned long long)maxVertexBindings;
-(unsigned long long)maxFragmentBindings;
-(unsigned long long)commandByteStride;
-(BOOL)inheritsBuffers;
-(BOOL)inheritsPipelineState;
-(void)onExecuteWithRenderEncoder:(id)arg1 ;
-(void)onExecuteWithComputeEncoder:(id)arg1 ;
-(id)fencingICB;
@end

