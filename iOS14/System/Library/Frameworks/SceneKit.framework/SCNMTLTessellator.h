/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/


@protocol MTLBuffer;
#import <SceneKit/SceneKit-Structs.h>
@class SCNMTLResourceManager;

@interface SCNMTLTessellator : NSObject {

	_C3DGeometry* _geometry;
	SCNMTLResourceManager* _resourceManager;
	SCD_Struct_SC163 _cachedTessellator;
	id<MTLBuffer> _tessellationFactorBuffer;

}
-(void)update:(SCD_Struct_SC164*)arg1 ;
-(void)draw:(SCD_Struct_SC165*)arg1 ;
-(void)dealloc;
-(id)initWithGeometry:(_C3DGeometry*)arg1 resourceManager:(id)arg2 ;
-(unsigned char)pipelineStateHashForMeshElement:(id)arg1 patchType:(unsigned char)arg2 ;
-(/*^block*/id)newPipelineStateConfiguratorForMeshElement:(id)arg1 patchType:(unsigned char)arg2 device:(id)arg3 ;
-(SCD_Struct_SC166)_pipelineStateHashForMeshElement:(id)arg1 patchType:(unsigned char)arg2 ;
-(void)updateUniformTessellator:(SCD_Struct_SC167)arg1 ;
-(void)updateScreenSpaceAdaptiveTessellator:(SCD_Struct_SC167)arg1 parameters:(SCD_Struct_SC164*)arg2 ;
-(void)updateConstrainedEdgeLengthTessellator:(SCD_Struct_SC167)arg1 parameters:(SCD_Struct_SC164*)arg2 ;
-(void)updateSubdivisionSurfaceTessellator:(SCD_Struct_SC167)arg1 parameters:(SCD_Struct_SC164*)arg2 ;
-(void)uniformTessellationDrawMeshElement:(id)arg1 forMesh:(id)arg2 instanceCount:(unsigned long long)arg3 renderContext:(id)arg4 ;
-(void)screenSpaceAdaptiveTessellationDrawMeshElement:(id)arg1 forMesh:(id)arg2 instanceCount:(unsigned long long)arg3 renderContext:(id)arg4 ;
-(void)constrainedEdgeLengthTessellationDrawMeshElement:(id)arg1 forMesh:(id)arg2 instanceCount:(unsigned long long)arg3 renderContext:(id)arg4 ;
-(void)subdivisionSurfaceTessellationDraw:(SCD_Struct_SC165*)arg1 ;
@end

