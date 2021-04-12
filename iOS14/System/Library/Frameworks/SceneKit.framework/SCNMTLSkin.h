/*
* Generated on Thursday, January 14, 2021 at 2:27:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/


@protocol MTLBuffer;
#import <SceneKit/SceneKit-Structs.h>
@class SCNMTLComputePipeline, MTLStageInputOutputDescriptor;

@interface SCNMTLSkin : NSObject {

	unsigned _vertexCount;
	BOOL _needNormal;
	BOOL _needTangent;
	id<MTLBuffer> _vertexWeightIndicesBuffer;
	id<MTLBuffer> _boneIndicesBuffer;
	id<MTLBuffer> _boneWeightsBuffer;
	SCNMTLComputePipeline* _computePS;
	MTLStageInputOutputDescriptor* _computeStageDesc;

}
-(void)dealloc;
-(id)initWithSkinner:(C3DSkinnerRef)arg1 baseMesh:(C3DMeshRef)arg2 baseGeometry:(_C3DGeometry*)arg3 resourceManager:(id)arg4 ;
-(void)skinMesh:(id)arg1 with:(id)arg2 skinner:(C3DSkinnerRef)arg3 renderContext:(id)arg4 ;
@end

