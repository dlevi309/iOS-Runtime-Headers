/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)update:(SCD_Struct_SC164*)arg1 ;
-(id)initWithGeometry:(_C3DGeometry*)arg1 resourceManager:(id)arg2 ;
-(unsigned char)pipelineStateHashForMeshElement:(id)arg1 patchType:(unsigned char)arg2 ;
-(/*^block*/id)newPipelineStateConfiguratorForMeshElement:(id)arg1 patchType:(unsigned char)arg2 device:(id)arg3 ;
-(void)draw:(SCD_Struct_SC165*)arg1 ;
-(SCD_Struct_SC166)_pipelineStateHashForMeshElement:(id)arg1 patchType:(unsigned char)arg2 ;
-(void)updateUniformTessellator:(SCD_Struct_SC167)arg1 ;
-(void)updateScreenSpaceAdaptiveTessellator:(SCD_Struct_SC167)arg1 parameters:(SCD_Struct_SC164*)arg2 ;
-(void)updateConstrainedEdgeLengthTessellator:(SCD_Struct_SC167)arg1 withMesh:(id)arg2 computeCommandEncoder:(id)arg3 ;
-(void)updateSubdivisionSurfaceTessellator:(SCD_Struct_SC167)arg1 parameters:(SCD_Struct_SC164*)arg2 ;
-(void)uniformTessellationDrawMeshElement:(id)arg1 forMesh:(id)arg2 instanceCount:(unsigned long long)arg3 renderCommandEncoder:(id)arg4 renderContext:(id)arg5 ;
-(void)screenSpaceAdaptiveTessellationDrawMeshElement:(id)arg1 forMesh:(id)arg2 instanceCount:(unsigned long long)arg3 renderCommandEncoder:(id)arg4 renderContext:(id)arg5 ;
-(void)constrainedEdgeLengthTessellationDrawMeshElement:(id)arg1 forMesh:(id)arg2 instanceCount:(unsigned long long)arg3 renderCommandEncoder:(id)arg4 renderContext:(id)arg5 ;
-(void)subdivisionSurfaceTessellationDraw:(SCD_Struct_SC165*)arg1 ;
@end

