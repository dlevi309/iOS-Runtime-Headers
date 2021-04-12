/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUTransformNode.h>

@interface NUTrimNode : NUTransformNode {

	SCD_Struct_NU16 _range;

}

@property (readonly) SCD_Struct_NU16 range;              //@synthesize range=_range - In the implementation block
-(SCD_Struct_NU16)range;
-(id)resolvedNodeWithCachedInputs:(id)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4 ;
-(BOOL)shouldCacheNodeForPipelineState:(id)arg1 ;
-(id)_evaluateVideo:(out id*)arg1 ;
-(BOOL)requiresVideoComposition;
-(id)initWithSettings:(id)arg1 inputs:(id)arg2 ;
-(id)_evaluateVideoProperties:(out id*)arg1 ;
-(id)_evaluateImage:(out id*)arg1 ;
-(id)initWithTimeRange:(SCD_Struct_NU16)arg1 input:(id)arg2 ;
-(id)_transformWithError:(out id*)arg1 ;
-(id)_evaluateVideoComposition:(out id*)arg1 ;
@end

