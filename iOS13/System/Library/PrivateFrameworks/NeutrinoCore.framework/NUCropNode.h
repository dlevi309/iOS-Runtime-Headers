/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUTransformNode.h>

@class NUImageTransformAffine;

@interface NUCropNode : NUTransformNode {

	BOOL _resetCleanAperture;
	NUImageTransformAffine* _transform;
	SCD_Struct_NU8 _cropRect;

}

@property (retain) NUImageTransformAffine * transform;              //@synthesize transform=_transform - In the implementation block
@property (assign) SCD_Struct_NU8 cropRect;                         //@synthesize cropRect=_cropRect - In the implementation block
@property (readonly) BOOL resetCleanAperture;                       //@synthesize resetCleanAperture=_resetCleanAperture - In the implementation block
-(NUImageTransformAffine *)transform;
-(id)debugQuickLookObject;
-(void)setTransform:(NUImageTransformAffine *)arg1 ;
-(SCD_Struct_NU8)cropRect;
-(void)setCropRect:(SCD_Struct_NU8)arg1 ;
-(id)resolvedNodeWithCachedInputs:(id)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4 ;
-(id)_evaluateImageGeometry:(out id*)arg1 ;
-(id)initWithSettings:(id)arg1 inputs:(id)arg2 ;
-(id)_evaluateVideoProperties:(out id*)arg1 ;
-(id)_evaluateImage:(out id*)arg1 ;
-(id)_transformWithError:(out id*)arg1 ;
-(BOOL)canPropagateOriginalAuxiliaryData;
-(id)initWithRect:(SCD_Struct_NU8)arg1 input:(id)arg2 resetCleanAperture:(BOOL)arg3 settings:(id)arg4 ;
-(id)initWithRect:(SCD_Struct_NU8)arg1 input:(id)arg2 ;
-(id)transformAffine;
-(CGPoint)scaleCropOriginForOriginalVideoSize:(CGSize)arg1 originalCleanAperture:(CGRect)arg2 renderScale:(double)arg3 inputExtent:(SCD_Struct_NU8)arg4 ;
-(BOOL)scaledCropOrigin:(CGPoint*)arg1 error:(out id*)arg2 ;
-(BOOL)resetCleanAperture;
@end

