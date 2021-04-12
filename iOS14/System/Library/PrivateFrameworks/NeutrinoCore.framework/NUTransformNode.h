/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NURenderNode.h>

@interface NUTransformNode : NURenderNode
+(id)transformNodeWithInput:(id)arg1 transform:(id)arg2 error:(out id*)arg3 ;
-(BOOL)shouldCacheNodeForPipelineState:(id)arg1 ;
-(BOOL)requiresVideoComposition;
-(id)_transformWithError:(out id*)arg1 ;
-(BOOL)isGeometryNode;
-(id)_evaluateGeometrySpaceMap:(out id*)arg1 ;
-(id)descriptionSubClassHook;
-(BOOL)canPropagateOriginalLivePhotoMetadataTrack;
@end

