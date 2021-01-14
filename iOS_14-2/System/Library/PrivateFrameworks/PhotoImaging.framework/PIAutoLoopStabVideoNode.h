/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <NeutrinoCore/NURenderNode.h>

@class NSDictionary;

@interface PIAutoLoopStabVideoNode : NURenderNode {

	NSDictionary* _bakedRecipe;

}

@property (nonatomic,readonly) NSDictionary * bakedRecipe;              //@synthesize bakedRecipe=_bakedRecipe - In the implementation block
+(id)nodeWithInput:(id)arg1 recipe:(id)arg2 error:(out id*)arg3 ;
-(id)resolvedNodeWithCachedInputs:(id)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4 ;
-(id)_evaluateImageGeometry:(out id*)arg1 ;
-(BOOL)shouldCacheNodeForPipelineState:(id)arg1 ;
-(id)_evaluateVideo:(out id*)arg1 ;
-(BOOL)requiresVideoComposition;
-(BOOL)requiresAudioMix;
-(id)initWithSettings:(id)arg1 inputs:(id)arg2 ;
-(id)_evaluateVideoProperties:(out id*)arg1 ;
-(id)_evaluateVideoComposition:(out id*)arg1 ;
-(id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id*)arg3 ;
-(id)initWithInput:(id)arg1 settings:(id)arg2 bakedRecipe:(id)arg3 ;
-(NSDictionary *)bakedRecipe;
@end

