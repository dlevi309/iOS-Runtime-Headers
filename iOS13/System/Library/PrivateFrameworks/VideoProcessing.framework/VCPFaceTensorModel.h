/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPFaceTensorModel : NSObject {

	int _numBlendshapePlusOne;
	int _numComponents;
	int _numIdentities;
	float* _transformedCoeff;
	float* _blendShapeDelta;
	int _numVertices;
	float* _meanBlendshape;
	float* _tensorCoeff;
	float* _componentsBlendshape;
	int* _blendshapeComponentIndex;

}

@property (readonly) int numVertices;                            //@synthesize numVertices=_numVertices - In the implementation block
@property (readonly) float* meanBlendshape;                      //@synthesize meanBlendshape=_meanBlendshape - In the implementation block
@property (readonly) float* tensorCoeff;                         //@synthesize tensorCoeff=_tensorCoeff - In the implementation block
@property (readonly) float* componentsBlendshape;                //@synthesize componentsBlendshape=_componentsBlendshape - In the implementation block
@property (readonly) int* blendshapeComponentIndex;              //@synthesize blendshapeComponentIndex=_blendshapeComponentIndex - In the implementation block
-(void)dealloc;
-(int)numVertices;
-(id)initWithModelFile:(_sFILE*)arg1 ;
-(float*)meanBlendshape;
-(float*)componentsBlendshape;
-(void)calculateMesh:(float*)arg1 numVertices:(int)arg2 blendshapes:(float*)arg3 outputMesh:(float*)arg4 ;
-(void)calculateModelBlendshapes:(float*)arg1 outputBlendshapes:(float*)arg2 ;
-(float*)tensorCoeff;
-(int*)blendshapeComponentIndex;
@end

