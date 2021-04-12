/*
* Generated on Monday, March 1, 2021 at 2:34:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleCVA.framework/AppleCVA
*/


#import <AppleCVA/AppleCVA-Structs.h>
@class NSDictionary, NSArray;

@interface GazeMesh : NSObject {

	NSDictionary* _faceKitSemantics;
	shared_ptr<const shrek::IdentityTensor>* _tensorModel;
	vector<float, std::__1::allocator<float> >* _previousIdentityCoefficients;
	vector<float __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))> >* _eyeOffsetsGeneric;
	vector<float, std::__1::allocator<float> >* _landmarkWeights;
	vector<unsigned int, std::__1::allocator<unsigned int> >* _landmarkIds;
	const float* _verticesNeutral;
	vector<int, std::__1::allocator<int> >* _eyeRegionTriangles;
	vector<int, std::__1::allocator<int> >* _eyeRegionIndices;
	int _vertexCount;
	int _triangleCount;
	vector<int, std::__1::allocator<int> >* _triangles;
	vector<float __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))> >* _eyeOffsets;
	vector<float, std::__1::allocator<float> >* _vertexWeightsFace;
	vector<float, std::__1::allocator<float> >* _vertexWeightsEyes;

}

@property (nonatomic,readonly) int vertexCount;                                                          //@synthesize vertexCount=_vertexCount - In the implementation block
@property (nonatomic,readonly) int triangleCount;                                                        //@synthesize triangleCount=_triangleCount - In the implementation block
@property (nonatomic,readonly) vector<int triangles;                                                     //@synthesize triangles=_triangles - In the implementation block
@property (nonatomic,readonly) vector<float __attribute__((ext_vector_type(3))) eyeOffsets;              //@synthesize eyeOffsets=_eyeOffsets - In the implementation block
@property (nonatomic,readonly) vector<float vertexWeightsFace;                                           //@synthesize vertexWeightsFace=_vertexWeightsFace - In the implementation block
@property (nonatomic,readonly) vector<float vertexWeightsEyes;                                           //@synthesize vertexWeightsEyes=_vertexWeightsEyes - In the implementation block
@property (nonatomic,readonly) vector<float landmarkWeights; 
@property (nonatomic,readonly) vector<unsigned int landmarkIds; 
@property (nonatomic,readonly) NSArray * landmarkNames; 
-(id)init;
-(int)vertexCount;
-(int)triangleCount;
-(void)neutralLabeling:(array<float, 3>*)arg1 ;
-(vector<unsigned int)landmarkIds;
-(vector<float)landmarkWeights;
-(NSArray *)landmarkNames;
-(vector<float __attribute__((ext_vector_type(3))))eyeOffsets;
-(vector<float)vertexWeightsFace;
-(vector<float)vertexWeightsEyes;
-(vector<int)triangles;
-(void)initQuadMesh:(quad_mesh<float>*)arg1 ;
-(void)updateEyeOffsetsWithIdentityCoefficients:(const float*)arg1 ;
-(BOOL)checkIdentityChangedWithIdentityCoefficients:(const float*)arg1 ;
-(2)computeMeshCenterWithVertices:(const array<float, 3>*)arg1 ;
-(void)getEyePosWithVertices:(const array<float, 3>*)arg1 leftEyePos:(2*)arg2 rightEyePos:(3*)arg3 ;
-(BOOL)computeEyeOffsetsWithResourceDir:(id)arg1 ;
-(void)loadVerticesWithResourceFile:(id)arg1 ResourceDir:(id)arg2 Vertices:(vector<float, std::__1::allocator<float> >*)arg3 ;
-(void)loadIndicesWithResourceFile:(id)arg1 ResourceDir:(id)arg2 Indices:(vector<int, std::__1::allocator<int> >*)arg3 ;
-(void)computeVertexWeights:(vector<float, std::__1::allocator<float> >*)arg1 sigma:(float)arg2 includedLandmarks:(id)arg3 ;
-(BOOL)deformationTransfer:(const array<float, 3>*)arg1 SourceOffsets:(2*)arg2 VerticesTarget:(const array<float, 3>*)arg3 VertexIndices:(const int*)arg4 Triangles:(const int*)arg5 VertexCount:(int)arg6 TriangleCount:(int)arg7 FixedVertexIdx:(int)arg8 VerticesTargetDeformed:(array<float, 3>*)arg9 ;
-(SCD_Struct_Ga28)computeBoundBoxToModelWithVertices:(const array<float, 3>*)arg1 ;
@end

