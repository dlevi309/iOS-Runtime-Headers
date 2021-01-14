/*
* Generated on Thursday, January 14, 2021 at 2:27:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	unsigned long long _attachmentWriteMask;
	MTLRenderPipelineDescriptor* _descriptor;
	MTLRenderPipelineReflection* _reflection;
	MTLTileRenderPipelineDescriptor* _tileDescriptor;

}

@property (nonatomic,readonly) BOOL rasterizationEnabled; 
@property (nonatomic,readonly) MTLRenderPipelineDescriptor * descriptor;                      //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,readonly) MTLRenderPipelineReflection * reflection;                      //@synthesize reflection=_reflection - In the implementation block
@property (nonatomic,readonly) unsigned long long attachmentWriteMask;                        //@synthesize attachmentWriteMask=_attachmentWriteMask - In the implementation block
@property (nonatomic,readonly) MTLTileRenderPipelineDescriptor * tileDescriptor;              //@synthesize tileDescriptor=_tileDescriptor - In the implementation block
-(id)formattedDescription:(unsigned long long)arg1 ;
-(MTLRenderPipelineDescriptor *)descriptor;
-(id)description;
-(void)dealloc;
-(id)initWithPipelineState:(id)arg1 reflection:(id)arg2 parent:(id)arg3 descriptor:(id)arg4 ;
-(MTLRenderPipelineReflection *)reflection;
-(id)getParameter:(id)arg1 ;
-(id)initWithPipelineState:(id)arg1 reflection:(id)arg2 parent:(id)arg3 tileDescriptor:(id)arg4 ;
-(unsigned long long)attachmentWriteMask;
-(BOOL)rasterizationEnabled;
-(MTLTileRenderPipelineDescriptor *)tileDescriptor;
-(id)outputImageBlockData;
-(BOOL)isImageBlockLayoutInputCompatibleWithOutputOf:(id)arg1 ;
-(void)_updateCachedPipelineState:(id)arg1 ;
-(void)_updateCachedTilePipelineState:(id)arg1 ;
-(id)_findMasterStruct:(id)arg1 includeImageBlockData:(BOOL)arg2 ;
@end

