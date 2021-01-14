/*
* Generated on Thursday, January 14, 2021 at 2:27:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsRenderPipelineState.h>

@class MTLRenderPipelineDescriptor, MTLTileRenderPipelineDescriptor, MTLRenderPipelineReflection, MTLGPUDebugBuffer, MTLGPUDebugFunction;

@interface MTLGPUDebugRenderPipelineState : MTLToolsRenderPipelineState {

	MTLRenderPipelineDescriptor* _descriptor;
	MTLTileRenderPipelineDescriptor* _tileDescriptor;
	MTLRenderPipelineReflection* _internalReflection;
	MTLRenderPipelineReflection* _userReflection;
	KeyBufferPair _globalConstants;
	unsigned long long _vertexConstantOffset;
	unsigned long long _fragmentConstantOffset;
	unsigned long long _tileConstantOffset;
	MTLGPUDebugBuffer* _indirectStateBuffer;
	BOOL _supportsIndirectCommandBuffers;

}

@property (nonatomic,readonly) MTLGPUDebugFunction * vertexFunction; 
@property (nonatomic,readonly) MTLGPUDebugFunction * fragmentFunction; 
@property (nonatomic,readonly) MTLGPUDebugFunction * tileFunction; 
@property (nonatomic,readonly) MTLRenderPipelineReflection * internalReflection; 
@property (nonatomic,readonly) MTLRenderPipelineReflection * userReflection; 
@property (nonatomic,readonly) MTLGPUDebugBuffer * globalConstantsBuffer; 
@property (nonatomic,readonly) unsigned long long vertexConstantOffset; 
@property (nonatomic,readonly) unsigned long long fragmentConstantOffset; 
@property (nonatomic,readonly) unsigned long long tileConstantOffset; 
@property (nonatomic,readonly) MTLGPUDebugBuffer * indirectStateBuffer; 
-(MTLGPUDebugFunction *)fragmentFunction;
-(MTLGPUDebugFunction *)vertexFunction;
-(MTLGPUDebugFunction *)tileFunction;
-(void)dealloc;
-(MTLGPUDebugBuffer *)globalConstantsBuffer;
-(unsigned long long)vertexConstantOffset;
-(unsigned long long)fragmentConstantOffset;
-(unsigned long long)tileConstantOffset;
-(id)initWithRenderPipelineState:(id)arg1 descriptor:(id)arg2 unwrappedDescriptor:(id)arg3 reflection:(id)arg4 device:(id)arg5 pipelineOptions:(unsigned long long)arg6 ;
-(MTLRenderPipelineReflection *)userReflection;
-(void)releaseReflection;
-(id)initWithRenderPipelineState:(id)arg1 tileDescriptor:(id)arg2 reflection:(id)arg3 device:(id)arg4 ;
-(void)_initConstantsBuffer:(id)arg1 device:(id)arg2 ;
-(id)vertexLibrary;
-(id)fragmentLibrary;
-(MTLRenderPipelineReflection *)internalReflection;
-(MTLGPUDebugBuffer *)indirectStateBuffer;
@end

