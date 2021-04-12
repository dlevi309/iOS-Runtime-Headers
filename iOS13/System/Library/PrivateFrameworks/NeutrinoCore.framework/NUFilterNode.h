/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NURenderNode.h>

@class NSString;

@interface NUFilterNode : NURenderNode {

	NSString* _filterName;

}

@property (readonly) NSString * filterName;              //@synthesize filterName=_filterName - In the implementation block
-(unsigned long long)hash;
-(id)debugQuickLookObject;
-(NSString *)filterName;
-(id)resolvedNodeWithCachedInputs:(id)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4 ;
-(id)_evaluateImageGeometry:(out id*)arg1 ;
-(void)nu_updateDigest:(id)arg1 ;
-(BOOL)shouldCacheNodeForPipelineState:(id)arg1 ;
-(BOOL)requiresVideoComposition;
-(id)initWithSettings:(id)arg1 inputs:(id)arg2 ;
-(id)_evaluateImage:(out id*)arg1 ;
-(BOOL)isEqualToRenderNode:(id)arg1 ;
-(BOOL)isGeometryNode;
-(id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id*)arg3 ;
-(id)descriptionSubClassHook;
-(id)initWithFilterName:(id)arg1 settings:(id)arg2 inputs:(id)arg3 ;
-(id)initWithFilter:(id)arg1 settings:(id)arg2 inputs:(id)arg3 ;
@end

