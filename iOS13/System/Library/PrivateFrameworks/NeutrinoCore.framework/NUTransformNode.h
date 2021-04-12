/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@end

