/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NURenderNode.h>

@class NSString;

@interface NUFilterNode : NURenderNode {

	NSString* _filterName;

}

@property (readonly) NSString * filterName;              //@synthesize filterName=_filterName - In the implementation block
-(id)debugQuickLookObject;
-(NSString *)filterName;
-(unsigned long long)hash;
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

