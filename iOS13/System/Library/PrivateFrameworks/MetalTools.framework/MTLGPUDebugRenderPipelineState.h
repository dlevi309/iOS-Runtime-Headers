/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MTLToolsRenderPipelineState.h>

@class MTLRenderPipelineDescriptor, MTLTileRenderPipelineDescriptor, MTLRenderPipelineReflection, MTLToolsFunction;

@interface MTLGPUDebugRenderPipelineState : MTLToolsRenderPipelineState {

	MTLRenderPipelineDescriptor* _descriptor;
	MTLTileRenderPipelineDescriptor* _tileDescriptor;
	MTLRenderPipelineReflection* _reflection;

}

@property (nonatomic,readonly) MTLToolsFunction * vertexFunction; 
@property (nonatomic,readonly) MTLToolsFunction * fragmentFunction; 
@property (nonatomic,readonly) MTLRenderPipelineReflection * reflection; 
-(void)dealloc;
-(MTLToolsFunction *)fragmentFunction;
-(MTLToolsFunction *)vertexFunction;
-(MTLRenderPipelineReflection *)reflection;
-(id)initWithRenderPipelineState:(id)arg1 descriptor:(id)arg2 reflection:(id)arg3 device:(id)arg4 ;
-(id)initWithRenderPipelineState:(id)arg1 tileDescriptor:(id)arg2 reflection:(id)arg3 device:(id)arg4 ;
-(id)vertexLibrary;
-(id)fragmentLibrary;
@end

