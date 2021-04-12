/*
* Generated on Thursday, January 14, 2021 at 2:27:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/


@protocol MTLBuffer;
#import <SceneKit/SceneKit-Structs.h>
@class SCNMTLResourceManager, NSArray, SCNMTLComputePipeline;

@interface SCNMTLMorph : NSObject {

	SCNMTLResourceManager* _resourceManager;
	SCD_Struct_SC5 _baseBuffer;
	unsigned _baseVertexCount;
	short _baseBufferTypes[3];
	unsigned _baseBufferTypesCount;
	unsigned _baseBufferStride;
	short _targetBufferTypes[3];
	unsigned _targetBufferTypesCount;
	unsigned _targetBufferStride;
	unsigned _dstSemanticUsageMask;
	unsigned _srcSemanticUsageMask;
	SCNMTLBufferPool* _bufferPool;
	BOOL _unifyPostMorphNormals;
	BOOL _shouldMorphNormals;
	unsigned char _dataKindForMorphing;
	id<MTLBuffer> _splatProvokingVertices;
	SCD_Struct_SC6 _postUnifyInfo;
	Target* _targets;
	unsigned long long _targetCount;
	NSArray* _originalTargets;
	SCNMTLComputePipeline* _copyCPS;
	SCNMTLComputePipeline* _blendCPS;
	SCNMTLComputePipeline* _blendSparseCPS;
	SCNMTLComputePipeline* _splatCPS;

}
-(SCD_Struct_SC7)newBufferWithLength:(unsigned long long)arg1 ;
-(void)dealloc;
-(unsigned)sparseIndexSize;
-(void)_prepareTargetDataForIndex:(long long)arg1 morph:(C3DMorphRef)arg2 baseMesh:(C3DMeshRef)arg3 ;
-(void)_writeSources:(const _C3DMeshSource*)arg1 dstTypes:(short*)arg2 sourcesCount:(unsigned)arg3 inBuffer:(void*)arg4 stride:(unsigned)arg5 length:(unsigned long long)arg6 sparse:(BOOL)arg7 positionScale:(float)arg8 ;
-(id)initWithMorph:(C3DMorphRef)arg1 baseGeometry:(_C3DGeometry*)arg2 resourceManager:(id)arg3 ;
-(BOOL)isCompatibleWithMorph:(C3DMorphRef)arg1 ;
-(void)morphIncrementallyForMorpher:(_C3DMorpher*)arg1 renderContext:(id)arg2 positionBuffer:(id)arg3 normalBuffer:(id)arg4 ;
-(void)unifyMeshWithRenderContext:(id)arg1 positionBuffer:(id)arg2 normalBuffer:(id)arg3 ;
-(void)morphSparseMorpher:(_C3DMorpher*)arg1 renderContext:(id)arg2 positionBuffer:(id)arg3 normalBuffer:(id)arg4 ;
@end

