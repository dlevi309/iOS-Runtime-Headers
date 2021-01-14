/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUSourceNode.h>

@interface NUTestPatternSourceNode : NUSourceNode {

	SCD_Struct_NU7 _size;
	long long _orientation;
	SCD_Struct_NU7 _scale;

}
-(id)initWithSettings:(id)arg1 ;
-(id)resolvedNodeWithCachedInputs:(id)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4 ;
-(id)_evaluateImagePropertiesWithSourceOptions:(id)arg1 error:(out id*)arg2 ;
-(id)_evaluateImageGeometryWithSourceOptions:(id)arg1 error:(out id*)arg2 ;
-(id)_evaluateImageWithSourceOptions:(id)arg1 subsampleFactor:(long long*)arg2 error:(out id*)arg3 ;
-(id)preparedNodeWithSourceContainer:(id)arg1 pipelineState:(id)arg2 pipelineSettings:(id)arg3 sourceSettings:(id)arg4 error:(out id*)arg5 ;
-(long long)sourceOrientation;
-(BOOL)shouldCacheNodeForPipelineState:(id)arg1 ;
-(SCD_Struct_NU7)pixelSizeWithSourceOptions:(id)arg1 ;
-(BOOL)supportsPipelineState:(id)arg1 error:(out id*)arg2 ;
-(id)_evaluateImage:(out id*)arg1 ;
-(id)initWithSize:(SCD_Struct_NU7)arg1 orientation:(long long)arg2 ;
-(id)initWithSize:(SCD_Struct_NU7)arg1 orientation:(long long)arg2 scale:(SCD_Struct_NU7)arg3 ;
@end

