/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUSourceNode.h>

@class NURenderPipeline, NUComposition;

@interface NUCompositionSourceNode : NUSourceNode {

	NURenderPipeline* _renderPipeline;
	NUComposition* _composition;
	SCD_Struct_NU7 _pixelSize;

}
-(id)initWithSettings:(id)arg1 ;
-(BOOL)load:(out id*)arg1 ;
-(id)_evaluateImagePropertiesWithSourceOptions:(id)arg1 error:(out id*)arg2 ;
-(id)_evaluateImageGeometryWithSourceOptions:(id)arg1 error:(out id*)arg2 ;
-(id)preparedNodeWithSourceContainer:(id)arg1 pipelineState:(id)arg2 pipelineSettings:(id)arg3 sourceSettings:(id)arg4 error:(out id*)arg5 ;
-(BOOL)shouldCacheNodeForPipelineState:(id)arg1 ;
-(SCD_Struct_NU7)pixelSizeWithSourceOptions:(id)arg1 ;
-(id)_evaluateImage:(out id*)arg1 ;
-(id)initWithComposition:(id)arg1 renderPipeline:(id)arg2 settings:(id)arg3 ;
-(id)_compositionRenderNodeForPipelineState:(id)arg1 error:(out id*)arg2 ;
@end

