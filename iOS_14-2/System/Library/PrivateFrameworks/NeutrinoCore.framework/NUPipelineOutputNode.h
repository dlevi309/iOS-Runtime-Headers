/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NURenderNode.h>

@interface NUPipelineOutputNode : NURenderNode
-(id)initWithInput:(id)arg1 ;
-(id)resolvedNodeWithCachedInputs:(id)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4 ;
-(id)_evaluateImageGeometry:(out id*)arg1 ;
-(BOOL)shouldCacheNodeForPipelineState:(id)arg1 ;
-(id)_evaluateImage:(out id*)arg1 ;
-(id)initWithInput:(id)arg1 settings:(id)arg2 ;
-(BOOL)_assumeInputIsOpaque;
@end

