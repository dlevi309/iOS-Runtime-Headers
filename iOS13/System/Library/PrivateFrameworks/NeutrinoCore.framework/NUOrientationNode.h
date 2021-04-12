/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NUTransformNode.h>

@class NUImageTransform;

@interface NUOrientationNode : NUTransformNode {

	long long _orientation;
	NUImageTransform* _transform;

}

@property (retain) NUImageTransform * transform;              //@synthesize transform=_transform - In the implementation block
@property (readonly) long long orientation;                   //@synthesize orientation=_orientation - In the implementation block
+(id)applyOrientation:(long long)arg1 to:(id)arg2 ;
-(NUImageTransform *)transform;
-(long long)orientation;
-(void)setTransform:(NUImageTransform *)arg1 ;
-(id)resolvedNodeWithCachedInputs:(id)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4 ;
-(id)_evaluateImageGeometry:(out id*)arg1 ;
-(BOOL)shouldCacheNodeForPipelineState:(id)arg1 ;
-(id)_evaluateVideo:(out id*)arg1 ;
-(BOOL)requiresVideoComposition;
-(id)initWithSettings:(id)arg1 inputs:(id)arg2 ;
-(id)_evaluateVideoProperties:(out id*)arg1 ;
-(id)_evaluateImage:(out id*)arg1 ;
-(id)_transformWithError:(out id*)arg1 ;
-(BOOL)isGeometryNode;
-(id)initWithOrientation:(long long)arg1 input:(id)arg2 ;
-(id)_evaluateAuxiliaryImageForType:(long long)arg1 error:(out id*)arg2 ;
-(BOOL)canPropagateOriginalAuxiliaryData;
-(long long)outputImageOrientation:(long long)arg1 ;
@end

