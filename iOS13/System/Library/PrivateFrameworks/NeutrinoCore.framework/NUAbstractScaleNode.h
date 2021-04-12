/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NURenderNode.h>

@class NURenderNode;

@interface NUAbstractScaleNode : NURenderNode

@property (nonatomic,readonly) NURenderNode * inputNode; 
-(NURenderNode *)inputNode;
-(BOOL)shouldCacheNodeForPipelineState:(id)arg1 ;
-(id)initWithSettings:(id)arg1 inputs:(id)arg2 ;
-(id)initWithInput:(id)arg1 settings:(id)arg2 ;
-(id)_scaleImage:(id)arg1 by:(SCD_Struct_NU7)arg2 sampleMode:(long long)arg3 ;
@end

