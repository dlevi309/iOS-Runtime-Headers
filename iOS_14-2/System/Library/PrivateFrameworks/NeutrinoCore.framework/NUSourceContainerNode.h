/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NURenderNode.h>

@class NUSourceNode;

@interface NUSourceContainerNode : NURenderNode

@property (readonly) NUSourceNode * primarySourceNode; 
+(id)sourceContainerNodeFromSource:(id)arg1 error:(out id*)arg2 ;
-(unsigned long long)_hash;
-(id)initWithAssetIdentifier:(id)arg1 ;
-(id)initWithSettings:(id)arg1 inputs:(id)arg2 ;
-(id)preparedSourceNodeForPipelineState:(id)arg1 pipelineSettings:(id)arg2 sourceSettings:(id)arg3 error:(out id*)arg4 ;
-(id)sourceNodeForPipelineState:(id)arg1 error:(out id*)arg2 ;
-(id)resolveSourceNodeForPipelineState:(id)arg1 foundScale:(SCD_Struct_NU7*)arg2 error:(out id*)arg3 ;
-(BOOL)isEqualToRenderNode:(id)arg1 ;
@end

