/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsRenderPipelineState.h>

@class MTLRenderPipelineDescriptor, MTLRenderPipelineReflection, MTLTileRenderPipelineDescriptor;

@interface MTLDebugRenderPipelineState : MTLToolsRenderPipelineState {

	unsigned long long _maxVertexCount;
	unsigned long long _maxInstanceCount;
	unsigned long long _maxPatchCount;
	unsigned long long _rasterSampleCount;
	unsigned long long _colorPixelFormat[8];
	unsigned long long _depthPixelFormat;
	unsigned long long _stencilPixelFormat;
	unsigned long long _vertexDescriptorLayoutCount;
	NSRange _vertexDescriptorLayouts[31];
	BOOL _threadgroupSizeMatchesTileSize;
	MTLRenderPipelineDescriptor* _descriptor;
	MTLRenderPipelineReflection* _reflection;
	MTLTileRenderPipelineDescriptor* _tileDescriptor;

}

@property (nonatomic,readonly) MTLRenderPipelineDescriptor * descriptor;                      //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,readonly) MTLRenderPipelineReflection * reflection;                      //@synthesize reflection=_reflection - In the implementation block
@property (nonatomic,readonly) MTLTileRenderPipelineDescriptor * tileDescriptor;              //@synthesize tileDescriptor=_tileDescriptor - In the implementation block
-(void)dealloc;
-(id)description;
-(MTLRenderPipelineDescriptor *)descriptor;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(MTLRenderPipelineReflection *)reflection;
-(id)initWithPipelineState:(id)arg1 reflection:(id)arg2 parent:(id)arg3 descriptor:(id)arg4 ;
-(id)getParameter:(id)arg1 ;
-(id)initWithPipelineState:(id)arg1 reflection:(id)arg2 parent:(id)arg3 tileDescriptor:(id)arg4 ;
-(MTLTileRenderPipelineDescriptor *)tileDescriptor;
-(id)outputImageBlockData;
-(BOOL)isImageBlockLayoutInputCompatibleWithOutputOf:(id)arg1 ;
-(void)_updateCachedPipelineState:(id)arg1 ;
-(void)_updateCachedTilePipelineState:(id)arg1 ;
-(id)_findMasterStruct:(id)arg1 includeImageBlockData:(BOOL)arg2 ;
@end

