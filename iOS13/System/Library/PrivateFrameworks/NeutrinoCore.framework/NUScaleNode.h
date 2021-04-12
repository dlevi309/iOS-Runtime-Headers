/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUAbstractScaleNode.h>

@interface NUScaleNode : NUAbstractScaleNode {

	long long _sampleMode;
	SCD_Struct_NU7 _targetScale;
	SCD_Struct_NU7 _effectiveScale;

}

@property (readonly) SCD_Struct_NU7 targetScale;                 //@synthesize targetScale=_targetScale - In the implementation block
@property (readonly) SCD_Struct_NU7 effectiveScale;              //@synthesize effectiveScale=_effectiveScale - In the implementation block
-(SCD_Struct_NU7)effectiveScale;
-(id)resolvedNodeWithCachedInputs:(id)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4 ;
-(id)_evaluateImageGeometry:(out id*)arg1 ;
-(id)_evaluateImage:(out id*)arg1 ;
-(id)initWithInput:(id)arg1 settings:(id)arg2 ;
-(id)initWithScale:(SCD_Struct_NU7)arg1 sampleMode:(long long)arg2 input:(id)arg3 ;
-(id)initWithTargetScale:(SCD_Struct_NU7)arg1 effectiveScale:(SCD_Struct_NU7)arg2 sampleMode:(long long)arg3 input:(id)arg4 ;
-(id)initWithPipelineState:(id)arg1 input:(id)arg2 ;
-(id)_settingsWithTargetScale:(SCD_Struct_NU7)arg1 effectiveScale:(SCD_Struct_NU7)arg2 sampleMode:(long long)arg3 ;
-(SCD_Struct_NU7)targetScale;
@end

