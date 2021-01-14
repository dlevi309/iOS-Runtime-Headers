/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUTransformNode.h>

@class NUGeometryTransform;

@interface NUSlowMotionNode : NUTransformNode {

	float _rate;
	NUGeometryTransform* _geomTransform;
	SCD_Struct_NU16 _range;

}

@property (readonly) NUGeometryTransform * geomTransform;              //@synthesize geomTransform=_geomTransform - In the implementation block
@property (readonly) SCD_Struct_NU16 range;                            //@synthesize range=_range - In the implementation block
@property (readonly) float rate;                                       //@synthesize rate=_rate - In the implementation block
-(SCD_Struct_NU16)range;
-(float)rate;
-(id)resolvedNodeWithCachedInputs:(id)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4 ;
-(BOOL)shouldCacheNodeForPipelineState:(id)arg1 ;
-(id)_evaluateVideo:(out id*)arg1 ;
-(BOOL)requiresVideoComposition;
-(BOOL)requiresAudioMix;
-(id)initWithSettings:(id)arg1 inputs:(id)arg2 ;
-(id)_evaluateImage:(out id*)arg1 ;
-(id)_transformWithError:(out id*)arg1 ;
-(id)_evaluateVideoComposition:(out id*)arg1 ;
-(id)initWithTimeRange:(SCD_Struct_NU16)arg1 rate:(float)arg2 input:(id)arg3 ;
-(id)_evaluateAudioMix:(out id*)arg1 ;
-(NUGeometryTransform *)geomTransform;
@end

